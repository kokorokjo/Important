#ifndef MILITARYICONS_H
#define MILITARYICONS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class militaryIcons;
}
QT_END_NAMESPACE

class militaryIcons : public QMainWindow
{
    Q_OBJECT

public:
    militaryIcons(QWidget *parent = nullptr);
    ~militaryIcons();

private:
    Ui::militaryIcons *ui;
};
#endif // MILITARYICONS_H
