/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_file;
    QWidget *centralwidget;
    QLabel *label;
    QSlider *horizontalSlider_Audio_File_Duration;
    QSlider *horizontalSlider_Audio_Volume;
    QPushButton *pushButton_Mute;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Seek_Back;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Pause;
    QPushButton *pushButton_Seek_Forward;
    QMenuBar *menubar;
    QMenu *menuOpen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(382, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:rgb(52,51,62);\n"
"}"));
        actionOpen_file = new QAction(MainWindow);
        actionOpen_file->setObjectName("actionOpen_file");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 341, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border:2px solid rgb(255,255,255)\n"
"}"));
        label->setFrameShape(QFrame::Panel);
        label->setLineWidth(2);
        horizontalSlider_Audio_File_Duration = new QSlider(centralwidget);
        horizontalSlider_Audio_File_Duration->setObjectName("horizontalSlider_Audio_File_Duration");
        horizontalSlider_Audio_File_Duration->setGeometry(QRect(10, 70, 341, 20));
        horizontalSlider_Audio_File_Duration->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height:10px;\n"
"	width:320px;\n"
"	background:red;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	background:rgb(255,255,255);\n"
"	width:14px;\n"
"	height:14px;\n"
"	margin:-5px -5px;\n"
"	border-radius:7px;\n"
"\n"
"}"));
        horizontalSlider_Audio_File_Duration->setOrientation(Qt::Horizontal);
        horizontalSlider_Audio_Volume = new QSlider(centralwidget);
        horizontalSlider_Audio_Volume->setObjectName("horizontalSlider_Audio_Volume");
        horizontalSlider_Audio_Volume->setGeometry(QRect(80, 230, 261, 20));
        horizontalSlider_Audio_Volume->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height:10px;\n"
"	width:250px;\n"
"	background:red;\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	background:rgb(255,255,255);\n"
"	width:14px;\n"
"	height:14px;\n"
"	margin:-5px -5px;\n"
"	border-radius:7px;\n"
"\n"
"}"));
        horizontalSlider_Audio_Volume->setOrientation(Qt::Horizontal);
        pushButton_Mute = new QPushButton(centralwidget);
        pushButton_Mute->setObjectName("pushButton_Mute");
        pushButton_Mute->setGeometry(QRect(10, 210, 60, 60));
        pushButton_Mute->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:20px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	padding: 0px;\n"
"}"));
        pushButton_Mute->setIconSize(QSize(25, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 130, 341, 62));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Seek_Back = new QPushButton(widget);
        pushButton_Seek_Back->setObjectName("pushButton_Seek_Back");
        pushButton_Seek_Back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:30px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	min-width:60px;\n"
"	max-width:60px;	\n"
"	min-height:60px;\n"
"	max-height:60px;\n"
"	padding: 0px;\n"
"}"));
        pushButton_Seek_Back->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_Seek_Back);

        pushButton_Stop = new QPushButton(widget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:30px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	min-width:60px;\n"
"	max-width:60px;	\n"
"	min-height:60px;\n"
"	max-height:60px;\n"
"	padding: 0px;\n"
"}"));
        pushButton_Stop->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_Stop);

        pushButton_Play = new QPushButton(widget);
        pushButton_Play->setObjectName("pushButton_Play");
        pushButton_Play->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:30px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	min-width:60px;\n"
"	max-width:60px;	\n"
"	min-height:60px;\n"
"	max-height:60px;\n"
"	padding: 0px;\n"
"}"));
        pushButton_Play->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_Play);

        pushButton_Pause = new QPushButton(widget);
        pushButton_Pause->setObjectName("pushButton_Pause");
        pushButton_Pause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:30px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	min-width:60px;\n"
"	max-width:60px;	\n"
"	min-height:60px;\n"
"	max-height:60px;\n"
"	padding: 0px;\n"
"}"));
        pushButton_Pause->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_Pause);

        pushButton_Seek_Forward = new QPushButton(widget);
        pushButton_Seek_Forward->setObjectName("pushButton_Seek_Forward");
        pushButton_Seek_Forward->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"	border-radius:30px;\n"
"	background-color:rgb(255,255,255);\n"
"	color:rgb(52,51,64);\n"
"	min-width:60px;\n"
"	max-width:60px;	\n"
"	min-height:60px;\n"
"	max-height:60px;\n"
"	padding: 0px;\n"
"}"));
        pushButton_Seek_Forward->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton_Seek_Forward);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 382, 21));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_file->setText(QCoreApplication::translate("MainWindow", "Open file", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "File name", nullptr));
        pushButton_Mute->setText(QString());
        pushButton_Seek_Back->setText(QString());
        pushButton_Stop->setText(QString());
        pushButton_Play->setText(QString());
        pushButton_Pause->setText(QString());
        pushButton_Seek_Forward->setText(QString());
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
