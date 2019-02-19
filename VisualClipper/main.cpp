#include "VisualClipper.h"
#include <QtWidgets/QApplication>
#include <qtextcodec.h>
#include "VCLogin.h"

int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);
    QApplication a(argc, argv);
    VCLogin *dlglogin = new VCLogin;
    if (dlglogin->exec() == QDialog::Accepted)
    {
        
        VisualClipper w;
        /*QIcon icon;
        icon.addFile(QStringLiteral("icon1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        w.setWindowIcon(icon);*/
        w.show();
        return a.exec();
    }
    else
        return 0;
}
