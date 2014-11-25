//#include <QtGui/QApplication>
//#include "mainwindow.h"

#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QCoreApplication a(argc, argv);

    qDebug();
    
    return a.exec();
}
