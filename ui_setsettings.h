/********************************************************************************
** Form generated from reading UI file 'setsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSETTINGS_H
#define UI_SETSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setsettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *dbname;
    QLabel *label_2;
    QLineEdit *hostname;
    QLabel *label_5;
    QLineEdit *port;
    QLabel *label_3;
    QLineEdit *username;
    QLabel *label_4;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_2;
    QPushButton *connect;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *setsettings)
    {
        if (setsettings->objectName().isEmpty())
            setsettings->setObjectName(QString::fromUtf8("setsettings"));
        setsettings->resize(351, 320);
        verticalLayout_3 = new QVBoxLayout(setsettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(setsettings);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        dbname = new QLineEdit(setsettings);
        dbname->setObjectName(QString::fromUtf8("dbname"));

        verticalLayout_2->addWidget(dbname);

        label_2 = new QLabel(setsettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        hostname = new QLineEdit(setsettings);
        hostname->setObjectName(QString::fromUtf8("hostname"));

        verticalLayout_2->addWidget(hostname);

        label_5 = new QLabel(setsettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        port = new QLineEdit(setsettings);
        port->setObjectName(QString::fromUtf8("port"));

        verticalLayout_2->addWidget(port);

        label_3 = new QLabel(setsettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        username = new QLineEdit(setsettings);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout_2->addWidget(username);

        label_4 = new QLabel(setsettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        password = new QLineEdit(setsettings);
        password->setObjectName(QString::fromUtf8("password"));

        verticalLayout_2->addWidget(password);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        connect = new QPushButton(setsettings);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(12);
        connect->setFont(font);

        verticalLayout_2->addWidget(connect);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        retranslateUi(setsettings);

        QMetaObject::connectSlotsByName(setsettings);
    } // setupUi

    void retranslateUi(QDialog *setsettings)
    {
        setsettings->setWindowTitle(QCoreApplication::translate("setsettings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("setsettings", "Data Base", nullptr));
        label_2->setText(QCoreApplication::translate("setsettings", "Host", nullptr));
        label_5->setText(QCoreApplication::translate("setsettings", "Port", nullptr));
        label_3->setText(QCoreApplication::translate("setsettings", "User", nullptr));
        label_4->setText(QCoreApplication::translate("setsettings", "Password", nullptr));
        connect->setText(QCoreApplication::translate("setsettings", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setsettings: public Ui_setsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSETTINGS_H
