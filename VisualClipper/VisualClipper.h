#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VisualClipper.h"
#include "pcommserverlib.h"
#include "VCFiles.h"
#include <qmessagebox.h>
#include <Windows.h>
#include <qdebug.h>
#include <qdatetime.h>
#include <qchart.h>
#include <qdatavisualizationglobal.h>
#include <qfile.h>
using namespace PCOMMSERVERLib;
using namespace QtCharts;
class VisualClipper : public QMainWindow
{
    Q_OBJECT

public:
    VisualClipper(QWidget *parent = Q_NULLPTR);
    ~VisualClipper()
    {  
        delete pmac;
        //delete vcfilesopen;
        delete ui;
        
    }
private:
    Ui::VisualClipperClass *ui;

    PmacDevice *pmac;
    QString console;//����̨�������Ϣ
    QDateTime   curdatetime;
    QAxObject *com1;
    void updateconsole(const QString & str);//���¿���̨��Ϣ
    QString gettime();
    static int lines;
    
private slots:
    void jugue(bool tag, const QString& str);//�����Ƿ����ʧ��
    void init_network();//��ʼ������
    void jog_forward();
    void jog_reverse();
    void jog_kill();
    void enabled(bool);
    void VCFilesopen();
    void VCFilesnew();
};
