/********************************************************************************
** Form generated from reading UI file 'AddCoursePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSEPAGE_H
#define UI_ADDCOURSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCoursePage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_17;
    QComboBox *lecHallCBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QComboBox *dayComboBox;
    QComboBox *timeComboBox;
    QPushButton *addPushButton;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *allProfessorsTable;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *addedProfessorsTable;
    QPushButton *deletePButton;
    QLabel *label_3;
    QLabel *FLNameLabel;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *allStudentsTable;
    QVBoxLayout *verticalLayout;
    QTableWidget *addedStudentsTable;
    QPushButton *deleteSButton;
    QLabel *label;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QLineEdit *codeLineEdit;

    void setupUi(QDialog *AddCoursePage)
    {
        if (AddCoursePage->objectName().isEmpty())
            AddCoursePage->setObjectName("AddCoursePage");
        AddCoursePage->resize(1195, 585);
        layoutWidget = new QWidget(AddCoursePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(520, 90, 251, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName("label_17");
        QFont font;
        font.setPointSize(15);
        label_17->setFont(font);
        label_17->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_17);

        lecHallCBox = new QComboBox(layoutWidget);
        lecHallCBox->setObjectName("lecHallCBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lecHallCBox->sizePolicy().hasHeightForWidth());
        lecHallCBox->setSizePolicy(sizePolicy);
        lecHallCBox->setBaseSize(QSize(0, 0));
        lecHallCBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout_3->addWidget(lecHallCBox);

        horizontalLayout_3->setStretch(1, 1);
        layoutWidget_2 = new QWidget(AddCoursePage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(790, 90, 281, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName("label_13");
        label_13->setFont(font);
        label_13->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(label_13);

        dayComboBox = new QComboBox(layoutWidget_2);
        dayComboBox->setObjectName("dayComboBox");
        dayComboBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout_2->addWidget(dayComboBox);

        timeComboBox = new QComboBox(layoutWidget_2);
        timeComboBox->setObjectName("timeComboBox");

        horizontalLayout_2->addWidget(timeComboBox);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        addPushButton = new QPushButton(AddCoursePage);
        addPushButton->setObjectName("addPushButton");
        addPushButton->setGeometry(QRect(510, 520, 141, 41));
        layoutWidget_3 = new QWidget(AddCoursePage);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(580, 200, 525, 304));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        allProfessorsTable = new QTableWidget(layoutWidget_3);
        allProfessorsTable->setObjectName("allProfessorsTable");
        allProfessorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allProfessorsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_7->addWidget(allProfessorsTable);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        addedProfessorsTable = new QTableWidget(layoutWidget_3);
        addedProfessorsTable->setObjectName("addedProfessorsTable");
        addedProfessorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addedProfessorsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_5->addWidget(addedProfessorsTable);

        deletePButton = new QPushButton(layoutWidget_3);
        deletePButton->setObjectName("deletePButton");

        verticalLayout_5->addWidget(deletePButton);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_3);

        FLNameLabel = new QLabel(AddCoursePage);
        FLNameLabel->setObjectName("FLNameLabel");
        FLNameLabel->setGeometry(QRect(310, 20, 527, 51));
        QFont font1;
        font1.setPointSize(22);
        FLNameLabel->setFont(font1);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);
        layoutWidget_4 = new QWidget(AddCoursePage);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(80, 90, 211, 36));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::NoFrame);

        horizontalLayout_9->addWidget(label_4);

        nameLineEdit = new QLineEdit(layoutWidget_4);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_9->addWidget(nameLineEdit);

        layoutWidget_5 = new QWidget(AddCoursePage);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(40, 200, 525, 304));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        allStudentsTable = new QTableWidget(layoutWidget_5);
        allStudentsTable->setObjectName("allStudentsTable");
        allStudentsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allStudentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_6->addWidget(allStudentsTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addedStudentsTable = new QTableWidget(layoutWidget_5);
        addedStudentsTable->setObjectName("addedStudentsTable");
        addedStudentsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addedStudentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(addedStudentsTable);

        deleteSButton = new QPushButton(layoutWidget_5);
        deleteSButton->setObjectName("deleteSButton");

        verticalLayout->addWidget(deleteSButton);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label = new QLabel(layoutWidget_5);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        layoutWidget_6 = new QWidget(AddCoursePage);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(320, 90, 171, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget_6);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName("label_19");
        label_19->setFont(font);
        label_19->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_19);

        codeLineEdit = new QLineEdit(layoutWidget_6);
        codeLineEdit->setObjectName("codeLineEdit");

        horizontalLayout->addWidget(codeLineEdit);


        retranslateUi(AddCoursePage);

        QMetaObject::connectSlotsByName(AddCoursePage);
    } // setupUi

    void retranslateUi(QDialog *AddCoursePage)
    {
        AddCoursePage->setWindowTitle(QCoreApplication::translate("AddCoursePage", "Dialog", nullptr));
        label_17->setText(QCoreApplication::translate("AddCoursePage", "LecHall", nullptr));
        label_13->setText(QCoreApplication::translate("AddCoursePage", "Time", nullptr));
        addPushButton->setText(QCoreApplication::translate("AddCoursePage", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("AddCoursePage", "Professors:", nullptr));
        deletePButton->setText(QCoreApplication::translate("AddCoursePage", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("AddCoursePage", "Double Click  to add a professor to this course", nullptr));
        FLNameLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("AddCoursePage", "Name", nullptr));
        label_7->setText(QCoreApplication::translate("AddCoursePage", "Students:", nullptr));
        deleteSButton->setText(QCoreApplication::translate("AddCoursePage", "Delete", nullptr));
        label->setText(QCoreApplication::translate("AddCoursePage", "Double Click  to add a student to this course", nullptr));
        label_19->setText(QCoreApplication::translate("AddCoursePage", "ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCoursePage: public Ui_AddCoursePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSEPAGE_H
