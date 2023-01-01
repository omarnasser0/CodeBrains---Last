/********************************************************************************
** Form generated from reading UI file 'StudentInfoPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFOPAGE_H
#define UI_STUDENTINFOPAGE_H

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

class Ui_StudentInfoPage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *emailLabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QLabel *phoneLabel;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLabel *idLabel;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_20;
    QLabel *tGradeLabel;
    QTableWidget *studentTableInfo;
    QLabel *FLNameLabel;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *nameLabel;
    QPushButton *editPushButton;

    void setupUi(QDialog *StudentInfoPage)
    {
        if (StudentInfoPage->objectName().isEmpty())
            StudentInfoPage->setObjectName("StudentInfoPage");
        StudentInfoPage->resize(518, 561);
        layoutWidget = new QWidget(StudentInfoPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 160, 511, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        QFont font;
        font.setPointSize(15);
        label_12->setFont(font);
        label_12->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_12);

        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setAutoFillBackground(true);
        emailLabel->setFrameShape(QFrame::Box);
        emailLabel->setOpenExternalLinks(false);

        horizontalLayout_3->addWidget(emailLabel);

        horizontalLayout_3->setStretch(1, 1);
        layoutWidget_2 = new QWidget(StudentInfoPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(190, 100, 321, 52));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName("label_16");
        label_16->setFont(font);
        label_16->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_16);

        phoneLabel = new QLabel(layoutWidget_2);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setAutoFillBackground(true);
        phoneLabel->setFrameShape(QFrame::Box);
        phoneLabel->setOpenExternalLinks(false);

        horizontalLayout_5->addWidget(phoneLabel);

        horizontalLayout_5->setStretch(1, 1);
        layoutWidget_3 = new QWidget(StudentInfoPage);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 100, 191, 52));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName("label_18");
        label_18->setFont(font);
        label_18->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(label_18);

        idLabel = new QLabel(layoutWidget_3);
        idLabel->setObjectName("idLabel");
        idLabel->setAutoFillBackground(true);
        idLabel->setFrameShape(QFrame::Box);
        idLabel->setOpenExternalLinks(false);

        horizontalLayout_7->addWidget(idLabel);

        horizontalLayout_7->setStretch(1, 1);
        layoutWidget_4 = new QWidget(StudentInfoPage);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 220, 511, 52));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_4);
        label_20->setObjectName("label_20");
        label_20->setFont(font);
        label_20->setFrameShape(QFrame::NoFrame);

        horizontalLayout_8->addWidget(label_20);

        tGradeLabel = new QLabel(layoutWidget_4);
        tGradeLabel->setObjectName("tGradeLabel");
        tGradeLabel->setAutoFillBackground(true);
        tGradeLabel->setFrameShape(QFrame::Box);
        tGradeLabel->setOpenExternalLinks(false);

        horizontalLayout_8->addWidget(tGradeLabel);

        horizontalLayout_8->setStretch(1, 1);
        studentTableInfo = new QTableWidget(StudentInfoPage);
        studentTableInfo->setObjectName("studentTableInfo");
        studentTableInfo->setGeometry(QRect(10, 330, 491, 181));
        studentTableInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        FLNameLabel = new QLabel(StudentInfoPage);
        FLNameLabel->setObjectName("FLNameLabel");
        FLNameLabel->setGeometry(QRect(120, 0, 271, 31));
        QFont font1;
        font1.setPointSize(22);
        FLNameLabel->setFont(font1);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);
        label_5 = new QLabel(StudentInfoPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 280, 49, 16));
        label_6 = new QLabel(StudentInfoPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 280, 161, 41));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::Box);
        layoutWidget1 = new QWidget(StudentInfoPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 40, 511, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_3);

        nameLabel = new QLabel(layoutWidget1);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setAutoFillBackground(true);
        nameLabel->setFrameShape(QFrame::Box);
        nameLabel->setOpenExternalLinks(false);

        horizontalLayout->addWidget(nameLabel);

        horizontalLayout->setStretch(1, 1);
        editPushButton = new QPushButton(StudentInfoPage);
        editPushButton->setObjectName("editPushButton");
        editPushButton->setGeometry(QRect(200, 520, 83, 29));

        retranslateUi(StudentInfoPage);

        QMetaObject::connectSlotsByName(StudentInfoPage);
    } // setupUi

    void retranslateUi(QDialog *StudentInfoPage)
    {
        StudentInfoPage->setWindowTitle(QCoreApplication::translate("StudentInfoPage", "Dialog", nullptr));
        label_12->setText(QCoreApplication::translate("StudentInfoPage", "E-mail", nullptr));
        emailLabel->setText(QString());
        label_16->setText(QCoreApplication::translate("StudentInfoPage", "Phone", nullptr));
        phoneLabel->setText(QString());
        label_18->setText(QCoreApplication::translate("StudentInfoPage", "ID", nullptr));
        idLabel->setText(QString());
        label_20->setText(QCoreApplication::translate("StudentInfoPage", "Total_Grade", nullptr));
        tGradeLabel->setText(QString());
        FLNameLabel->setText(QString());
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("StudentInfoPage", "Courcse:", nullptr));
        label_3->setText(QCoreApplication::translate("StudentInfoPage", "Name", nullptr));
        nameLabel->setText(QString());
        editPushButton->setText(QCoreApplication::translate("StudentInfoPage", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfoPage: public Ui_StudentInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFOPAGE_H
