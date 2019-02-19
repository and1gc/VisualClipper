#include "VisualClipper.h"
#include <qcoreapplication.h>


VisualClipper::VisualClipper(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::VisualClipperClass)
{
    ui->setupUi(this);
    pmac = new PmacDevice();
    updateconsole("Welcome to VisualClipper (*_*). ");
    //this->setCentralWidget(ui->mdiArea);
    //this->setWindowState(Qt::WindowMaximized);
    /*bool flag = false;
    HRESULT coret=CoInitialize(NULL);//初始化COM库
    if (coret != S_OK && coret != S_FALSE)
    {
        QMessageBox::warning(nullptr, QString::fromLocal8Bit("通讯失败"), QString::fromLocal8Bit("初始化COM库失败！"));
        return;
    }
    com1 = new QAxObject(this);
    bool ret1 = com1->isNull();
    //bool ret=com1->setControl(QString::fromUtf8("{50ECCF67-B73C-431B-A53D-9EDDAF3CE611}"));
    bool ret = com1->setControl(("C:/Windows/SysWOW64/PcommServer.exe"));
    ret1 = com1->isNull();

    if (!ret)
    {
        QMessageBox::warning(nullptr, QString::fromLocal8Bit("通讯失败"), QString::fromLocal8Bit("PCOMMSERVER还未在系统注册！"));
        return;
    }
    flag = true;*/

    
};
int VisualClipper::lines = 1;

void VisualClipper::init_network()
{
    updateconsole("Read to establish network communication....");
    
    bool isSuccessed=false;
    int pmacnumber=-1 ;
    pmac->SelectDevice(NULL, pmacnumber, isSuccessed);
    jugue(isSuccessed,"No device is ready to selected");
    isSuccessed = false;
    pmac->Open(pmacnumber, isSuccessed);
    jugue(!isSuccessed, QString("Device ")+QString::number(pmacnumber)+ " is selected");
    updateconsole("Communication established!");
}

void VisualClipper::jog_forward()
{
    int pstatus;
    pmac->SendCommand(0, "j+", pstatus);
    updateconsole("Motor 1 is jogging forward .");
}

void VisualClipper::jog_reverse()
{
    int pstatus;
    pmac->SendCommand(0, "j-", pstatus);
    updateconsole("Motor 1 is jogging reverse .");
}

void VisualClipper::jog_kill()
{
    int pstatus;
    pmac->SendCommand(0, "k", pstatus);
    updateconsole("Motor 1 is killed .");
}



void VisualClipper::enabled(bool isEnabled)
{
    if (isEnabled == false)
    {
        int pstatus;
        pmac->SendCommand(0, "j/", pstatus);
        updateconsole("Motor 1 is enabled.");
    }
    updateconsole("Motor 1 has been enabled.");
    
}

void VisualClipper::VCFilesopen()
{
    QString curpath = QDir::currentPath();//获取应用程序当前的目录
    QString afilename = QFileDialog::getOpenFileName(this, "Choose one file", curpath, "pmc files(*.pmc);;all files(*.*)");
    if (afilename == "")
    {
        QMessageBox::critical(this, "Error", "please choose a file");
        return;
    }
    VCFiles *vcfilesopen = new VCFiles(afilename);//VCFiles是独立的窗口
    vcfilesopen->show();
    

}

void VisualClipper::VCFilesnew()
{
    VCFiles *vcfilesopen = new VCFiles();//VCFiles是独立的窗口
    vcfilesopen->show();
}



void VisualClipper::updateconsole(const QString & str)
{
    console += gettime() + str + "\n";
    ui->m_console->setPlainText(console);
    QTextCursor curcursor = ui->m_console->textCursor();
    curcursor.movePosition(QTextCursor::End);
    ui->m_console->setTextCursor(curcursor);
}

QString VisualClipper::gettime()
{
    curdatetime = QDateTime::currentDateTime();
    
    return ">"+QString::number(lines++)+" ("+curdatetime.toString("hh:mm:ss")+"): ";
}

void VisualClipper::jugue(bool tag,const QString& str)
{
    if (!tag)
        updateconsole(str);
}