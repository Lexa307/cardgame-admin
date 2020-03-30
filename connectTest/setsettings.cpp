#include "setsettings.h"
#include "ui_setsettings.h"

setsettings::setsettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setsettings)
{
    ui->setupUi(this);
    QFile MyFile("settings.txt");
    MyFile.open(QIODevice::WriteOnly);
    QDataStream output(&MyFile);




    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("carddb");
    db.setUserName("root");
    db.setHostName("localhost");
    db.setPassword("1234");
    db.setPort(3306);
    db.open();
    if(!db.open())
    {
        qDebug() <<  db.lastError().text();
    }
    else {
        qDebug() << "Success";

    }


}

setsettings::~setsettings()
{
    delete ui;
}

void setsettings::on_connect_clicked()
{

    QString text_dbname = ui -> dbname ->text();
    QString text_host_name = ui -> hostname ->text();
    QString text_port = ui -> port ->text();
    QString text_user = ui -> username ->text();
    QString text_password = ui -> password ->text();
    qDebug() << text_dbname;
    qDebug() << text_host_name;
    qDebug() << text_port;
    qDebug() << text_user;
    qDebug() << text_password;
}
