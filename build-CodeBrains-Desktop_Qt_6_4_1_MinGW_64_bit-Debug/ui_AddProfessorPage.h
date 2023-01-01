/********************************************************************************
** Form generated from reading UI file 'AddProfessorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPROFESSORPAGE_H
#define UI_ADDPROFESSORPAGE_H

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

class Ui_AddProfessorPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *line_name;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *line_title;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *line_ID;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *line_mail;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *line_phone;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *bottum_add;

    void setupUi(QDialog *AddProfessorPage)
    {
        if (AddProfessorPage->objectName().isEmpty())
            AddProfessorPage->setObjectName("AddProfessorPage");
        AddProfessorPage->resize(480, 356);
        layoutWidget = new QWidget(AddProfessorPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 191, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        line_name = new QLineEdit(layoutWidget);
        line_name->setObjectName("line_name");

        horizontalLayout->addWidget(line_name);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        line_title = new QLineEdit(layoutWidget);
        line_title->setObjectName("line_title");

        horizontalLayout_2->addWidget(line_title);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        line_ID = new QLineEdit(layoutWidget);
        line_ID->setObjectName("line_ID");

        horizontalLayout_3->addWidget(line_ID);


        horizontalLayout_8->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        line_mail = new QLineEdit(layoutWidget);
        line_mail->setObjectName("line_mail");

        horizontalLayout_4->addWidget(line_mail);


        horizontalLayout_9->addLayout(horizontalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        line_phone = new QLineEdit(layoutWidget);
        line_phone->setObjectName("line_phone");

        horizontalLayout_5->addWidget(line_phone);


        horizontalLayout_10->addLayout(horizontalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_10);

        bottum_add = new QPushButton(AddProfessorPage);
        bottum_add->setObjectName("bottum_add");
        bottum_add->setGeometry(QRect(380, 290, 75, 24));

        retranslateUi(AddProfessorPage);

        QMetaObject::connectSlotsByName(AddProfessorPage);
    } // setupUi

    void retranslateUi(QDialog *AddProfessorPage)
    {
        AddProfessorPage->setWindowTitle(QCoreApplication::translate("AddProfessorPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddProfessorPage", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("AddProfessorPage", "  Title    ", nullptr));
        label_3->setText(QCoreApplication::translate("AddProfessorPage", "     ID", nullptr));
        label_5->setText(QCoreApplication::translate("AddProfessorPage", "E-Mail", nullptr));
        label_2->setText(QCoreApplication::translate("AddProfessorPage", "phone", nullptr));
        bottum_add->setText(QCoreApplication::translate("AddProfessorPage", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddProfessorPage: public Ui_AddProfessorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPROFESSORPAGE_H
