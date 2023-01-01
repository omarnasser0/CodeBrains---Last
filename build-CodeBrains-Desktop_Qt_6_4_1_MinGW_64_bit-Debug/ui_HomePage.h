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
#include <QtWidgets/QGridLayout>
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
    QAction *actionHome_Page;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *helloLabel;
    QSpacerItem *verticalSpacer;
    QPushButton *infoButton;
    QPushButton *logoutButton;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_stud;
    QSpacerItem *horizontalSpacer;
    QPushButton *search_stud;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addStudent;
    QPushButton *delete_stud;
    QPushButton *save_stud;
    QTableWidget *studentTable;
    QPushButton *RefreshSButton;
    QWidget *tab_2;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_course;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *search_course;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout_5;
    QPushButton *addCourse;
    QPushButton *delete_course;
    QPushButton *save_course;
    QTableWidget *courseTable;
    QPushButton *RefreshCButton;
    QWidget *tab_3;
    QWidget *widget2;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *addProfessor;
    QPushButton *delete_prof;
    QPushButton *save_prof;
    QTableWidget *professorTable;
    QPushButton *refreshPButton;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_prof;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *search_prof;
    QMenuBar *menubar;
    QMenu *menuAdmin_Panel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(721, 664);
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
        actionHome_Page = new QAction(HomePage);
        actionHome_Page->setObjectName("actionHome_Page");
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
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


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);

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
        widget = new QWidget(tab1);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_stud = new QLineEdit(widget);
        lineEdit_stud->setObjectName("lineEdit_stud");

        horizontalLayout->addWidget(lineEdit_stud);

        horizontalSpacer = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        search_stud = new QPushButton(widget);
        search_stud->setObjectName("search_stud");

        horizontalLayout->addWidget(search_stud);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        addStudent = new QPushButton(widget);
        addStudent->setObjectName("addStudent");

        verticalLayout_3->addWidget(addStudent);

        delete_stud = new QPushButton(widget);
        delete_stud->setObjectName("delete_stud");

        verticalLayout_3->addWidget(delete_stud);

        save_stud = new QPushButton(widget);
        save_stud->setObjectName("save_stud");

        verticalLayout_3->addWidget(save_stud);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        studentTable = new QTableWidget(widget);
        studentTable->setObjectName("studentTable");
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
        studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        studentTable->setAlternatingRowColors(true);
        studentTable->setSelectionMode(QAbstractItemView::SingleSelection);
        studentTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        studentTable->setSortingEnabled(true);
        studentTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(studentTable, 1, 1, 1, 1);

        RefreshSButton = new QPushButton(widget);
        RefreshSButton->setObjectName("RefreshSButton");

        gridLayout->addWidget(RefreshSButton, 0, 0, 1, 1);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(1, 1);

        horizontalLayout_3->addLayout(gridLayout);

        tabWidget->addTab(tab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        widget1 = new QWidget(tab_2);
        widget1->setObjectName("widget1");
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEdit_course = new QLineEdit(widget1);
        lineEdit_course->setObjectName("lineEdit_course");

        horizontalLayout_6->addWidget(lineEdit_course);

        horizontalSpacer_3 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        search_course = new QPushButton(widget1);
        search_course->setObjectName("search_course");

        horizontalLayout_6->addWidget(search_course);

        pushButton_10 = new QPushButton(widget1);
        pushButton_10->setObjectName("pushButton_10");

        horizontalLayout_6->addWidget(pushButton_10);


        gridLayout_2->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        addCourse = new QPushButton(widget1);
        addCourse->setObjectName("addCourse");

        verticalLayout_5->addWidget(addCourse);

        delete_course = new QPushButton(widget1);
        delete_course->setObjectName("delete_course");

        verticalLayout_5->addWidget(delete_course);

        save_course = new QPushButton(widget1);
        save_course->setObjectName("save_course");

        verticalLayout_5->addWidget(save_course);


        gridLayout_2->addLayout(verticalLayout_5, 1, 0, 1, 1);

        courseTable = new QTableWidget(widget1);
        courseTable->setObjectName("courseTable");
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

        gridLayout_2->addWidget(courseTable, 1, 1, 1, 1);

        RefreshCButton = new QPushButton(widget1);
        RefreshCButton->setObjectName("RefreshCButton");

        gridLayout_2->addWidget(RefreshCButton, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setColumnStretch(1, 1);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        widget2 = new QWidget(tab_3);
        widget2->setObjectName("widget2");
        gridLayout_5 = new QGridLayout(widget2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        addProfessor = new QPushButton(widget2);
        addProfessor->setObjectName("addProfessor");

        verticalLayout_6->addWidget(addProfessor);

        delete_prof = new QPushButton(widget2);
        delete_prof->setObjectName("delete_prof");

        verticalLayout_6->addWidget(delete_prof);

        save_prof = new QPushButton(widget2);
        save_prof->setObjectName("save_prof");

        verticalLayout_6->addWidget(save_prof);


        gridLayout_5->addLayout(verticalLayout_6, 2, 0, 1, 1);

        professorTable = new QTableWidget(widget2);
        professorTable->setObjectName("professorTable");
        professorTable->setEnabled(true);
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

        gridLayout_5->addWidget(professorTable, 2, 1, 1, 1);

        refreshPButton = new QPushButton(widget2);
        refreshPButton->setObjectName("refreshPButton");

        gridLayout_5->addWidget(refreshPButton, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEdit_prof = new QLineEdit(widget2);
        lineEdit_prof->setObjectName("lineEdit_prof");

        horizontalLayout_4->addWidget(lineEdit_prof);

        horizontalSpacer_4 = new QSpacerItem(120, 30, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        search_prof = new QPushButton(widget2);
        search_prof->setObjectName("search_prof");

        horizontalLayout_4->addWidget(search_prof);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        gridLayout_5->setRowStretch(1, 1);
        gridLayout_5->setColumnStretch(1, 1);
        tabWidget->addTab(tab_3, QString());

        gridLayout_4->addWidget(tabWidget, 0, 1, 1, 1);

        HomePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 721, 28));
        menuAdmin_Panel = new QMenu(menubar);
        menuAdmin_Panel->setObjectName("menuAdmin_Panel");
        HomePage->setMenuBar(menubar);
        statusbar = new QStatusBar(HomePage);
        statusbar->setObjectName("statusbar");
        HomePage->setStatusBar(statusbar);

        menubar->addAction(menuAdmin_Panel->menuAction());
        menuAdmin_Panel->addAction(actionHome_Page);

        retranslateUi(HomePage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "MainWindow", nullptr));
        actionHome_Page->setText(QCoreApplication::translate("HomePage", "Home Page", nullptr));
        helloLabel->setText(QString());
        infoButton->setText(QCoreApplication::translate("HomePage", "Info", nullptr));
        logoutButton->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
        search_stud->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        addStudent->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_stud->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_stud->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        RefreshSButton->setText(QCoreApplication::translate("HomePage", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("HomePage", "Student", nullptr));
        search_course->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        pushButton_10->setText(QCoreApplication::translate("HomePage", "clear", nullptr));
        addCourse->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_course->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_course->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        RefreshCButton->setText(QCoreApplication::translate("HomePage", "Refresh", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HomePage", "Course", nullptr));
        addProfessor->setText(QCoreApplication::translate("HomePage", "Add new", nullptr));
        delete_prof->setText(QCoreApplication::translate("HomePage", "Delete", nullptr));
        save_prof->setText(QCoreApplication::translate("HomePage", "save", nullptr));
        refreshPButton->setText(QCoreApplication::translate("HomePage", "Refresh", nullptr));
        search_prof->setText(QCoreApplication::translate("HomePage", "search", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("HomePage", "Professor", nullptr));
        menuAdmin_Panel->setTitle(QCoreApplication::translate("HomePage", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
