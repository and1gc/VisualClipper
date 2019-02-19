#pragma once

#include <QWidget>
#include "ui_VCFiles.h"
#include <qmessagebox.h>
#include <qtextstream.h>
#include <qfiledialog.h>
#include <qfont.h>
#include <qfontdialog.h>
#include <qcolordialog.h>
#include <qpalette.h>
#include <qcolor.h>
#include <qtextcursor.h>
#include <qcheckbox.h>
#include <qdatetime.h>

class VCFiles : public QWidget
{
    Q_OBJECT

public:
    explicit  VCFiles(const QString &filename="",QWidget *parent = Q_NULLPTR);
    ~VCFiles();
    void loadFromFile(QString &afilename);
    QString currentFileName();
    bool isFileOpened();
    void setEditFont();
    void textCut();
    void textCopy();
    void textPaste();
    void closeEvent(QCloseEvent *event);//�ر����Ͻǵİ�ťʱ����еĲ���

private slots:

    void wanttosave();//�����ļ���ť
    void setfont();   //��������
    void setcolor();    //������ɫ

private:
    Ui::VCFiles *ui;
    //QString mCurrentFile;
    bool mFileOpened = false;
    bool newfileissaved = false;
    QString wanttoopen;
    void neworopen(const QString &filename);
};
