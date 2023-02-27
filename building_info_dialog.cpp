#include "building_info_dialog.h"
#include "ui_building_info_dialog.h"
#include<QPainter>

Building_Info_Dialog::Building_Info_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Building_Info_Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("场景相关信息");
    this->setWindowIcon(QIcon(":/Building/Building (72).jpg"));
}

Building_Info_Dialog::~Building_Info_Dialog()
{
    delete ui;
}

void Building_Info_Dialog::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    QPixmap pix(":/Building/Building (72).jpg");
    paint.drawPixmap(0,0,this->width(),this->height(),pix);
}
