#ifndef SETSETTINGS_H
#define SETSETTINGS_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
namespace Ui {
class setsettings;
}

class setsettings : public QDialog
{
    Q_OBJECT

public:
    explicit setsettings(QWidget *parent = nullptr);
    ~setsettings();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::setsettings *ui;

};

#endif // SETSETTINGS_H
