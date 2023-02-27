#include "mainwindow.h"
#include <QApplication>
#include"playscreen.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlayScreen playscreen;
    playscreen.show();

    return a.exec();
}
