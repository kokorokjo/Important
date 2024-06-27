/********************************************************************************
** Form generated from reading UI file 'militaryicons.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MILITARYICONS_H
#define UI_MILITARYICONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_militaryIcons
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *militaryIcons)
    {
        if (militaryIcons->objectName().isEmpty())
            militaryIcons->setObjectName(QString::fromUtf8("militaryIcons"));
        militaryIcons->resize(800, 600);
        centralwidget = new QWidget(militaryIcons);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        militaryIcons->setCentralWidget(centralwidget);
        menubar = new QMenuBar(militaryIcons);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        militaryIcons->setMenuBar(menubar);
        statusbar = new QStatusBar(militaryIcons);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        militaryIcons->setStatusBar(statusbar);

        retranslateUi(militaryIcons);

        QMetaObject::connectSlotsByName(militaryIcons);
    } // setupUi

    void retranslateUi(QMainWindow *militaryIcons)
    {
        militaryIcons->setWindowTitle(QCoreApplication::translate("militaryIcons", "militaryIcons", nullptr));
    } // retranslateUi

};

namespace Ui {
    class militaryIcons: public Ui_militaryIcons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MILITARYICONS_H
