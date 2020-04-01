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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setsettings
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *db_line;
    QLabel *label_2;
    QLineEdit *user_line;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *host_line;
    QLineEdit *pass_line;
    QLabel *label_5;
    QLineEdit *port_line;
    QLabel *label_6;
    QLabel *status;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *setsettings)
    {
        if (setsettings->objectName().isEmpty())
            setsettings->setObjectName(QString::fromUtf8("setsettings"));
        setsettings->resize(425, 314);
        setsettings->setSizeGripEnabled(true);
        formLayoutWidget = new QWidget(setsettings);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 30, 401, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        db_line = new QLineEdit(formLayoutWidget);
        db_line->setObjectName(QString::fromUtf8("db_line"));

        formLayout->setWidget(0, QFormLayout::FieldRole, db_line);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        user_line = new QLineEdit(formLayoutWidget);
        user_line->setObjectName(QString::fromUtf8("user_line"));

        formLayout->setWidget(1, QFormLayout::FieldRole, user_line);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        host_line = new QLineEdit(formLayoutWidget);
        host_line->setObjectName(QString::fromUtf8("host_line"));

        formLayout->setWidget(2, QFormLayout::FieldRole, host_line);

        pass_line = new QLineEdit(formLayoutWidget);
        pass_line->setObjectName(QString::fromUtf8("pass_line"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pass_line);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        port_line = new QLineEdit(formLayoutWidget);
        port_line->setObjectName(QString::fromUtf8("port_line"));

        formLayout->setWidget(4, QFormLayout::FieldRole, port_line);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        status = new QLabel(formLayoutWidget);
        status->setObjectName(QString::fromUtf8("status"));

        formLayout->setWidget(5, QFormLayout::FieldRole, status);

        horizontalLayoutWidget = new QWidget(setsettings);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 220, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(setsettings);

        QMetaObject::connectSlotsByName(setsettings);
    } // setupUi

    void retranslateUi(QDialog *setsettings)
    {
        setsettings->setWindowTitle(QCoreApplication::translate("setsettings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("setsettings", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_2->setText(QCoreApplication::translate("setsettings", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_3->setText(QCoreApplication::translate("setsettings", "\320\245\320\276\321\201\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("setsettings", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("setsettings", "\320\237\320\276\321\200\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("setsettings", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        status->setText(QString());
        pushButton->setText(QCoreApplication::translate("setsettings", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        pushButton_2->setText(QCoreApplication::translate("setsettings", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setsettings: public Ui_setsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSETTINGS_H
