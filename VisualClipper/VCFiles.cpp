#include "VCFiles.h"

VCFiles::VCFiles(const QString &filename, QWidget *parent)
    : wanttoopen(filename),QWidget(parent),ui(new Ui::VCFiles)
{
    ui->setupUi(this);
    if (wanttoopen == "")
    {
        QDateTime curtime = QDateTime::currentDateTime();
        this->setWindowTitle("New Doc Created on " + curtime.toString("hh:mm:ss d/M/yyyy"));
    }
    else
        this->setWindowTitle(wanttoopen);
    QFont font;//����Ĭ������
    font.setFamily("Times New Roman");
    font.setPointSize(14);
    ui->plainTextEdit->setFont(font);
    ui->plainTextEdit->clear();
    ui->plainTextEdit->setPlainText("#you can write your program now");
    QTextCursor cursor = ui->plainTextEdit->textCursor();//����������ı����
    cursor.movePosition(QTextCursor::End);
    ui->plainTextEdit->setTextCursor(cursor);
    
    //����label����ɫ
    QPalette pal = ui->label->palette();
    pal.setColor(QPalette::WindowText, Qt::red);
    ui->label->setPalette(pal);

    //�ж��Ǵ��ļ������½��ļ�
    if (wanttoopen != "")
        neworopen(wanttoopen);


}

VCFiles::~VCFiles()
{
    QMessageBox::information(this, "ATTENTION", "Window of Doc is released");
    delete ui;
}

void VCFiles::loadFromFile(QString & afilename)
{
}

QString VCFiles::currentFileName()
{
    return QString();
}

bool VCFiles::isFileOpened()
{
    return false;
}

void VCFiles::setEditFont()
{
}

void VCFiles::textCut()
{
}

void VCFiles::textCopy()
{
}

void VCFiles::textPaste()
{
}

void VCFiles::closeEvent(QCloseEvent * event)
{
    if (newfileissaved == false)//������棬��ô���ж��ǲ�����Ҫ����
    {
        QMessageBox::StandardButton result;
        result = QMessageBox::question(this, "New Doc", "Do you want to save this new file?",QMessageBox::Yes|QMessageBox::No);
        if (result == QMessageBox::Yes)
            wanttosave();
        else
            event->accept();
    }
    else
        event->accept();
}

void VCFiles::setfont()
{
    QFont initfont = ui->plainTextEdit->font();
    bool ok = false;
    QFont font = QFontDialog::getFont(&ok, initfont);
    if (ok)
        ui->plainTextEdit->setFont(font);
}

void VCFiles::setcolor()
{
    QPalette pal = ui->plainTextEdit->palette();
    QColor initcolor = pal.color(QPalette::Text);
    QColor color = QColorDialog::getColor(initcolor, this, "choose color");
    if (color.isValid())
    {
        pal.setColor(QPalette::Text, color);
        ui->plainTextEdit->setPalette(pal);
    }
}

void VCFiles::neworopen(const QString &filename)
{
    QFile afile(filename);
    if (!afile.exists())//�ļ�������
    {
        QMessageBox::warning(this, "WARNING", "FILE NOT EXIST");
        return;
    }
    if (!afile.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QMessageBox::warning(this, "WARNING", "FILE OPENED FAILED");
        return;
    }
    QTextStream astream(&afile);
    astream.setAutoDetectUnicode(true);
    ui->plainTextEdit->clear();
    ui->plainTextEdit->setPlainText(astream.readAll());
    afile.close();
}

void VCFiles::wanttosave()
{   
    QString curpath;
    if(wanttoopen=="")
         curpath = QCoreApplication::applicationFilePath() + "/untitled.pmc";
    else
        curpath = wanttoopen;

    QString afilename = QFileDialog::getSaveFileName(this, "Save file to ...", curpath,"pmc files(*.pmc);;all files(*.*)");
    QFile afile(afilename);
    if(!afile.open(QIODevice::WriteOnly|QIODevice::Text))
        return ;
        
    QTextStream astream(&afile);
    astream.setAutoDetectUnicode(true);
    QString str = ui->plainTextEdit->toPlainText();
    astream << str;
    afile.close();
    newfileissaved = true;
    if (newfileissaved)
    {
        ui->label->setText("Saved");
        QPalette pal = ui->label->palette();
        pal.setColor(QPalette::WindowText, Qt::black);
        ui->label->setPalette(pal);

    }

}
