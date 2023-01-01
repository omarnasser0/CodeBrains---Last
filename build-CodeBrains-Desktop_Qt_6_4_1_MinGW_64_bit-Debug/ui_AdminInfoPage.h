/********************************************************************************
** Form generated from reading UI file 'AdminInfoPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININFOPAGE_H
#define UI_ADMININFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminInfoPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *nameLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *usernameLabel;
    QPushButton *editButton;
    QLabel *label_2;

    void setupUi(QDialog *AdminInfoPage)
    {
        if (AdminInfoPage->objectName().isEmpty())
            AdminInfoPage->setObjectName("AdminInfoPage");
        AdminInfoPage->resize(500, 400);
        verticalLayout = new QVBoxLayout(AdminInfoPage);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(AdminInfoPage);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        nameLabel = new QLabel(AdminInfoPage);
        nameLabel->setObjectName("nameLabel");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        nameLabel->setFont(font1);

        horizontalLayout->addWidget(nameLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(AdminInfoPage);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        usernameLabel = new QLabel(AdminInfoPage);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setFont(font1);

        horizontalLayout_2->addWidget(usernameLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        editButton = new QPushButton(AdminInfoPage);
        editButton->setObjectName("editButton");

        verticalLayout->addWidget(editButton);

        label_2 = new QLabel(AdminInfoPage);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_2);


        retranslateUi(AdminInfoPage);

        QMetaObject::connectSlotsByName(AdminInfoPage);
    } // setupUi

    void retranslateUi(QDialog *AdminInfoPage)
    {
        AdminInfoPage->setWindowTitle(QCoreApplication::translate("AdminInfoPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminInfoPage", "Name", nullptr));
        nameLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("AdminInfoPage", "Username", nullptr));
        usernameLabel->setText(QString());
        editButton->setText(QCoreApplication::translate("AdminInfoPage", "Edit", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminInfoPage: public Ui_AdminInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININFOPAGE_H
