/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *helloLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *infoButton;
    QPushButton *logoutButton;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_stud;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_stud;
    QPushButton *build_stud;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *delete_stud;
    QPushButton *save_stud;
    QTableWidget *studentTable;
    QWidget *tab_2;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_course;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *search_course;
    QPushButton *build_course;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_11;
    QPushButton *delete_course;
    QPushButton *save_course;
    QTableWidget *courseTable;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_prof;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *search_prof;
    QPushButton *build_prof;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_15;
    QPushButton *delete_prof;
    QPushButton *save_prof;
    QTableWidget *professorTable;
    QMenuBar *menubar;
    QMenu *menuAdmin_Panel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(832, 671);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HomePage->sizePolicy().hasHeightForWidth());
        HomePage->setSizePolicy(sizePolicy);
        HomePage->setStyleSheet(QString::fromUtf8("/*\n"
"Material Dark Style Sheet for QT Applications\n"
"Author: Jaime A. Quiroga P.\n"
"Inspired on https://github.com/jxfwinter/qt-material-stylesheet\n"
"Company: GTRONICK\n"
"Last updated: 04/12/2018, 15:00.\n"
"Available at: https://github.com/GTRONICK/QSS/blob/master/MaterialDark.qss\n"
"*/\n"
"QMainWindow {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QDialog {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QColorDialog {\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTextEdit {\n"
"	background-color:#1e1d23;\n"
"	color: #a9b7c6;\n"
"}\n"
"QPlainTextEdit {\n"
"	selection-background-color:#007b50;\n"
"	background-color:#1e1d23;\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"}\n"
"QPushButton{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-botto"
                        "m-color: transparent;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: inset;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-width: 1px;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid"
                        ";\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-bottom: 2px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #37efba;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #37efba;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #808086;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	co"
                        "lor: #808086;\n"
"	padding-bottom: 1px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px; border-radius: 4px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	padding: 0 8px;\n"
"	color: #a9b7c6;\n"
"	background:#1e1d23;\n"
"	selection-background-color:#007b50;\n"
"	selection-color: #FFFFFF;\n"
"}\n"
"QLabel {\n"
"	color: #a9b7c6;\n"
"}\n"
"QLCDNumber {\n"
"	color: #37e6b4;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: rgb(240, 240, 240);\n"
"	border-width: 1px; \n"
"	border-radius: 10px;\n"
"	border-color: rgb(58, 58, 58);\n"
"	border-style: inset;\n"
"	background-color:#1e1d23;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #04b97f;\n"
"	border-radius: 5px;\n"
"}\n"
"QMenuBar {\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #a9b7c6;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"  	background: #1e1d23;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background:#1e1d23;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item:s"
                        "elected {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: #04b97f;\n"
"	border-bottom-color: transparent;\n"
"	border-left-width: 2px;\n"
"	color: #FFFFFF;\n"
"	padding-left:15px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu::item {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #a9b7c6;\n"
"	padding-left:17px;\n"
"	padding-top:4px;\n"
"	padding-bottom:4px;\n"
"	padding-right:7px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QMenu{\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: rgb(77,77,77);\n"
"		background-color:#1e1d23;\n"
"		border-style: solid;\n"
"		border-"
                        "width: 1px;\n"
"    	border-radius: 6px;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: transparent;\n"
"	border-bottom-width: 1px;\n"
"	border-style: solid;\n"
"	color: #808086;\n"
"	padding: 3px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"	border-top-color: transparent;\n"
"	border-right-color: transparent;\n"
"	border-left-color: transparent;\n"
"	border-bottom-color: #04b97f;\n"
"	border-bottom-width: 2px;\n"
"	border-style: solid;\n"
"	color: #FFFFFF;\n"
"	padding-left: 3px;\n"
"	padding-bottom: 2px;\n"
"	margin-left:3px;\n"
"	background-color: #1e1d23;\n"
"}\n"
"\n"
"QCheckBox {\n"
"	color: #a9b7c6;\n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;"
                        "\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: rgb(87, 97, 106);\n"
"	background-color:#1e1d23;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QRadioButton {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: #04b97f;\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
""
                        "	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #04b97f;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
"	color:#027f7f;\n"
"}\n"
"QSpinBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QDateEdit {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QComboBox {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QComboBox:editable {\n"
"	background: #1e1d23;\n"
"	color: #a9b7c6;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox QAbstractItemView {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"	selection-color: #FFFFFF;\n"
"	selection-background-color: #1e1d23;\n"
"}\n"
"QComboBox:!editable:on, QComboBox::drop-do"
                        "wn:editable:on {\n"
"	color: #a9b7c6;	\n"
"	background: #1e1d23;\n"
"}\n"
"QFontComboBox {\n"
"	color: #a9b7c6;	\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab {\n"
"	color: #a9b7c6;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QToolBox::tab:selected {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QScrollArea {\n"
"	color: #FFFFFF;\n"
"	background-color: #1e1d23;\n"
"}\n"
"QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #04b97f;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14"
                        "px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #04b97f;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #04b97f;\n"
"}"));
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        helloLabel = new QLabel(centralwidget);
        helloLabel->setObjectName("helloLabel");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        helloLabel->setFont(font);

        verticalLayout->addWidget(helloLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        infoButton = new QPushButton(centralwidget);
        infoButton->setObjectName("infoButton");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoButton->sizePolicy().hasHeightForWidth());
        infoButton->setSizePolicy(sizePolicy1);
        infoButton->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(infoButton);

        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(logoutButton);


        horizontalLayout_2->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setIconSize(QSize(25, 25));
        tab1 = new QWidget();
        tab1->setObjectName("tab1");
        layoutWidget_2 = new QWidget(tab1);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(171, 11, 531, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_stud = new QLineEdit(layoutWidget_2);
        lineEdit_stud->setObjectName("lineEdit_stud");

        horizontalLayout->addWidget(lineEdit_stud);

        horizontalSpacer = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        search_stud = new QPushButton(layoutWidget_2);
        search_stud->setObjectName("search_stud");

        horizontalLayout->addWidget(search_stud);

        build_stud = new QPushButton(layoutWidget_2);
        build_stud->setObjectName("build_stud");

        horizontalLayout->addWidget(build_stud);

        layoutWidget_4 = new QWidget(tab1);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 160, 111, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget_4);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_3->addWidget(pushButton_3);

        delete_stud = new QPushButton(layoutWidget_4);
        delete_stud->setObjectName("delete_stud");

        verticalLayout_3->addWidget(delete_stud);

        save_stud = new QPushButton(layoutWidget_4);
        save_stud->setObjectName("save_stud");

        verticalLayout_3->addWidget(save_stud);

        studentTable = new QTableWidget(tab1);
        studentTable->setObjectName("studentTable");
        studentTable->setGeometry(QRect(171, 51, 531, 501));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(studentTable->sizePolicy().hasHeightForWidth());
        studentTable->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setPointSize(18);
        studentTable->setFont(font1);
        studentTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        studentTable->setFrameShadow(QFrame::Plain);
        studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        studentTable->setAlternatingRowColors(true);
        studentTable->setSelectionMode(QAbstractItemView::SingleSelection);
        studentTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        studentTable->setSortingEnabled(true);
        studentTable->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget_8 = new QWidget(tab_2);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(181, 0, 541, 34));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_course = new QLineEdit(layoutWidget_8);
        lineEdit_course->setObjectName("lineEdit_course");

        horizontalLayout_6->addWidget(lineEdit_course);

        horizontalSpacer_3 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        search_course = new QPushButton(layoutWidget_8);
        search_course->setObjectName("search_course");

        horizontalLayout_6->addWidget(search_course);

        build_course = new QPushButton(layoutWidget_8);
        build_course->setObjectName("build_course");

        horizontalLayout_6->addWidget(build_course);

        layoutWidget_9 = new QWidget(tab_2);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(10, 180, 111, 111));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget_9);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout_5->addWidget(pushButton_11);

        delete_course = new QPushButton(layoutWidget_9);
        delete_course->setObjectName("delete_course");

        verticalLayout_5->addWidget(delete_course);

        save_course = new QPushButton(layoutWidget_9);
        save_course->setObjectName("save_course");

        verticalLayout_5->addWidget(save_course);

        courseTable = new QTableWidget(tab_2);
        courseTable->setObjectName("courseTable");
        courseTable->setGeometry(QRect(181, 51, 541, 511));
        sizePolicy3.setHeightForWidth(courseTable->sizePolicy().hasHeightForWidth());
        courseTable->setSizePolicy(sizePolicy3);
        courseTable->setFont(font1);
        courseTable->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background-color: #C0C0C0;\n"
"alternate-background-color: #606060;\n"
"selection-background-color: #202020;\n"
"}"));
        courseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        courseTable->setAlternatingRowColors(true);
        courseTable->setSelectionMode(QAbstractItemView::SingleSelection);
        courseTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        courseTable->setSortingEnabled(true);
        courseTable->horizontalHeader()->setStretchLastSection(true);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(209, 9, 501, 32));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_prof = new QLineEdit(layoutWidget);
        lineEdit_prof->setObjectName("lineEdit_prof");

        horizontalLayout_8->addWidget(lineEdit_prof);

        horizontalSpacer_4 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        search_prof = new QPushButton(layoutWidget);
        search_prof->setObjectName("search_prof");

        horizontalLayout_8->addWidget(search_prof);

        build_prof = new QPushButton(layoutWidget);
        build_prof->setObjectName("build_prof");

        horizontalLayout_8->addWidget(build_prof);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 230, 111, 94));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_15 = new QPushButton(layoutWidget1);
        pushButton_15->setObjectName("pushButton_15");

        verticalLayout_6->addWidget(pushButton_15);

        delete_prof = new QPushButton(layoutWidget1);
        delete_prof->setObjectName("delete_prof");

        verticalLayout_6->addWidget(delete_prof);

        save_prof = new QPushButton(layoutWidget1);
        save_prof->setObjectName("save_prof");

        verticalLayout_6->addWidget(save_prof);

        professorTable = new QTableWidget(tab_3);
        professorTable->setObjectName("professorTable");
        professorTable->setEnabled(true);
        professorTable->setGeometry(QRect(210, 56, 501, 501));
        sizePolicy3.setHeightForWidth(professorTable->sizePolicy().hasHeightForWidth());
        professorTable->setSizePolicy(sizePolicy3);
        professorTable->setFont(font1);
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
        tabWidget->addTab(tab_3, QString());

        horizontalLayout_2->addWidget(tabWidget);

        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 832, 28));
        menuAdmin_Panel = new QMenu(menubar);
        menuAdmin_Panel->setObjectName("menuAdmin_Panel");
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName("statusbar");
        HomePage->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Panel->menuAction());

        retranslateUi(HomePage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "MainWindow", nullptr));
        helloLabel->setText(QString());
        infoButton->setText(QCoreApplication::translate("HomePage", "Info", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
        search_stud->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        build_stud->setText(QCoreApplication::translate("HomePage", "build", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_stud->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_stud->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("HomePage", "Student", nullptr));
        search_course->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        build_course->setText(QCoreApplication::translate("HomePage", "build", nullptr));
        pushButton_11->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_course->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_course->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HomePage", "Course", nullptr));
        search_prof->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        build_prof->setText(QCoreApplication::translate("HomePage", "build", nullptr));
        pushButton_15->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_prof->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_prof->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("HomePage", "Professor", nullptr));
        menuAdmin_Panel->setTitle(QCoreApplication::translate("HomePage", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
