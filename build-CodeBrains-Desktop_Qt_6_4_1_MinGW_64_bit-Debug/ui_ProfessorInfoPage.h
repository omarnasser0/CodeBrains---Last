/********************************************************************************
** Form generated from reading UI file 'ProfessorInfoPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORINFOPAGE_H
#define UI_PROFESSORINFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfessorInfoPage
{
public:
    QLabel *FLNameLabel;
    QTableWidget *professorTableInfo;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QLabel *phoneLabel;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *emailLabel;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLabel *idLabel;
    QPushButton *editPushButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *nameLabel;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_14;
    QLabel *titleLabel;

    void setupUi(QDialog *ProfessorInfoPage)
    {
        if (ProfessorInfoPage->objectName().isEmpty())
            ProfessorInfoPage->setObjectName("ProfessorInfoPage");
        ProfessorInfoPage->resize(555, 555);
        FLNameLabel = new QLabel(ProfessorInfoPage);
        FLNameLabel->setObjectName("FLNameLabel");
        FLNameLabel->setGeometry(QRect(140, 0, 271, 31));
        QFont font;
        font.setPointSize(22);
        FLNameLabel->setFont(font);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);
        professorTableInfo = new QTableWidget(ProfessorInfoPage);
        professorTableInfo->setObjectName("professorTableInfo");
        professorTableInfo->setGeometry(QRect(30, 290, 491, 181));
        professorTableInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        layoutWidget_2 = new QWidget(ProfessorInfoPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(210, 110, 321, 52));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName("label_16");
        QFont font1;
        font1.setPointSize(15);
        label_16->setFont(font1);
        label_16->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_16);

        phoneLabel = new QLabel(layoutWidget_2);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setAutoFillBackground(true);
        phoneLabel->setFrameShape(QFrame::Box);
        phoneLabel->setOpenExternalLinks(false);

        horizontalLayout_5->addWidget(phoneLabel);

        horizontalLayout_5->setStretch(1, 1);
        label_6 = new QLabel(ProfessorInfoPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 240, 161, 41));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        label_5 = new QLabel(ProfessorInfoPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 280, 49, 16));
        layoutWidget = new QWidget(ProfessorInfoPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 170, 511, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font1);
        label_12->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_12);

        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setAutoFillBackground(true);
        emailLabel->setFrameShape(QFrame::Box);
        emailLabel->setOpenExternalLinks(false);

        horizontalLayout_3->addWidget(emailLabel);

        horizontalLayout_3->setStretch(1, 1);
        layoutWidget_3 = new QWidget(ProfessorInfoPage);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 110, 191, 52));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName("label_18");
        label_18->setFont(font1);
        label_18->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(label_18);

        idLabel = new QLabel(layoutWidget_3);
        idLabel->setObjectName("idLabel");
        idLabel->setAutoFillBackground(true);
        idLabel->setFrameShape(QFrame::Box);
        idLabel->setOpenExternalLinks(false);

        horizontalLayout_7->addWidget(idLabel);

        horizontalLayout_7->setStretch(1, 1);
        editPushButton = new QPushButton(ProfessorInfoPage);
        editPushButton->setObjectName("editPushButton");
        editPushButton->setGeometry(QRect(210, 500, 111, 41));
        layoutWidget_4 = new QWidget(ProfessorInfoPage);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(210, 50, 321, 52));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout_6->addWidget(label_3);

        nameLabel = new QLabel(layoutWidget_4);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setAutoFillBackground(true);
        nameLabel->setFrameShape(QFrame::Box);
        nameLabel->setOpenExternalLinks(false);

        horizontalLayout_6->addWidget(nameLabel);

        horizontalLayout_6->setStretch(1, 1);
        layoutWidget_5 = new QWidget(ProfessorInfoPage);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 50, 191, 52));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName("label_14");
        label_14->setFont(font1);
        label_14->setFrameShape(QFrame::NoFrame);

        horizontalLayout_8->addWidget(label_14);

        titleLabel = new QLabel(layoutWidget_5);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAutoFillBackground(true);
        titleLabel->setFrameShape(QFrame::Box);
        titleLabel->setOpenExternalLinks(false);

        horizontalLayout_8->addWidget(titleLabel);

        horizontalLayout_8->setStretch(1, 1);

        retranslateUi(ProfessorInfoPage);

        QMetaObject::connectSlotsByName(ProfessorInfoPage);
    } // setupUi

    void retranslateUi(QDialog *ProfessorInfoPage)
    {
        ProfessorInfoPage->setWindowTitle(QCoreApplication::translate("ProfessorInfoPage", "Dialog", nullptr));
        FLNameLabel->setText(QString());
        label_16->setText(QCoreApplication::translate("ProfessorInfoPage", "Phone", nullptr));
        phoneLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("ProfessorInfoPage", "Courcse:", nullptr));
        label_5->setText(QString());
        label_12->setText(QCoreApplication::translate("ProfessorInfoPage", "E-mail", nullptr));
        emailLabel->setText(QString());
        label_18->setText(QCoreApplication::translate("ProfessorInfoPage", "ID", nullptr));
        idLabel->setText(QString());
        editPushButton->setText(QCoreApplication::translate("ProfessorInfoPage", "Edit", nullptr));
        label_3->setText(QCoreApplication::translate("ProfessorInfoPage", "Name", nullptr));
        nameLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("ProfessorInfoPage", "Title", nullptr));
        titleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfessorInfoPage: public Ui_ProfessorInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORINFOPAGE_H
