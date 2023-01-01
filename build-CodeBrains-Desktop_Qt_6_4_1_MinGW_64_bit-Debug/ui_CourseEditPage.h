/********************************************************************************
** Form generated from reading UI file 'CourseEditPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEEDITPAGE_H
#define UI_COURSEEDITPAGE_H

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

class Ui_CourseEditPage
{
public:
    QLabel *FLNameLabel;
    QPushButton *savePushButton;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *nameLineEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *allProfessorsTable;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *addedProfessorsTable;
    QPushButton *deletePButton;
    QLabel *label_3;
    QPushButton *SavePushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_19;
    QLabel *idLabel;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QComboBox *dayComboBox;
    QComboBox *timeComboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_17;
    QComboBox *lecHallCBox;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *allStudentsTable;
    QVBoxLayout *verticalLayout;
    QTableWidget *addedStudentsTable;
    QPushButton *deleteSButton;
    QLabel *label;

    void setupUi(QDialog *CourseEditPage)
    {
        if (CourseEditPage->objectName().isEmpty())
            CourseEditPage->setObjectName("CourseEditPage");
        CourseEditPage->resize(1135, 622);
        FLNameLabel = new QLabel(CourseEditPage);
        FLNameLabel->setObjectName("FLNameLabel");
        FLNameLabel->setGeometry(QRect(300, 20, 527, 51));
        QFont font;
        font.setPointSize(22);
        FLNameLabel->setFont(font);
        FLNameLabel->setFrameShape(QFrame::StyledPanel);
        savePushButton = new QPushButton(CourseEditPage);
        savePushButton->setObjectName("savePushButton");
        savePushButton->setGeometry(QRect(381, 888, 527, 32));
        layoutWidget_4 = new QWidget(CourseEditPage);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(70, 140, 211, 36));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::NoFrame);

        horizontalLayout_9->addWidget(label_4);

        nameLineEdit = new QLineEdit(layoutWidget_4);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_9->addWidget(nameLineEdit);

        layoutWidget = new QWidget(CourseEditPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(570, 250, 525, 304));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        allProfessorsTable = new QTableWidget(layoutWidget);
        allProfessorsTable->setObjectName("allProfessorsTable");
        allProfessorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allProfessorsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_7->addWidget(allProfessorsTable);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        addedProfessorsTable = new QTableWidget(layoutWidget);
        addedProfessorsTable->setObjectName("addedProfessorsTable");
        addedProfessorsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addedProfessorsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_5->addWidget(addedProfessorsTable);

        deletePButton = new QPushButton(layoutWidget);
        deletePButton->setObjectName("deletePButton");

        verticalLayout_5->addWidget(deletePButton);


        horizontalLayout_7->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_3);

        SavePushButton = new QPushButton(CourseEditPage);
        SavePushButton->setObjectName("SavePushButton");
        SavePushButton->setGeometry(QRect(500, 570, 141, 41));
        layoutWidget1 = new QWidget(CourseEditPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(320, 140, 128, 36));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName("label_19");
        label_19->setFont(font1);
        label_19->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_19);

        idLabel = new QLabel(layoutWidget1);
        idLabel->setObjectName("idLabel");
        QFont font2;
        font2.setPointSize(11);
        idLabel->setFont(font2);

        horizontalLayout->addWidget(idLabel);

        layoutWidget2 = new QWidget(CourseEditPage);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(780, 140, 281, 36));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName("label_13");
        label_13->setFont(font1);
        label_13->setFrameShape(QFrame::NoFrame);

        horizontalLayout_2->addWidget(label_13);

        dayComboBox = new QComboBox(layoutWidget2);
        dayComboBox->setObjectName("dayComboBox");
        dayComboBox->setInsertPolicy(QComboBox::InsertAlphabetically);

        horizontalLayout_2->addWidget(dayComboBox);

        timeComboBox = new QComboBox(layoutWidget2);
        timeComboBox->setObjectName("timeComboBox");

        horizontalLayout_2->addWidget(timeComboBox);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        layoutWidget3 = new QWidget(CourseEditPage);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(500, 140, 251, 36));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget3);
        label_17->setObjectName("label_17");
        label_17->setFont(font1);
        label_17->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_17);

        lecHallCBox = new QComboBox(layoutWidget3);
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
        layoutWidget4 = new QWidget(CourseEditPage);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(30, 250, 525, 304));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        allStudentsTable = new QTableWidget(layoutWidget4);
        allStudentsTable->setObjectName("allStudentsTable");
        allStudentsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        allStudentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        horizontalLayout_6->addWidget(allStudentsTable);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addedStudentsTable = new QTableWidget(layoutWidget4);
        addedStudentsTable->setObjectName("addedStudentsTable");
        addedStudentsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        addedStudentsTable->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(addedStudentsTable);

        deleteSButton = new QPushButton(layoutWidget4);
        deleteSButton->setObjectName("deleteSButton");

        verticalLayout->addWidget(deleteSButton);


        horizontalLayout_6->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label = new QLabel(layoutWidget4);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);


        retranslateUi(CourseEditPage);

        QMetaObject::connectSlotsByName(CourseEditPage);
    } // setupUi

    void retranslateUi(QDialog *CourseEditPage)
    {
        CourseEditPage->setWindowTitle(QCoreApplication::translate("CourseEditPage", "Dialog", nullptr));
        FLNameLabel->setText(QString());
        savePushButton->setText(QCoreApplication::translate("CourseEditPage", "Save", nullptr));
        label_4->setText(QCoreApplication::translate("CourseEditPage", "Name", nullptr));
        label_9->setText(QCoreApplication::translate("CourseEditPage", "Professors:", nullptr));
        deletePButton->setText(QCoreApplication::translate("CourseEditPage", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("CourseEditPage", "Double Click  to add a professor to this course", nullptr));
        SavePushButton->setText(QCoreApplication::translate("CourseEditPage", "Save", nullptr));
        label_19->setText(QCoreApplication::translate("CourseEditPage", "ID", nullptr));
        idLabel->setText(QCoreApplication::translate("CourseEditPage", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("CourseEditPage", "Time", nullptr));
        label_17->setText(QCoreApplication::translate("CourseEditPage", "LecHall", nullptr));
        label_7->setText(QCoreApplication::translate("CourseEditPage", "Students:", nullptr));
        deleteSButton->setText(QCoreApplication::translate("CourseEditPage", "Delete", nullptr));
        label->setText(QCoreApplication::translate("CourseEditPage", "Double Click  to add a student to this course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseEditPage: public Ui_CourseEditPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEEDITPAGE_H
