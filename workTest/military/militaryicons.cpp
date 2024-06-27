#include "militaryicons.h"
#include "ui_militaryicons.h"

militaryIcons::militaryIcons(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::militaryIcons)
{
    ui->setupUi(this);
}

militaryIcons::~militaryIcons()
{
    delete ui;
}
