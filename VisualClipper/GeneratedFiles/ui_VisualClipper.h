/********************************************************************************
** Form generated from reading UI file 'VisualClipper.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALCLIPPER_H
#define UI_VISUALCLIPPER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualClipperClass
{
public:
    QAction *actionOpen_File;
    QAction *actionOpen_File_2;
    QAction *actionExit;
    QAction *actionI;
    QAction *actionP_Variables;
    QAction *actionQ_Variables;
    QAction *actionM_Variables;
    QAction *actionCoord_System;
    QAction *actionTernimal;
    QAction *actionWatch_Window;
    QAction *actionPosition;
    QAction *actionJog_Ribbon;
    QAction *actionGenaral_Setup_and_Options;
    QAction *actionBug_Repoeting;
    QAction *actionAbout;
    QAction *actionPMAC_plot;
    QAction *actionPMAC_plot_2;
    QAction *actionClose_All;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPlainTextEdit *m_console;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QMenu *menuBackup;
    QMenu *menuParamter_Identification;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VisualClipperClass)
    {
        if (VisualClipperClass->objectName().isEmpty())
            VisualClipperClass->setObjectName(QStringLiteral("VisualClipperClass"));
        VisualClipperClass->resize(899, 755);
        QIcon icon;
        icon.addFile(QStringLiteral(":/VisualClipper/VisualClipper.ico"), QSize(), QIcon::Normal, QIcon::Off);
        VisualClipperClass->setWindowIcon(icon);
        actionOpen_File = new QAction(VisualClipperClass);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        actionOpen_File->setCheckable(false);
        actionOpen_File_2 = new QAction(VisualClipperClass);
        actionOpen_File_2->setObjectName(QStringLiteral("actionOpen_File_2"));
        actionExit = new QAction(VisualClipperClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionI = new QAction(VisualClipperClass);
        actionI->setObjectName(QStringLiteral("actionI"));
        actionP_Variables = new QAction(VisualClipperClass);
        actionP_Variables->setObjectName(QStringLiteral("actionP_Variables"));
        actionQ_Variables = new QAction(VisualClipperClass);
        actionQ_Variables->setObjectName(QStringLiteral("actionQ_Variables"));
        actionM_Variables = new QAction(VisualClipperClass);
        actionM_Variables->setObjectName(QStringLiteral("actionM_Variables"));
        actionCoord_System = new QAction(VisualClipperClass);
        actionCoord_System->setObjectName(QStringLiteral("actionCoord_System"));
        actionTernimal = new QAction(VisualClipperClass);
        actionTernimal->setObjectName(QStringLiteral("actionTernimal"));
        actionWatch_Window = new QAction(VisualClipperClass);
        actionWatch_Window->setObjectName(QStringLiteral("actionWatch_Window"));
        actionPosition = new QAction(VisualClipperClass);
        actionPosition->setObjectName(QStringLiteral("actionPosition"));
        actionJog_Ribbon = new QAction(VisualClipperClass);
        actionJog_Ribbon->setObjectName(QStringLiteral("actionJog_Ribbon"));
        actionGenaral_Setup_and_Options = new QAction(VisualClipperClass);
        actionGenaral_Setup_and_Options->setObjectName(QStringLiteral("actionGenaral_Setup_and_Options"));
        actionBug_Repoeting = new QAction(VisualClipperClass);
        actionBug_Repoeting->setObjectName(QStringLiteral("actionBug_Repoeting"));
        actionAbout = new QAction(VisualClipperClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionPMAC_plot = new QAction(VisualClipperClass);
        actionPMAC_plot->setObjectName(QStringLiteral("actionPMAC_plot"));
        actionPMAC_plot_2 = new QAction(VisualClipperClass);
        actionPMAC_plot_2->setObjectName(QStringLiteral("actionPMAC_plot_2"));
        actionClose_All = new QAction(VisualClipperClass);
        actionClose_All->setObjectName(QStringLiteral("actionClose_All"));
        centralWidget = new QWidget(VisualClipperClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 40, 121, 23));
        m_console = new QPlainTextEdit(centralWidget);
        m_console->setObjectName(QStringLiteral("m_console"));
        m_console->setGeometry(QRect(20, 590, 871, 71));
        m_console->setReadOnly(true);
        m_console->setOverwriteMode(false);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(630, 310, 271, 221));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 40, 50, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/VisualClipper/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(80, 80));
        pushButton_2->setCheckable(true);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 40, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/VisualClipper/reverse.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(50, 50));
        pushButton_3->setCheckable(true);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 110, 75, 23));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 160, 75, 23));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setGeometry(QRect(0, 0, 431, 541));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        mdiArea->setBackground(brush);
        VisualClipperClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VisualClipperClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 899, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_6 = new QMenu(menuBar);
        menu_6->setObjectName(QStringLiteral("menu_6"));
        menu_7 = new QMenu(menuBar);
        menu_7->setObjectName(QStringLiteral("menu_7"));
        menuBackup = new QMenu(menuBar);
        menuBackup->setObjectName(QStringLiteral("menuBackup"));
        menuParamter_Identification = new QMenu(menuBar);
        menuParamter_Identification->setObjectName(QStringLiteral("menuParamter_Identification"));
        VisualClipperClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VisualClipperClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VisualClipperClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VisualClipperClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VisualClipperClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_6->menuAction());
        menuBar->addAction(menuBackup->menuAction());
        menuBar->addAction(menuParamter_Identification->menuAction());
        menuBar->addAction(menu_7->menuAction());
        menu->addAction(actionOpen_File);
        menu->addAction(actionOpen_File_2);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionI);
        menu_2->addAction(actionP_Variables);
        menu_2->addAction(actionQ_Variables);
        menu_2->addAction(actionM_Variables);
        menu_2->addSeparator();
        menu_2->addAction(actionCoord_System);
        menu_3->addAction(actionTernimal);
        menu_3->addAction(actionWatch_Window);
        menu_3->addAction(actionPosition);
        menu_3->addAction(actionJog_Ribbon);
        menu_3->addSeparator();
        menu_4->addAction(actionGenaral_Setup_and_Options);
        menu_5->addAction(actionPMAC_plot_2);
        menu_6->addAction(actionPMAC_plot);
        menu_6->addAction(actionClose_All);
        menu_7->addAction(actionBug_Repoeting);
        menu_7->addAction(actionAbout);

        retranslateUi(VisualClipperClass);
        QObject::connect(pushButton, SIGNAL(clicked()), VisualClipperClass, SLOT(init_network()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), VisualClipperClass, SLOT(jog_forward()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), VisualClipperClass, SLOT(jog_reverse()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), VisualClipperClass, SLOT(jog_kill()));
        QObject::connect(pushButton_5, SIGNAL(clicked(bool)), VisualClipperClass, SLOT(enabled(bool)));
        QObject::connect(actionOpen_File, SIGNAL(triggered()), VisualClipperClass, SLOT(VCFilesnew()));
        QObject::connect(actionOpen_File_2, SIGNAL(triggered()), VisualClipperClass, SLOT(VCFilesopen()));
        QObject::connect(actionExit, SIGNAL(triggered()), VisualClipperClass, SLOT(close()));

        QMetaObject::connectSlotsByName(VisualClipperClass);
    } // setupUi

    void retranslateUi(QMainWindow *VisualClipperClass)
    {
        VisualClipperClass->setWindowTitle(QApplication::translate("VisualClipperClass", "VisualClipper", nullptr));
        actionOpen_File->setText(QApplication::translate("VisualClipperClass", "New File", nullptr));
        actionOpen_File_2->setText(QApplication::translate("VisualClipperClass", "Open File", nullptr));
        actionExit->setText(QApplication::translate("VisualClipperClass", "Exit", nullptr));
        actionI->setText(QApplication::translate("VisualClipperClass", "I-Variables ", nullptr));
        actionP_Variables->setText(QApplication::translate("VisualClipperClass", "P-Variables", nullptr));
        actionQ_Variables->setText(QApplication::translate("VisualClipperClass", "Q-Variables", nullptr));
        actionM_Variables->setText(QApplication::translate("VisualClipperClass", "M-Variables", nullptr));
        actionCoord_System->setText(QApplication::translate("VisualClipperClass", "Coordinate System", nullptr));
        actionTernimal->setText(QApplication::translate("VisualClipperClass", "Ternimal", nullptr));
        actionWatch_Window->setText(QApplication::translate("VisualClipperClass", "Watch Window", nullptr));
        actionPosition->setText(QApplication::translate("VisualClipperClass", "Position", nullptr));
        actionJog_Ribbon->setText(QApplication::translate("VisualClipperClass", "Jog Ribbon", nullptr));
        actionGenaral_Setup_and_Options->setText(QApplication::translate("VisualClipperClass", "Genaral Setup and Options", nullptr));
        actionBug_Repoeting->setText(QApplication::translate("VisualClipperClass", "Bug Reporting", nullptr));
        actionAbout->setText(QApplication::translate("VisualClipperClass", "About", nullptr));
        actionPMAC_plot->setText(QApplication::translate("VisualClipperClass", "Close", nullptr));
        actionPMAC_plot_2->setText(QApplication::translate("VisualClipperClass", "PMAC plot", nullptr));
        actionClose_All->setText(QApplication::translate("VisualClipperClass", "Close All", nullptr));
        pushButton->setText(QApplication::translate("VisualClipperClass", "init_network", nullptr));
        groupBox->setTitle(QApplication::translate("VisualClipperClass", "Jog Motion", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QApplication::translate("VisualClipperClass", "kill", nullptr));
        pushButton_5->setText(QApplication::translate("VisualClipperClass", "Enable", nullptr));
        menu->setTitle(QApplication::translate("VisualClipperClass", "File", nullptr));
        menu_2->setTitle(QApplication::translate("VisualClipperClass", "Configure", nullptr));
        menu_3->setTitle(QApplication::translate("VisualClipperClass", "View", nullptr));
        menu_4->setTitle(QApplication::translate("VisualClipperClass", "Setup", nullptr));
        menu_5->setTitle(QApplication::translate("VisualClipperClass", "Tools", nullptr));
        menu_6->setTitle(QApplication::translate("VisualClipperClass", "Windows", nullptr));
        menu_7->setTitle(QApplication::translate("VisualClipperClass", "Help", nullptr));
        menuBackup->setTitle(QApplication::translate("VisualClipperClass", "Backup", nullptr));
        menuParamter_Identification->setTitle(QApplication::translate("VisualClipperClass", "Paramter Identification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisualClipperClass: public Ui_VisualClipperClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALCLIPPER_H
