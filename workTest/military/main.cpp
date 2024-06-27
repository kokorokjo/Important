#include "militaryicons.h"

#include <QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    militaryIcons w;
    w.show();
    return a.exec();
}
