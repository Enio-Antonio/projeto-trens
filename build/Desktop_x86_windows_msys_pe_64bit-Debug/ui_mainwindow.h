/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho4;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QLabel *label_trem6;
    QSlider *slider_trem1;
    QSlider *slider_trem2;
    QSlider *slider_trem3;
    QSlider *slider_trem4;
    QSlider *slider_trem5;
    QSlider *slider_trem6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_trilho3_2;
    QLabel *label_trilho4_3;
    QLabel *label_trilho4_4;
    QLabel *label_trilho4_5;
    QLabel *label_trilho2_3;
    QLabel *label_trilho1_3;
    QLabel *label_trilho4_6;
    QLabel *label_trilho4_2;
    QLabel *label_trilho2_4;
    QLabel *label_trilho4_7;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(967, 544);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: whit;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName("label_trem1");
        label_trem1->setGeometry(QRect(60, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName("label_trilho1");
        label_trilho1->setGeometry(QRect(80, 30, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName("label_trilho2");
        label_trilho2->setGeometry(QRect(80, 170, 250, 17));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName("label_trilho4");
        label_trilho4->setGeometry(QRect(60, 30, 21, 161));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName("label_trilho1_2");
        label_trilho1_2->setGeometry(QRect(350, 30, 250, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName("label_trilho2_2");
        label_trilho2_2->setGeometry(QRect(350, 220, 250, 17));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName("label_trem2");
        label_trem2->setGeometry(QRect(400, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: orange}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName("label_trem3");
        label_trem3->setGeometry(QRect(60, 220, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("background-color: green;"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName("label_trem4");
        label_trem4->setGeometry(QRect(400, 330, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("background-color: cyan;"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName("label_trem5");
        label_trem5->setGeometry(QRect(700, 30, 21, 17));
        label_trem5->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_trem6 = new QLabel(centralWidget);
        label_trem6->setObjectName("label_trem6");
        label_trem6->setGeometry(QRect(700, 330, 21, 17));
        label_trem6->setStyleSheet(QString::fromUtf8("background-color: purple;"));
        slider_trem1 = new QSlider(centralWidget);
        slider_trem1->setObjectName("slider_trem1");
        slider_trem1->setGeometry(QRect(50, 350, 160, 16));
        slider_trem1->setMaximum(200);
        slider_trem1->setOrientation(Qt::Orientation::Horizontal);
        slider_trem2 = new QSlider(centralWidget);
        slider_trem2->setObjectName("slider_trem2");
        slider_trem2->setGeometry(QRect(50, 370, 160, 16));
        slider_trem2->setMaximum(200);
        slider_trem2->setOrientation(Qt::Orientation::Horizontal);
        slider_trem3 = new QSlider(centralWidget);
        slider_trem3->setObjectName("slider_trem3");
        slider_trem3->setGeometry(QRect(50, 390, 160, 16));
        slider_trem3->setMaximum(200);
        slider_trem3->setOrientation(Qt::Orientation::Horizontal);
        slider_trem4 = new QSlider(centralWidget);
        slider_trem4->setObjectName("slider_trem4");
        slider_trem4->setGeometry(QRect(50, 410, 160, 16));
        slider_trem4->setMaximum(200);
        slider_trem4->setOrientation(Qt::Orientation::Horizontal);
        slider_trem5 = new QSlider(centralWidget);
        slider_trem5->setObjectName("slider_trem5");
        slider_trem5->setGeometry(QRect(50, 430, 160, 16));
        slider_trem5->setMaximum(200);
        slider_trem5->setOrientation(Qt::Orientation::Horizontal);
        slider_trem6 = new QSlider(centralWidget);
        slider_trem6->setObjectName("slider_trem6");
        slider_trem6->setGeometry(QRect(50, 450, 160, 16));
        slider_trem6->setMaximum(200);
        slider_trem6->setOrientation(Qt::Orientation::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 350, 49, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 370, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 390, 49, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 410, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 430, 49, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 450, 49, 16));
        label_6->setStyleSheet(QString::fromUtf8("background-color: blue;"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 330, 250, 17));
        label_7->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName("label_trilho3_2");
        label_trilho3_2->setGeometry(QRect(600, 190, 21, 157));
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName("label_trilho4_3");
        label_trilho4_3->setGeometry(QRect(60, 190, 21, 157));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName("label_trilho4_4");
        label_trilho4_4->setGeometry(QRect(330, 30, 21, 161));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName("label_trilho4_5");
        label_trilho4_5->setGeometry(QRect(330, 190, 21, 157));
        label_trilho4_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName("label_trilho2_3");
        label_trilho2_3->setGeometry(QRect(350, 330, 250, 17));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName("label_trilho1_3");
        label_trilho1_3->setGeometry(QRect(620, 30, 250, 17));
        label_trilho1_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_6 = new QLabel(centralWidget);
        label_trilho4_6->setObjectName("label_trilho4_6");
        label_trilho4_6->setGeometry(QRect(600, 30, 21, 161));
        label_trilho4_6->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName("label_trilho4_2");
        label_trilho4_2->setGeometry(QRect(870, 30, 21, 161));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName("label_trilho2_4");
        label_trilho2_4->setGeometry(QRect(620, 170, 250, 17));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_7 = new QLabel(centralWidget);
        label_trilho4_7->setObjectName("label_trilho4_7");
        label_trilho4_7->setGeometry(QRect(870, 190, 21, 157));
        label_trilho4_7->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(620, 330, 250, 17));
        label_8->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho4->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        slider_trem1->raise();
        slider_trem2->raise();
        slider_trem3->raise();
        slider_trem4->raise();
        slider_trem5->raise();
        slider_trem6->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_trilho3_2->raise();
        label_trilho4_3->raise();
        label_trilho4_4->raise();
        label_trilho4_5->raise();
        label_trilho2_3->raise();
        label_trilho1_3->raise();
        label_trilho4_6->raise();
        label_trilho4_2->raise();
        label_trilho2_4->raise();
        label_trilho4_7->raise();
        label_8->raise();
        label_trem3->raise();
        label_trem1->raise();
        label_trem4->raise();
        label_trem5->raise();
        label_trem6->raise();
        label_trem2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 967, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho4->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        label_trem3->setText(QCoreApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "T4", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "T5", nullptr));
        label_trem6->setText(QCoreApplication::translate("MainWindow", "T6", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Trem 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Trem 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Trem 3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Trem 4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Trem 5", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Trem 6", nullptr));
        label_7->setText(QString());
        label_trilho3_2->setText(QString());
        label_trilho4_3->setText(QString());
        label_trilho4_4->setText(QString());
        label_trilho4_5->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho1_3->setText(QString());
        label_trilho4_6->setText(QString());
        label_trilho4_2->setText(QString());
        label_trilho2_4->setText(QString());
        label_trilho4_7->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
