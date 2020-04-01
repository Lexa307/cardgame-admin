#include "mainwindow.h"
#include "setsettings.h"
#include "ui_mainwindow.h"
#include "ui_setsettings.h"
#include "connectionchecker.h"



QSqlDatabase connenionChecker::db = QSqlDatabase::addDatabase("QMYSQL");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setting = new setsettings();
    if(connenionChecker::getConnectionStatus()){
        ui->label->setText("Установлено");
        ui->label->setStyleSheet("color: rgb(0, 200, 0)");
    }else{
         ui->label->setStyleSheet("color: rgb(200, 0, 0)");
         ui->label->setText("Ошибка подключения");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_toolButton_clicked()
{
setting->show();
this->hide();

}
