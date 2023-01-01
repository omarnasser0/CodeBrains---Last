/********************************************************************************
** Form generated from reading UI file 'AddStudentPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTPAGE_H
#define UI_ADDSTUDENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentPage
{
public:
    QPushButton *buttomadd;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *line_ID;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *line_phone;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *line_Age;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_4;
    QLineEdit *line_mail;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddStudentPage)
    {
        if (AddStudentPage->objectName().isEmpty())
            AddStudentPage->setObjectName("AddStudentPage");
        AddStudentPage->resize(612, 412);
        buttomadd = new QPushButton(AddStudentPage);
        buttomadd->setObjectName("buttomadd");
        buttomadd->setGeometry(QRect(280, 360, 75, 24));
        layoutWidget = new QWidget(AddStudentPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 30, 401, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName("line_name");

        horizontalLayout->addWidget(line_name);


        horizontalLayout_8->addLayout(horizontalLayout);


        horizontalLayout_11->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        line_ID = new QLineEdit(layoutWidget);
        line_ID->setObjectName("line_ID");

        horizontalLayout_2->addWidget(line_ID);


        horizontalLayout_9->addLayout(horizontalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);


        horizontalLayout_12->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        line_phone = new QLineEdit(layoutWidget);
        line_phone->setObjectName("line_phone");

        horizontalLayout_3->addWidget(line_phone);


        horizontalLayout_10->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(48, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        line_Age = new QLineEdit(layoutWidget);
        line_Age->setObjectName("line_Age");

        horizontalLayout_7->addWidget(line_Age);


        horizontalLayout_10->addLayout(horizontalLayout_7);


        horizontalLayout_13->addLayout(horizontalLayout_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_14->addWidget(label_4);

        line_mail = new QLineEdit(layoutWidget);
        line_mail->setObjectName("line_mail");

        horizontalLayout_14->addWidget(line_mail);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");

        horizontalLayout_14->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_14);


        retranslateUi(AddStudentPage);

        QMetaObject::connectSlotsByName(AddStudentPage);
    } // setupUi

    void retranslateUi(QDialog *AddStudentPage)
    {
        AddStudentPage->setWindowTitle(QCoreApplication::translate("AddStudentPage", "Dialog", nullptr));
        buttomadd->setText(QCoreApplication::translate("AddStudentPage", "Add", nullptr));
        label->setText(QCoreApplication::translate("AddStudentPage", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddStudentPage", "     ID     ", nullptr));
        label_3->setText(QCoreApplication::translate("AddStudentPage", "Phone", nullptr));
        label_8->setText(QCoreApplication::translate("AddStudentPage", " Age        ", nullptr));
        label_4->setText(QCoreApplication::translate("AddStudentPage", "E-mail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentPage: public Ui_AddStudentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTPAGE_H
