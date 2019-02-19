#include "VCLogin.h"
#include "ui_VCLogin.h"

VCLogin::VCLogin(QWidget *parent)
    : QDialog(parent)
{
    ui = new Ui::VCLogin();
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);//为输入密码模式
    this->setAttribute(Qt::WA_DeleteOnClose);//设置为关闭时删除
    this->setWindowFlags(Qt::SplashScreen);//
    this->setWindowFlags(Qt::FramelessWindowHint);//设置为无边框模式
    readsetting();
}

VCLogin::~VCLogin()
{
    delete ui;
}

void VCLogin::readsetting()
{
    
    QSettings setting(organization, appname);
    bool saved = setting.value("saved", false).toBool();
    username = setting.value("Username", "gaochong").toString();
    QString defaultpassword = encrypt("and1gc");
    password = setting.value("PSWD", defaultpassword).toString();
    if (saved)
        ui->lineEdit->setText(username);
    ui->checkBox->setChecked(saved);
}

void VCLogin::writesetting()
{
    QSettings setting(organization, appname);
    setting.setValue("Username", username);
    setting.setValue("PSWD", password);
    setting.setValue("saved", ui->checkBox->isChecked());
}

QString VCLogin::encrypt(const QString & str)
{
    QByteArray btarray;
    btarray.append(str);
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(btarray);
    QByteArray result = hash.result();
    QString md5 = result.toHex();
    return md5;
}

void VCLogin::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        ismoving = true;
        lastpos = event->globalPos() - pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void VCLogin::mouseMoveEvent(QMouseEvent * event)
{
    if (ismoving && (event->buttons() && Qt::LeftButton) && (event->globalPos() - lastpos).manhattanLength() > QApplication::startDragDistance())
    {
        move(event->globalPos() - lastpos);
        lastpos = event->globalPos() - pos();
    }
}

void VCLogin::mouseReleaseEvent(QMouseEvent * event)
{
    ismoving = true;
}
void VCLogin::clickok()
{
    QString user = ui->lineEdit->text().trimmed();
    QString pwd = ui->lineEdit_2->text().trimmed();
    QString encryptpwd = encrypt(pwd);
    if (username == user && password == encryptpwd)
    {
        writesetting();
        this->accept();
    }
    else
    {
        ++trycounts;
        if (trycounts > 3)
        {
            QMessageBox::critical(this, "Error", "Too many tries");
            this->reject();
        }
        else
        {
            QMessageBox::information(this, "Wrong", "Wrong username or password,\n         Try aggin");
        }
    }
}
