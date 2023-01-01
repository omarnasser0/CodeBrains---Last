/********************************************************************************
** Form generated from reading UI file 'SignupPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *fullNamLlabel;
    QLineEdit *fullNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPassswordLineEdit;
    QPushButton *registerButton;
    QMenuBar *menubar;
    QMenu *menuRegister;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignupPage)
    {
        if (SignupPage->objectName().isEmpty())
            SignupPage->setObjectName("SignupPage");
        SignupPage->resize(800, 600);
        centralwidget = new QWidget(SignupPage);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 70, 551, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        fullNamLlabel = new QLabel(layoutWidget);
        fullNamLlabel->setObjectName("fullNamLlabel");
        QFont font;
        font.setPointSize(12);
        fullNamLlabel->setFont(font);

        horizontalLayout->addWidget(fullNamLlabel);

        fullNameLineEdit = new QLineEdit(layoutWidget);
        fullNameLineEdit->setObjectName("fullNameLineEdit");

        horizontalLayout->addWidget(fullNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setFont(font);

        horizontalLayout_2->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout_2->addWidget(usernameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setFont(font);

        horizontalLayout_3->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confirmPasswordLabel = new QLabel(layoutWidget);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setFont(font);

        horizontalLayout_4->addWidget(confirmPasswordLabel);

        confirmPassswordLineEdit = new QLineEdit(layoutWidget);
        confirmPassswordLineEdit->setObjectName("confirmPassswordLineEdit");
        confirmPassswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(confirmPassswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox);

        registerButton = new QPushButton(centralwidget);
        registerButton->setObjectName("registerButton");

        verticalLayout_2->addWidget(registerButton);

        SignupPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignupPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 31));
        menuRegister = new QMenu(menubar);
        menuRegister->setObjectName("menuRegister");
        SignupPage->setMenuBar(menubar);
        statusbar = new QStatusBar(SignupPage);
        statusbar->setObjectName("statusbar");
        SignupPage->setStatusBar(statusbar);

        menubar->addAction(menuRegister->menuAction());

        retranslateUi(SignupPage);

        QMetaObject::connectSlotsByName(SignupPage);
    } // setupUi

    void retranslateUi(QMainWindow *SignupPage)
    {
        SignupPage->setWindowTitle(QCoreApplication::translate("SignupPage", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignupPage", "Register", nullptr));
        fullNamLlabel->setText(QCoreApplication::translate("SignupPage", "FullName", nullptr));
        usernameLabel->setText(QCoreApplication::translate("SignupPage", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("SignupPage", "Password", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("SignupPage", "Confirm Password", nullptr));
        registerButton->setText(QCoreApplication::translate("SignupPage", "Register", nullptr));
        menuRegister->setTitle(QCoreApplication::translate("SignupPage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupPage: public Ui_SignupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
