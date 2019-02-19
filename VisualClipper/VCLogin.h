#pragma once

#include <QDialog>
#include <qsettings.h>
#include <qcryptographichash.h>
#include <qmessagebox.h>
#include<qmouseevent.h>


namespace Ui { class VCLogin; };

class VCLogin : public QDialog
{
    Q_OBJECT

public:
    VCLogin(QWidget *parent = Q_NULLPTR);
    ~VCLogin();

private:
    Ui::VCLogin *ui;
    bool ismoving = false;
    QPoint lastpos;
    QString username = "gaochong";
    QString password = "and1gc";
    QString organization = "GC-QT";
    QString appname = "VisualClipper";
    int trycounts = 0;
    void readsetting();
    void writesetting();
    QString encrypt(const QString &str);
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void clickok();
};
