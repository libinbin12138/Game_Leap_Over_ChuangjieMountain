#ifndef BUILDING_INFO_DIALOG_H
#define BUILDING_INFO_DIALOG_H

#include <QDialog>

namespace Ui {
class Building_Info_Dialog;
}

class Building_Info_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Building_Info_Dialog(QWidget *parent = 0);
    ~Building_Info_Dialog();
void paintEvent(QPaintEvent *event);
private:
    Ui::Building_Info_Dialog *ui;
};

#endif // BUILDING_INFO_DIALOG_H
