/********************************************************************************
** Form generated from reading UI file 'VCFiles.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCFILES_H
#define UI_VCFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VCFiles
{
public:
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *VCFiles)
    {
        if (VCFiles->objectName().isEmpty())
            VCFiles->setObjectName(QStringLiteral("VCFiles"));
        VCFiles->setEnabled(true);
        VCFiles->resize(500, 600);
        VCFiles->setMaximumSize(QSize(500, 600));
        gridLayout_2 = new QGridLayout(VCFiles);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(VCFiles);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 2, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(VCFiles);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(VCFiles);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(VCFiles);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(VCFiles);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 468, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(VCFiles);
        QObject::connect(pushButton, SIGNAL(clicked()), VCFiles, SLOT(wanttosave()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), VCFiles, SLOT(setfont()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), VCFiles, SLOT(setcolor()));

        QMetaObject::connectSlotsByName(VCFiles);
    } // setupUi

    void retranslateUi(QWidget *VCFiles)
    {
        VCFiles->setWindowTitle(QApplication::translate("VCFiles", "VCFiles", nullptr));
        label->setText(QApplication::translate("VCFiles", "Unsaved", nullptr));
        pushButton->setText(QApplication::translate("VCFiles", "SAVE", nullptr));
        pushButton_3->setText(QApplication::translate("VCFiles", "FONT", nullptr));
        pushButton_4->setText(QApplication::translate("VCFiles", "COLOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VCFiles: public Ui_VCFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCFILES_H
