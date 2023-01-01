/********************************************************************************
** Form generated from reading UI file 'ProfessorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSORPAGE_H
#define UI_PROFESSORPAGE_H

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

class Ui_ProfessorPage
{
public:
    QTableWidget *professorTable;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLineEdit;
    QPushButton *searchPushButton;
    QPushButton *backPushButton;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *csvPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *addPushButton;

    void setupUi(QDialog *ProfessorPage)
    {
        if (ProfessorPage->objectName().isEmpty())
            ProfessorPage->setObjectName("ProfessorPage");
        ProfessorPage->resize(735, 463);
        professorTable = new QTableWidget(ProfessorPage);
        professorTable->setObjectName("professorTable");
        professorTable->setGeometry(QRect(0, 50, 731, 361));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(professorTable->sizePolicy().hasHeightForWidth());
        professorTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        professorTable->setFont(font);
        professorTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        professorTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        professorTable->setAlternatingRowColors(true);
        professorTable->setSelectionMode(QAbstractItemView::SingleSelection);
        professorTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        professorTable->setSortingEnabled(true);
        professorTable->horizontalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(ProfessorPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 0, 631, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(layoutWidget);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setClearButtonEnabled(false);

        horizontalLayout->addWidget(searchLineEdit);

        searchPushButton = new QPushButton(layoutWidget);
        searchPushButton->setObjectName("searchPushButton");

        horizontalLayout->addWidget(searchPushButton);

        backPushButton = new QPushButton(layoutWidget);
        backPushButton->setObjectName("backPushButton");

        horizontalLayout->addWidget(backPushButton);

        layoutWidget_2 = new QWidget(ProfessorPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 420, 731, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        csvPushButton = new QPushButton(layoutWidget_2);
        csvPushButton->setObjectName("csvPushButton");

        horizontalLayout_2->addWidget(csvPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addPushButton = new QPushButton(layoutWidget_2);
        addPushButton->setObjectName("addPushButton");

        horizontalLayout_2->addWidget(addPushButton);


        retranslateUi(ProfessorPage);

        QMetaObject::connectSlotsByName(ProfessorPage);
    } // setupUi

    void retranslateUi(QDialog *ProfessorPage)
    {
        ProfessorPage->setWindowTitle(QCoreApplication::translate("ProfessorPage", "Dialog", nullptr));
        searchLineEdit->setInputMask(QString());
        searchLineEdit->setText(QCoreApplication::translate("ProfessorPage", "search", nullptr));
        searchPushButton->setText(QCoreApplication::translate("ProfessorPage", "search", nullptr));
        backPushButton->setText(QCoreApplication::translate("ProfessorPage", "back", nullptr));
        csvPushButton->setText(QCoreApplication::translate("ProfessorPage", "CSV", nullptr));
        addPushButton->setText(QCoreApplication::translate("ProfessorPage", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfessorPage: public Ui_ProfessorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSORPAGE_H
