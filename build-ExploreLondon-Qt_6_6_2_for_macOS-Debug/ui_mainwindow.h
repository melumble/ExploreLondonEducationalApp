/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <namebutton.h>
#include "mapexplorer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Help;
    QAction *actionHow_to_Play;
    QAction *actionSources;
    QAction *actionCredits;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    MapExplorer *mapExplorer;
    QWidget *bottomBar;
    QGridLayout *gridLayout_2;
    QLabel *plusLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *minusLabel;
    QSlider *zoomSlider;
    QWidget *sideBar;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton2_art_culture;
    QPushButton *pushButton3_crimes;
    QPushButton *pushButton1_bridges;
    QPushButton *pushButton5_religion;
    QPushButton *pushButton4_government;
    QPushButton *pushButton6_royal_family;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    nameButton *bridgesQuizButton;
    nameButton *artsCultureQuizButton;
    nameButton *crimesQuizButton;
    nameButton *governmentQuizButton;
    nameButton *religionQuizButton;
    nameButton *royalFamQuizButton;
    QMenuBar *menubar;
    QMenu *menuHow_to_Play;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(886, 600);
        Help = new QAction(MainWindow);
        Help->setObjectName("Help");
        actionHow_to_Play = new QAction(MainWindow);
        actionHow_to_Play->setObjectName("actionHow_to_Play");
        actionSources = new QAction(MainWindow);
        actionSources->setObjectName("actionSources");
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName("actionCredits");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mapExplorer = new MapExplorer(centralwidget);
        mapExplorer->setObjectName("mapExplorer");
        mapExplorer->setFrameShape(QFrame::NoFrame);
        mapExplorer->setLineWidth(2);

        gridLayout->addWidget(mapExplorer, 0, 0, 1, 1);

        bottomBar = new QWidget(centralwidget);
        bottomBar->setObjectName("bottomBar");
        bottomBar->setMinimumSize(QSize(0, 100));
        bottomBar->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(bottomBar);
        gridLayout_2->setObjectName("gridLayout_2");
        plusLabel = new QLabel(bottomBar);
        plusLabel->setObjectName("plusLabel");
        QFont font;
        font.setPointSize(16);
        plusLabel->setFont(font);

        gridLayout_2->addWidget(plusLabel, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(164, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(164, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        minusLabel = new QLabel(bottomBar);
        minusLabel->setObjectName("minusLabel");
        minusLabel->setFont(font);

        gridLayout_2->addWidget(minusLabel, 0, 1, 1, 1);

        zoomSlider = new QSlider(bottomBar);
        zoomSlider->setObjectName("zoomSlider");
        zoomSlider->setMinimumSize(QSize(300, 0));
        zoomSlider->setMaximumSize(QSize(500, 16777215));
        zoomSlider->setMinimum(0);
        zoomSlider->setMaximum(100);
        zoomSlider->setValue(8);
        zoomSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(zoomSlider, 0, 2, 1, 1);


        gridLayout->addWidget(bottomBar, 1, 0, 1, 1);

        sideBar = new QWidget(centralwidget);
        sideBar->setObjectName("sideBar");
        sideBar->setMinimumSize(QSize(300, 0));
        sideBar->setMaximumSize(QSize(300, 16777215));
        label_2 = new QLabel(sideBar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 151, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(sideBar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 250, 141, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(sideBar);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 40, 261, 171));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton2_art_culture = new QPushButton(layoutWidget);
        pushButton2_art_culture->setObjectName("pushButton2_art_culture");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton2_art_culture->sizePolicy().hasHeightForWidth());
        pushButton2_art_culture->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/art_culture.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton2_art_culture->setIcon(icon);
        pushButton2_art_culture->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton2_art_culture, 1, 0, 1, 1);

        pushButton3_crimes = new QPushButton(layoutWidget);
        pushButton3_crimes->setObjectName("pushButton3_crimes");
        sizePolicy.setHeightForWidth(pushButton3_crimes->sizePolicy().hasHeightForWidth());
        pushButton3_crimes->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/crimes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton3_crimes->setIcon(icon1);
        pushButton3_crimes->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton3_crimes, 0, 1, 1, 1);

        pushButton1_bridges = new QPushButton(layoutWidget);
        pushButton1_bridges->setObjectName("pushButton1_bridges");
        sizePolicy.setHeightForWidth(pushButton1_bridges->sizePolicy().hasHeightForWidth());
        pushButton1_bridges->setSizePolicy(sizePolicy);
        pushButton1_bridges->setMaximumSize(QSize(82, 16777215));
        pushButton1_bridges->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/bridges.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton1_bridges->setIcon(icon2);
        pushButton1_bridges->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton1_bridges, 0, 0, 1, 1);

        pushButton5_religion = new QPushButton(layoutWidget);
        pushButton5_religion->setObjectName("pushButton5_religion");
        sizePolicy.setHeightForWidth(pushButton5_religion->sizePolicy().hasHeightForWidth());
        pushButton5_religion->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/religion.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton5_religion->setIcon(icon3);
        pushButton5_religion->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton5_religion, 0, 2, 1, 1);

        pushButton4_government = new QPushButton(layoutWidget);
        pushButton4_government->setObjectName("pushButton4_government");
        sizePolicy.setHeightForWidth(pushButton4_government->sizePolicy().hasHeightForWidth());
        pushButton4_government->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/government.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton4_government->setIcon(icon4);
        pushButton4_government->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton4_government, 1, 1, 1, 1);

        pushButton6_royal_family = new QPushButton(layoutWidget);
        pushButton6_royal_family->setObjectName("pushButton6_royal_family");
        sizePolicy.setHeightForWidth(pushButton6_royal_family->sizePolicy().hasHeightForWidth());
        pushButton6_royal_family->setSizePolicy(sizePolicy);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/royal_family.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton6_royal_family->setIcon(icon5);
        pushButton6_royal_family->setIconSize(QSize(64, 64));

        gridLayout_3->addWidget(pushButton6_royal_family, 1, 2, 1, 1);

        verticalLayoutWidget = new QWidget(sideBar);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 290, 161, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        bridgesQuizButton = new nameButton(verticalLayoutWidget);
        bridgesQuizButton->setObjectName("bridgesQuizButton");
        bridgesQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(155,246,255);\n"
"color: #000000;"));

        verticalLayout_2->addWidget(bridgesQuizButton);

        artsCultureQuizButton = new nameButton(verticalLayoutWidget);
        artsCultureQuizButton->setObjectName("artsCultureQuizButton");
        artsCultureQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(216,187,255);\n"
"color: #000000;"));

        verticalLayout_2->addWidget(artsCultureQuizButton);

        crimesQuizButton = new nameButton(verticalLayoutWidget);
        crimesQuizButton->setObjectName("crimesQuizButton");
        crimesQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255,173,173);\n"
"color: #000000;"));

        verticalLayout_2->addWidget(crimesQuizButton);

        governmentQuizButton = new nameButton(verticalLayoutWidget);
        governmentQuizButton->setObjectName("governmentQuizButton");
        governmentQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(202,255,191);\n"
"color: #000000;"));

        verticalLayout_2->addWidget(governmentQuizButton);

        religionQuizButton = new nameButton(verticalLayoutWidget);
        religionQuizButton->setObjectName("religionQuizButton");
        religionQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(253,255,182);\n"
"color: #000000;"));

        verticalLayout_2->addWidget(religionQuizButton);

        royalFamQuizButton = new nameButton(verticalLayoutWidget);
        royalFamQuizButton->setObjectName("royalFamQuizButton");
        royalFamQuizButton->setStyleSheet(QString::fromUtf8("background-color: rgb(100,92,170);\n"
"color: #ffffff;"));
        royalFamQuizButton->setCheckable(false);

        verticalLayout_2->addWidget(royalFamQuizButton);


        gridLayout->addWidget(sideBar, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 886, 36));
        menuHow_to_Play = new QMenu(menubar);
        menuHow_to_Play->setObjectName("menuHow_to_Play");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHow_to_Play->menuAction());
        menuHow_to_Play->addAction(actionHow_to_Play);
        menuHow_to_Play->addAction(actionSources);
        menuHow_to_Play->addAction(actionCredits);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Explore London", nullptr));
        Help->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        actionHow_to_Play->setText(QCoreApplication::translate("MainWindow", "Gameplay Instructions", nullptr));
        actionSources->setText(QCoreApplication::translate("MainWindow", "Bibliography", nullptr));
        actionCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        plusLabel->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusLabel->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Badges", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Take a Quiz", nullptr));
        pushButton2_art_culture->setText(QString());
        pushButton3_crimes->setText(QString());
        pushButton1_bridges->setText(QString());
        pushButton5_religion->setText(QString());
        pushButton4_government->setText(QString());
        pushButton6_royal_family->setText(QString());
        bridgesQuizButton->setText(QCoreApplication::translate("MainWindow", "Bridges", nullptr));
        artsCultureQuizButton->setText(QCoreApplication::translate("MainWindow", "Arts and Culture", nullptr));
        crimesQuizButton->setText(QCoreApplication::translate("MainWindow", "Crimes", nullptr));
        governmentQuizButton->setText(QCoreApplication::translate("MainWindow", "Government", nullptr));
        religionQuizButton->setText(QCoreApplication::translate("MainWindow", "Religion", nullptr));
        royalFamQuizButton->setText(QCoreApplication::translate("MainWindow", "Royal Family", nullptr));
        menuHow_to_Play->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
