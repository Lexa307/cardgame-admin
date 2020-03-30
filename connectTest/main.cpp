#include "mainwindow.h"
#include "setsettings.h"
#include <QFile>
#include <QApplication>
#include <QFileInfo>


int main(int argc, char *argv[])
{
    QString file = "settings.txt";
    QFileInfo check_file(file);
        if (check_file.exists()) {
            qDebug() << "yas";
            QApplication a(argc, argv);
          //  MainWindow w;
            setsettings w;
            w.show();
            return a.exec();
        } else {
            qDebug() << "no";
            QApplication a(argc, argv);
            setsettings w;
            w.show();
            return a.exec();
        }




}
