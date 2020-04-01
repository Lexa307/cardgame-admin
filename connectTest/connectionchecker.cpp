#include "connectionchecker.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QString>
#include <QFile>
#include <QTextStream>



bool connenionChecker::getConnectionStatus(){
     QFile inputFile("settings.txt");
     QStringList fields;
     while(true){//used to back this code if file created as default
         if (inputFile.exists())
         {
             inputFile.open(QFile::ReadOnly | QFile::Text);
             QTextStream in(&inputFile);
             QString line = in.readLine();
//             qDebug()<<line;
             fields = line.split(";");
             inputFile.close();
         }

         if(fields.length()>=4){
             connenionChecker::db.setDatabaseName(fields.at(0));
             connenionChecker::db.setUserName(fields.at(1));
             connenionChecker::db.setHostName(fields.at(2));
             connenionChecker::db.setPassword(fields.at(3));
             connenionChecker::db.setPort(fields.at(4).toInt());
             if(connenionChecker::db.open())
             {
                 return true;
             }
             else {
                 return false;
             }
         }else {
             QMessageBox::information(0,"info", "Некорректные конфигурационные данные, настройки будут восстановлены по умолчанию");
             if (inputFile.open(QIODevice::ReadWrite)) {
                 QTextStream stream(&inputFile);
                 stream << "carddb;root;localhost;1234;3306;" << endl;
                 inputFile.close();
             }
         }
     }
     return false;
}

QStringList connenionChecker::getConnectionFileParams(){
    QFile inputFile("settings.txt");
    QStringList fields;
        if (inputFile.exists())
        {
            inputFile.open(QFile::ReadOnly | QFile::Text);
            QTextStream in(&inputFile);
            QString line = in.readLine();
            fields = line.split(";");
            inputFile.close();
        }else{
            fields = QString("-1;-1;-1;-1;-1;").split(";");
        }
        return  fields;//at(0) - database, at(1) - username, at(2) - hostname, at(3) - password, at(4) - port
}

void connenionChecker::setConnectionFileParams(QString db, QString user, QString host, QString password, QString port){
     QFile inputFile("settings.txt");
    if (inputFile.open(QIODevice::ReadWrite)) {
        QTextStream stream(&inputFile);
        stream << db+';'+user+';'+host+';'+password+';'+port+';' << endl;
        inputFile.close();
    }
}
