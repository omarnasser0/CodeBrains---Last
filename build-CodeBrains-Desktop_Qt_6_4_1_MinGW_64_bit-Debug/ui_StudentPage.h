/********************************************************************************
** Form generated from reading UI file 'StudentPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPAGE_H
#define UI_STUDENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentPage
{
public:
    QTableWidget *studentTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLineEdit;
    QPushButton *searchPushButton;
    QPushButton *backPushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *csvPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *addPushButton;

    void setupUi(QDialog *StudentPage)
    {
        if (StudentPage->objectName().isEmpty())
            StudentPage->setObjectName("StudentPage");
        StudentPage->resize(752, 461);
        studentTable = new QTableWidget(StudentPage);
        studentTable->setObjectName("studentTable");
        studentTable->setGeometry(QRect(10, 60, 731, 361));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(studentTable->sizePolicy().hasHeightForWidth());
        studentTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        studentTable->setFont(font);
        studentTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        studentTable->setAlternatingRowColors(true);
        studentTable->setSelectionMode(QAbstractItemView::SingleSelection);
        studentTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        studentTable->setSortingEnabled(true);
        studentTable->horizontalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(StudentPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 10, 631, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(layoutWidget);
        searchLineEdit->setObjectName("searchLineEdit");

        horizontalLayout->addWidget(searchLineEdit);

        searchPushButton = new QPushButton(layoutWidget);
        searchPushButton->setObjectName("searchPushButton");

        horizontalLayout->addWidget(searchPushButton);

        backPushButton = new QPushButton(layoutWidget);
        backPushButton->setObjectName("backPushButton");

        horizontalLayout->addWidget(backPushButton);

        layoutWidget1 = new QWidget(StudentPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 430, 731, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        csvPushButton = new QPushButton(layoutWidget1);
        csvPushButton->setObjectName("csvPushButton");

        horizontalLayout_2->addWidget(csvPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addPushButton = new QPushButton(layoutWidget1);
        addPushButton->setObjectName("addPushButton");

        horizontalLayout_2->addWidget(addPushButton);


        retranslateUi(StudentPage);

        QMetaObject::connectSlotsByName(StudentPage);
    } // setupUi

    void retranslateUi(QDialog *StudentPage)
    {
        StudentPage->setWindowTitle(QCoreApplication::translate("StudentPage", "Dialog", nullptr));
        searchLineEdit->setText(QCoreApplication::translate("StudentPage", "search", nullptr));
        searchPushButton->setText(QCoreApplication::translate("StudentPage", "search", nullptr));
        backPushButton->setText(QCoreApplication::translate("StudentPage", "back", nullptr));
        csvPushButton->setText(QCoreApplication::translate("StudentPage", "CSV", nullptr));
        addPushButton->setText(QCoreApplication::translate("StudentPage", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentPage: public Ui_StudentPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPAGE_H
