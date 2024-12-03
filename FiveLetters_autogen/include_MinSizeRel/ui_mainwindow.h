/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_00;
    QLineEdit *lineEdit_01;
    QLineEdit *lineEdit_02;
    QLineEdit *lineEdit_03;
    QLineEdit *lineEdit_04;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_32;
    QLineEdit *lineEdit_33;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_40;
    QLineEdit *lineEdit_41;
    QLineEdit *lineEdit_42;
    QLineEdit *lineEdit_43;
    QLineEdit *lineEdit_44;
    QLineEdit *lineEdit_50;
    QLineEdit *lineEdit_51;
    QLineEdit *lineEdit_52;
    QLineEdit *lineEdit_53;
    QLineEdit *lineEdit_54;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(393, 852);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setMinimumSize(QSize(0, 20));
        titleLabel->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter);
        titleLabel->setMargin(5);

        verticalLayout->addWidget(titleLabel);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");
        lineEdit_00 = new QLineEdit(centralwidget);
        lineEdit_00->setObjectName("lineEdit_00");

        gridLayout->addWidget(lineEdit_00, 0, 0, 1, 1);

        lineEdit_01 = new QLineEdit(centralwidget);
        lineEdit_01->setObjectName("lineEdit_01");

        gridLayout->addWidget(lineEdit_01, 0, 1, 1, 1);

        lineEdit_02 = new QLineEdit(centralwidget);
        lineEdit_02->setObjectName("lineEdit_02");

        gridLayout->addWidget(lineEdit_02, 0, 2, 1, 1);

        lineEdit_03 = new QLineEdit(centralwidget);
        lineEdit_03->setObjectName("lineEdit_03");

        gridLayout->addWidget(lineEdit_03, 0, 3, 1, 1);

        lineEdit_04 = new QLineEdit(centralwidget);
        lineEdit_04->setObjectName("lineEdit_04");

        gridLayout->addWidget(lineEdit_04, 0, 4, 1, 1);

        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout->addWidget(lineEdit_10, 1, 0, 1, 1);

        lineEdit_11 = new QLineEdit(centralwidget);
        lineEdit_11->setObjectName("lineEdit_11");

        gridLayout->addWidget(lineEdit_11, 1, 1, 1, 1);

        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName("lineEdit_12");

        gridLayout->addWidget(lineEdit_12, 1, 2, 1, 1);

        lineEdit_13 = new QLineEdit(centralwidget);
        lineEdit_13->setObjectName("lineEdit_13");

        gridLayout->addWidget(lineEdit_13, 1, 3, 1, 1);

        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName("lineEdit_14");

        gridLayout->addWidget(lineEdit_14, 1, 4, 1, 1);

        lineEdit_20 = new QLineEdit(centralwidget);
        lineEdit_20->setObjectName("lineEdit_20");

        gridLayout->addWidget(lineEdit_20, 2, 0, 1, 1);

        lineEdit_21 = new QLineEdit(centralwidget);
        lineEdit_21->setObjectName("lineEdit_21");

        gridLayout->addWidget(lineEdit_21, 2, 1, 1, 1);

        lineEdit_22 = new QLineEdit(centralwidget);
        lineEdit_22->setObjectName("lineEdit_22");

        gridLayout->addWidget(lineEdit_22, 2, 2, 1, 1);

        lineEdit_23 = new QLineEdit(centralwidget);
        lineEdit_23->setObjectName("lineEdit_23");

        gridLayout->addWidget(lineEdit_23, 2, 3, 1, 1);

        lineEdit_24 = new QLineEdit(centralwidget);
        lineEdit_24->setObjectName("lineEdit_24");

        gridLayout->addWidget(lineEdit_24, 2, 4, 1, 1);

        lineEdit_30 = new QLineEdit(centralwidget);
        lineEdit_30->setObjectName("lineEdit_30");

        gridLayout->addWidget(lineEdit_30, 3, 0, 1, 1);

        lineEdit_31 = new QLineEdit(centralwidget);
        lineEdit_31->setObjectName("lineEdit_31");

        gridLayout->addWidget(lineEdit_31, 3, 1, 1, 1);

        lineEdit_32 = new QLineEdit(centralwidget);
        lineEdit_32->setObjectName("lineEdit_32");

        gridLayout->addWidget(lineEdit_32, 3, 2, 1, 1);

        lineEdit_33 = new QLineEdit(centralwidget);
        lineEdit_33->setObjectName("lineEdit_33");

        gridLayout->addWidget(lineEdit_33, 3, 3, 1, 1);

        lineEdit_34 = new QLineEdit(centralwidget);
        lineEdit_34->setObjectName("lineEdit_34");

        gridLayout->addWidget(lineEdit_34, 3, 4, 1, 1);

        lineEdit_40 = new QLineEdit(centralwidget);
        lineEdit_40->setObjectName("lineEdit_40");

        gridLayout->addWidget(lineEdit_40, 4, 0, 1, 1);

        lineEdit_41 = new QLineEdit(centralwidget);
        lineEdit_41->setObjectName("lineEdit_41");

        gridLayout->addWidget(lineEdit_41, 4, 1, 1, 1);

        lineEdit_42 = new QLineEdit(centralwidget);
        lineEdit_42->setObjectName("lineEdit_42");

        gridLayout->addWidget(lineEdit_42, 4, 2, 1, 1);

        lineEdit_43 = new QLineEdit(centralwidget);
        lineEdit_43->setObjectName("lineEdit_43");

        gridLayout->addWidget(lineEdit_43, 4, 3, 1, 1);

        lineEdit_44 = new QLineEdit(centralwidget);
        lineEdit_44->setObjectName("lineEdit_44");

        gridLayout->addWidget(lineEdit_44, 4, 4, 1, 1);

        lineEdit_50 = new QLineEdit(centralwidget);
        lineEdit_50->setObjectName("lineEdit_50");

        gridLayout->addWidget(lineEdit_50, 5, 0, 1, 1);

        lineEdit_51 = new QLineEdit(centralwidget);
        lineEdit_51->setObjectName("lineEdit_51");

        gridLayout->addWidget(lineEdit_51, 5, 1, 1, 1);

        lineEdit_52 = new QLineEdit(centralwidget);
        lineEdit_52->setObjectName("lineEdit_52");

        gridLayout->addWidget(lineEdit_52, 5, 2, 1, 1);

        lineEdit_53 = new QLineEdit(centralwidget);
        lineEdit_53->setObjectName("lineEdit_53");

        gridLayout->addWidget(lineEdit_53, 5, 3, 1, 1);

        lineEdit_54 = new QLineEdit(centralwidget);
        lineEdit_54->setObjectName("lineEdit_54");

        gridLayout->addWidget(lineEdit_54, 5, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 393, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "5 \320\221\320\243\320\232\320\222", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "5 \320\221\320\243\320\232\320\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
