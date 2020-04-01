#include "mainwindow.h"
#include "setsettings.h"
#include <QApplication>
#include "connectionchecker.h"


int main(int argc, char *argv[])
{

            QApplication a(argc, argv);
            MainWindow w;


            w.show();
            return a.exec();





}
