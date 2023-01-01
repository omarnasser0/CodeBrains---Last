/********************************************************************************
** Form generated from reading UI file 'AdminEditPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITPAGE_H
#define UI_ADMINEDITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminEditPage
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QLabel *label_4;
    QLineEdit *oldPassLineEdit;
    QLabel *label_3;
    QLineEdit *newPassLineEdit;
    QLabel *label_5;
    QLineEdit *confirmPassLineEdit;
    QPushButton *pushButton;
    QLineEdit *nameLineEdit;

    void setupUi(QDialog *AdminEditPage)
    {
        if (AdminEditPage->objectName().isEmpty())
            AdminEditPage->setObjectName("AdminEditPage");
        AdminEditPage->resize(500, 400);
        formLayout = new QFormLayout(AdminEditPage);
        formLayout->setObjectName("formLayout");
        label = new QLabel(AdminEditPage);
        label->setObjectName("label");

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AdminEditPage);
        label_2->setObjectName("label_2");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        usernameLineEdit = new QLineEdit(AdminEditPage);
        usernameLineEdit->setObjectName("usernameLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, usernameLineEdit);

        label_4 = new QLabel(AdminEditPage);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        oldPassLineEdit = new QLineEdit(AdminEditPage);
        oldPassLineEdit->setObjectName("oldPassLineEdit");

        formLayout->setWidget(4, QFormLayout::FieldRole, oldPassLineEdit);

        label_3 = new QLabel(AdminEditPage);
        label_3->setObjectName("label_3");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        newPassLineEdit = new QLineEdit(AdminEditPage);
        newPassLineEdit->setObjectName("newPassLineEdit");

        formLayout->setWidget(6, QFormLayout::FieldRole, newPassLineEdit);

        label_5 = new QLabel(AdminEditPage);
        label_5->setObjectName("label_5");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        confirmPassLineEdit = new QLineEdit(AdminEditPage);
        confirmPassLineEdit->setObjectName("confirmPassLineEdit");

        formLayout->setWidget(7, QFormLayout::FieldRole, confirmPassLineEdit);

        pushButton = new QPushButton(AdminEditPage);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(9, QFormLayout::FieldRole, pushButton);

        nameLineEdit = new QLineEdit(AdminEditPage);
        nameLineEdit->setObjectName("nameLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, nameLineEdit);


        retranslateUi(AdminEditPage);

        QMetaObject::connectSlotsByName(AdminEditPage);
    } // setupUi

    void retranslateUi(QDialog *AdminEditPage)
    {
        AdminEditPage->setWindowTitle(QCoreApplication::translate("AdminEditPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminEditPage", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AdminEditPage", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("AdminEditPage", "Old Password", nullptr));
        label_3->setText(QCoreApplication::translate("AdminEditPage", "New Password", nullptr));
        label_5->setText(QCoreApplication::translate("AdminEditPage", "Confirm Password", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminEditPage", "Confirm", nullptr));
        nameLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminEditPage: public Ui_AdminEditPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITPAGE_H
