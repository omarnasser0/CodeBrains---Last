/********************************************************************************
** Form generated from reading UI file 'CourseInfoPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEINFOPAGE_H
#define UI_COURSEINFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseInfoPage
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_18;
    QLabel *codeLabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_16;
    QLabel *lecHallLabel;
    QLabel *label_6;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *nameLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QLabel *dayLabel;
    QLabel *label;
    QLabel *timeLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QTableWidget *studentsInCourseTable;
    QPushButton *editPushButton;
    QTableWidget *profInCourseTable;

    void setupUi(QDialog *CourseInfoPage)
    {
        if (CourseInfoPage->objectName().isEmpty())
            CourseInfoPage->setObjectName("CourseInfoPage");
        CourseInfoPage->resize(744, 589);
        layoutWidget_3 = new QWidget(CourseInfoPage);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(110, 110, 191, 52));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_3);
        label_18->setObjectName("label_18");
        QFont font;
        font.setPointSize(15);
        label_18->setFont(font);
        label_18->setFrameShape(QFrame::NoFrame);

        horizontalLayout_7->addWidget(label_18);

        codeLabel = new QLabel(layoutWidget_3);
        codeLabel->setObjectName("codeLabel");
        codeLabel->setAutoFillBackground(true);
        codeLabel->setFrameShape(QFrame::Box);
        codeLabel->setOpenExternalLinks(false);

        horizontalLayout_7->addWidget(codeLabel);

        horizontalLayout_7->setStretch(1, 1);
        layoutWidget_2 = new QWidget(CourseInfoPage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(300, 110, 321, 52));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName("label_16");
        label_16->setFont(font);
        label_16->setFrameShape(QFrame::NoFrame);

        horizontalLayout_5->addWidget(label_16);

        lecHallLabel = new QLabel(layoutWidget_2);
        lecHallLabel->setObjectName("lecHallLabel");
        lecHallLabel->setAutoFillBackground(true);
        lecHallLabel->setFrameShape(QFrame::Box);
        lecHallLabel->setOpenExternalLinks(false);

        horizontalLayout_5->addWidget(lecHallLabel);

        horizontalLayout_5->setStretch(1, 1);
        label_6 = new QLabel(CourseInfoPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(110, 290, 161, 41));
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::Box);
        layoutWidget_5 = new QWidget(CourseInfoPage);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(110, 50, 511, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_3);

        nameLabel = new QLabel(layoutWidget_5);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setAutoFillBackground(true);
        nameLabel->setFrameShape(QFrame::Box);
        nameLabel->setOpenExternalLinks(false);

        horizontalLayout->addWidget(nameLabel);

        horizontalLayout->setStretch(1, 1);
        layoutWidget = new QWidget(CourseInfoPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 170, 511, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);
        label_12->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        dayLabel = new QLabel(layoutWidget);
        dayLabel->setObjectName("dayLabel");
        dayLabel->setAutoFillBackground(true);
        dayLabel->setFrameShape(QFrame::Box);
        dayLabel->setLineWidth(1);
        dayLabel->setOpenExternalLinks(false);

        horizontalLayout_3->addWidget(dayLabel);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        timeLabel = new QLabel(layoutWidget);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setAutoFillBackground(true);
        timeLabel->setFrameShape(QFrame::Box);
        timeLabel->setOpenExternalLinks(false);

        horizontalLayout_3->addWidget(timeLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(4, 1);
        label_7 = new QLabel(CourseInfoPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 290, 161, 41));
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::Box);
        studentsInCourseTable = new QTableWidget(CourseInfoPage);
        studentsInCourseTable->setObjectName("studentsInCourseTable");
        studentsInCourseTable->setGeometry(QRect(400, 340, 241, 191));
        studentsInCourseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        editPushButton = new QPushButton(CourseInfoPage);
        editPushButton->setObjectName("editPushButton");
        editPushButton->setGeometry(QRect(320, 550, 101, 31));
        profInCourseTable = new QTableWidget(CourseInfoPage);
        profInCourseTable->setObjectName("profInCourseTable");
        profInCourseTable->setGeometry(QRect(110, 340, 241, 191));
        profInCourseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

        retranslateUi(CourseInfoPage);

        QMetaObject::connectSlotsByName(CourseInfoPage);
    } // setupUi

    void retranslateUi(QDialog *CourseInfoPage)
    {
        CourseInfoPage->setWindowTitle(QCoreApplication::translate("CourseInfoPage", "Dialog", nullptr));
        label_18->setText(QCoreApplication::translate("CourseInfoPage", "Code", nullptr));
        codeLabel->setText(QString());
        label_16->setText(QCoreApplication::translate("CourseInfoPage", "Lec Hall", nullptr));
        lecHallLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("CourseInfoPage", "Professors:", nullptr));
        label_3->setText(QCoreApplication::translate("CourseInfoPage", "Course Name", nullptr));
        nameLabel->setText(QString());
        label_12->setText(QCoreApplication::translate("CourseInfoPage", "Time", nullptr));
        dayLabel->setText(QString());
        label->setText(QCoreApplication::translate("CourseInfoPage", "->", nullptr));
        timeLabel->setText(QString());
        label_7->setText(QCoreApplication::translate("CourseInfoPage", "Students:", nullptr));
        editPushButton->setText(QCoreApplication::translate("CourseInfoPage", "edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseInfoPage: public Ui_CourseInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEINFOPAGE_H
