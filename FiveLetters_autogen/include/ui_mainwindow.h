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
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_31;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_52;
    QLineEdit *lineEdit_00;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_42;
    QLineEdit *lineEdit_51;
    QLineEdit *lineEdit_53;
    QLineEdit *lineEdit_54;
    QLineEdit *lineEdit_02;
    QLineEdit *lineEdit_32;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_01;
    QLineEdit *lineEdit_34;
    QLineEdit *lineEdit_40;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_04;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_03;
    QLineEdit *lineEdit_44;
    QLineEdit *lineEdit_50;
    QLineEdit *lineEdit_43;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_41;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_33;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(393, 690);
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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_2->addWidget(lineEdit_3);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setPointSize(24);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");
        lineEdit_31 = new QLineEdit(centralwidget);
        lineEdit_31->setObjectName("lineEdit_31");
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        lineEdit_31->setFont(font3);

        gridLayout->addWidget(lineEdit_31, 3, 1, 1, 1);

        lineEdit_20 = new QLineEdit(centralwidget);
        lineEdit_20->setObjectName("lineEdit_20");
        lineEdit_20->setFont(font3);

        gridLayout->addWidget(lineEdit_20, 2, 0, 1, 1);

        lineEdit_23 = new QLineEdit(centralwidget);
        lineEdit_23->setObjectName("lineEdit_23");
        lineEdit_23->setFont(font3);

        gridLayout->addWidget(lineEdit_23, 2, 3, 1, 1);

        lineEdit_52 = new QLineEdit(centralwidget);
        lineEdit_52->setObjectName("lineEdit_52");
        lineEdit_52->setFont(font3);

        gridLayout->addWidget(lineEdit_52, 5, 2, 1, 1);

        lineEdit_00 = new QLineEdit(centralwidget);
        lineEdit_00->setObjectName("lineEdit_00");
        lineEdit_00->setFont(font3);

        gridLayout->addWidget(lineEdit_00, 0, 0, 1, 1);

        lineEdit_30 = new QLineEdit(centralwidget);
        lineEdit_30->setObjectName("lineEdit_30");
        lineEdit_30->setFont(font3);

        gridLayout->addWidget(lineEdit_30, 3, 0, 1, 1);

        lineEdit_42 = new QLineEdit(centralwidget);
        lineEdit_42->setObjectName("lineEdit_42");
        lineEdit_42->setFont(font3);

        gridLayout->addWidget(lineEdit_42, 4, 2, 1, 1);

        lineEdit_51 = new QLineEdit(centralwidget);
        lineEdit_51->setObjectName("lineEdit_51");
        lineEdit_51->setFont(font3);

        gridLayout->addWidget(lineEdit_51, 5, 1, 1, 1);

        lineEdit_53 = new QLineEdit(centralwidget);
        lineEdit_53->setObjectName("lineEdit_53");
        lineEdit_53->setFont(font3);

        gridLayout->addWidget(lineEdit_53, 5, 3, 1, 1);

        lineEdit_54 = new QLineEdit(centralwidget);
        lineEdit_54->setObjectName("lineEdit_54");
        lineEdit_54->setFont(font3);

        gridLayout->addWidget(lineEdit_54, 5, 4, 1, 1);

        lineEdit_02 = new QLineEdit(centralwidget);
        lineEdit_02->setObjectName("lineEdit_02");
        lineEdit_02->setFont(font3);

        gridLayout->addWidget(lineEdit_02, 0, 2, 1, 1);

        lineEdit_32 = new QLineEdit(centralwidget);
        lineEdit_32->setObjectName("lineEdit_32");
        lineEdit_32->setFont(font3);

        gridLayout->addWidget(lineEdit_32, 3, 2, 1, 1);

        lineEdit_22 = new QLineEdit(centralwidget);
        lineEdit_22->setObjectName("lineEdit_22");
        lineEdit_22->setFont(font3);

        gridLayout->addWidget(lineEdit_22, 2, 2, 1, 1);

        lineEdit_01 = new QLineEdit(centralwidget);
        lineEdit_01->setObjectName("lineEdit_01");
        lineEdit_01->setFont(font3);

        gridLayout->addWidget(lineEdit_01, 0, 1, 1, 1);

        lineEdit_34 = new QLineEdit(centralwidget);
        lineEdit_34->setObjectName("lineEdit_34");
        lineEdit_34->setFont(font3);

        gridLayout->addWidget(lineEdit_34, 3, 4, 1, 1);

        lineEdit_40 = new QLineEdit(centralwidget);
        lineEdit_40->setObjectName("lineEdit_40");
        lineEdit_40->setFont(font3);

        gridLayout->addWidget(lineEdit_40, 4, 0, 1, 1);

        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setFont(font3);

        gridLayout->addWidget(lineEdit_12, 1, 2, 1, 1);

        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setFont(font3);

        gridLayout->addWidget(lineEdit_10, 1, 0, 1, 1);

        lineEdit_04 = new QLineEdit(centralwidget);
        lineEdit_04->setObjectName("lineEdit_04");
        lineEdit_04->setFont(font3);

        gridLayout->addWidget(lineEdit_04, 0, 4, 1, 1);

        lineEdit_21 = new QLineEdit(centralwidget);
        lineEdit_21->setObjectName("lineEdit_21");
        lineEdit_21->setFont(font3);

        gridLayout->addWidget(lineEdit_21, 2, 1, 1, 1);

        lineEdit_03 = new QLineEdit(centralwidget);
        lineEdit_03->setObjectName("lineEdit_03");
        lineEdit_03->setFont(font3);

        gridLayout->addWidget(lineEdit_03, 0, 3, 1, 1);

        lineEdit_44 = new QLineEdit(centralwidget);
        lineEdit_44->setObjectName("lineEdit_44");
        lineEdit_44->setFont(font3);

        gridLayout->addWidget(lineEdit_44, 4, 4, 1, 1);

        lineEdit_50 = new QLineEdit(centralwidget);
        lineEdit_50->setObjectName("lineEdit_50");
        lineEdit_50->setFont(font3);

        gridLayout->addWidget(lineEdit_50, 5, 0, 1, 1);

        lineEdit_43 = new QLineEdit(centralwidget);
        lineEdit_43->setObjectName("lineEdit_43");
        lineEdit_43->setFont(font3);

        gridLayout->addWidget(lineEdit_43, 4, 3, 1, 1);

        lineEdit_13 = new QLineEdit(centralwidget);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setFont(font3);

        gridLayout->addWidget(lineEdit_13, 1, 3, 1, 1);

        lineEdit_41 = new QLineEdit(centralwidget);
        lineEdit_41->setObjectName("lineEdit_41");
        lineEdit_41->setFont(font3);

        gridLayout->addWidget(lineEdit_41, 4, 1, 1, 1);

        lineEdit_24 = new QLineEdit(centralwidget);
        lineEdit_24->setObjectName("lineEdit_24");
        lineEdit_24->setFont(font3);

        gridLayout->addWidget(lineEdit_24, 2, 4, 1, 1);

        lineEdit_11 = new QLineEdit(centralwidget);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setFont(font3);

        gridLayout->addWidget(lineEdit_11, 1, 1, 1, 1);

        lineEdit_14 = new QLineEdit(centralwidget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setFont(font3);

        gridLayout->addWidget(lineEdit_14, 1, 4, 1, 1);

        lineEdit_33 = new QLineEdit(centralwidget);
        lineEdit_33->setObjectName("lineEdit_33");
        lineEdit_33->setFont(font3);

        gridLayout->addWidget(lineEdit_33, 3, 3, 1, 1);


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
        titleLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "- \320\261\321\203\320\272\320\262\320\260 \320\275\320\260 \321\201\320\262\320\276\321\221\320\274 \320\274\320\265\321\201\321\202\320\265", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "- \320\261\321\203\320\272\320\262\320\260 \320\275\320\265 \320\275\320\260 \321\201\320\262\320\276\321\221\320\274 \320\274\320\265\321\201\321\202\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "- \320\261\321\203\320\272\320\262\321\213 \320\275\320\265\321\202 \320\262 \321\201\320\273\320\276\320\262\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264\320\270\321\202\320\265 \320\261\321\203\320\272\320\262\321\213 \321\201 \320\272\320\273\320\260\320\262\320\270\320\260\321\202\321\203\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
