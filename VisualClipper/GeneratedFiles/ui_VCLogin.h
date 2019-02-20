/********************************************************************************
** Form generated from reading UI file 'VCLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCLOGIN_H
#define UI_VCLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VCLogin
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *VCLogin)
    {
        if (VCLogin->objectName().isEmpty())
            VCLogin->setObjectName(QStringLiteral("VCLogin"));
        VCLogin->resize(664, 517);
        gridLayout = new QGridLayout(VCLogin);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(VCLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/zhanghao.jpg")));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(VCLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(VCLogin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(VCLogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(VCLogin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(VCLogin);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(VCLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(VCLogin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(VCLogin);
        QObject::connect(pushButton, SIGNAL(clicked()), VCLogin, SLOT(clickok()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), VCLogin, SLOT(reject()));

        QMetaObject::connectSlotsByName(VCLogin);
    } // setupUi

    void retranslateUi(QDialog *VCLogin)
    {
        VCLogin->setWindowTitle(QApplication::translate("VCLogin", "VCLogin", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("VCLogin", "Username", nullptr));
        label_3->setText(QApplication::translate("VCLogin", "Password", nullptr));
        checkBox->setText(QApplication::translate("VCLogin", "CheckBox", nullptr));
        pushButton->setText(QApplication::translate("VCLogin", "Confirm", nullptr));
        pushButton_2->setText(QApplication::translate("VCLogin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VCLogin: public Ui_VCLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCLOGIN_H
