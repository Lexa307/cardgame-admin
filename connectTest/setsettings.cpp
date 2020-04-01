#include "setsettings.h"
#include "ui_setsettings.h"
#include "connectionchecker.h"

setsettings::setsettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setsettings)
{
    ui->setupUi(this);

    if(connenionChecker::getConnectionStatus()){
        ui->status->setText("Установлено");
        ui->status->setStyleSheet("color: rgb(0, 200, 0)");
    }else{
         ui->status->setStyleSheet("color: rgb(200, 0, 0)");
         ui->status->setText("Ошибка подключения");
    }
    QStringList localParams = connenionChecker::getConnectionFileParams();
    ui->db_line->setText(localParams.at(0));
    ui->user_line->setText(localParams.at(1));
    ui->host_line->setText(localParams.at(2));
    ui->pass_line->setText(localParams.at(3));
    ui->port_line->setText(localParams.at(4));






}

setsettings::~setsettings()
{
    delete ui;
}



void setsettings::on_pushButton_clicked()
{

}

void setsettings::on_pushButton_2_clicked()
{

}
