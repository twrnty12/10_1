//#include "mainwindow.h"

#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    QMessageBox msg;
    msg.setText("Hello graphic word!");
    msg.setIcon(QMessageBox::Information);
    msg.setStyleSheet("color : red");
    msg.show();
    return a.exec();
}
