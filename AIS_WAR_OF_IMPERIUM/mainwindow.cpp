#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setting.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QFileInfo>



void main_menu()
{
    QString dbname,host, port, user, passwor;
    QString MyFile = "settings.txt";
    QFileInfo check_file(MyFile);
        if (check_file.exists())
            {
            qDebug() << "yas";
            //test

            QFile MyFile("settings.txt");
            if(MyFile.open(QIODevice::ReadOnly|QIODevice::Text))
            {
               qDebug() << "файл открылся";
               //bd_test
               QString str = MyFile.readLine();
               QStringList lst = str.split("|");
               dbname = lst.at(0);
               host = lst.at(1);
               port = lst.at(2);
               user = lst.at(3);
               passwor= lst.at(4);
               qDebug() << lst.at(0) << lst.at(1) << lst.at(2) << lst.at(3) << lst.at(4);
               MyFile.close();
               //connect

               int intport = port.toInt();
               QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
               db.setDatabaseName(dbname);
               db.setUserName(user);
               db.setHostName(host);
               db.setPassword(passwor);
               db.setPort(intport);
               db.open();
               if(!db.open())
               {
                   qDebug() <<  db.lastError().text();
                   setting window;
                   window.setModal(true);
                   window.exec();
                   main_menu();

               }
               else {
                   qDebug() << "Success";


               }


               //connect
               //bd_test
            }
            else
            {
                qDebug() << "файл не открылся";
                setting window;
                window.setModal(true);
                window.exec();
                main_menu();
            }

            //test
            }
        else
        {
            qDebug() << "no";
            setting window;
            window.setModal(true);
            window.exec();
            main_menu();

        }
}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    main_menu();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_toolButton_clicked()
{
    qDebug() << "settings";
    setting window;
    window.setModal(true);
    window.exec();
    main_menu();
}
