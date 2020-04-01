#include "setting.h"
#include "ui_setting.h"
#include "mainwindow.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QFile>
#include <QTextStream>
#include <QApplication>
#include <QFileInfo>
#include <QMessageBox>


setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
}

setting::~setting()
{
    delete ui;
}



void setting::on_connect_clicked()
{
    QString text_dbname = ui -> dbname ->text();
    QString text_host = ui -> host ->text();
    QString text_port = ui -> port ->text();
    QString text_user = ui -> user ->text();
    QString text_password = ui -> password ->text();
   // qDebug() << text_dbname;
   // qDebug() << text_host;
   // qDebug() << text_port;
   // qDebug() << text_user;
   // qDebug() << text_password;

    if(text_dbname==""||text_host==""||text_port==""||text_user==""||text_password=="")
    {
        QMessageBox::information(this,"Ошибка","Одно из полей не введенно");
    }
    else
    {
    QFile MyFile("settings.txt");
    if(MyFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
    QTextStream out(&MyFile);
    out << text_dbname<< "|" ;
    out << text_host << "|" ;
    out << text_port<< "|" ;
    out << text_user<< "|" ;
    out << text_password ;
    MyFile.close();
    }
    }

    QWidget::close();
}
