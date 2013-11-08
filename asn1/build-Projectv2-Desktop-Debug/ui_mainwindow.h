/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *View;
    QCustomPlot *customPlot;
    QWidget *tab;
    QTableView *tableView;
    QWidget *Settings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *sudbury;
    QCheckBox *windsor;
    QCheckBox *barrie;
    QCheckBox *ottawa;
    QCheckBox *winnipeg;
    QCheckBox *calgary;
    QCheckBox *hamilton;
    QCheckBox *london;
    QCheckBox *toronto;
    QCheckBox *thunderBay;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *twoThousandNine;
    QCheckBox *twoThousandTen;
    QCheckBox *twoThousandEleven;
    QCheckBox *checkBox_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *button_export_to_image;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 418);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 661, 421));
        View = new QWidget();
        View->setObjectName(QStringLiteral("View"));
        customPlot = new QCustomPlot(View);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(50, 20, 561, 351));
        tabWidget->addTab(View, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(170, 70, 256, 192));
        tabWidget->addTab(tab, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        verticalLayoutWidget = new QWidget(Settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 40, 181, 316));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sudbury = new QCheckBox(verticalLayoutWidget);
        sudbury->setObjectName(QStringLiteral("sudbury"));

        verticalLayout->addWidget(sudbury);

        windsor = new QCheckBox(verticalLayoutWidget);
        windsor->setObjectName(QStringLiteral("windsor"));

        verticalLayout->addWidget(windsor);

        barrie = new QCheckBox(verticalLayoutWidget);
        barrie->setObjectName(QStringLiteral("barrie"));

        verticalLayout->addWidget(barrie);

        ottawa = new QCheckBox(verticalLayoutWidget);
        ottawa->setObjectName(QStringLiteral("ottawa"));

        verticalLayout->addWidget(ottawa);

        winnipeg = new QCheckBox(verticalLayoutWidget);
        winnipeg->setObjectName(QStringLiteral("winnipeg"));

        verticalLayout->addWidget(winnipeg);

        calgary = new QCheckBox(verticalLayoutWidget);
        calgary->setObjectName(QStringLiteral("calgary"));

        verticalLayout->addWidget(calgary);

        hamilton = new QCheckBox(verticalLayoutWidget);
        hamilton->setObjectName(QStringLiteral("hamilton"));

        verticalLayout->addWidget(hamilton);

        london = new QCheckBox(verticalLayoutWidget);
        london->setObjectName(QStringLiteral("london"));

        verticalLayout->addWidget(london);

        toronto = new QCheckBox(verticalLayoutWidget);
        toronto->setObjectName(QStringLiteral("toronto"));

        verticalLayout->addWidget(toronto);

        thunderBay = new QCheckBox(verticalLayoutWidget);
        thunderBay->setObjectName(QStringLiteral("thunderBay"));

        verticalLayout->addWidget(thunderBay);

        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 161, 41));
        verticalLayoutWidget_2 = new QWidget(Settings);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 40, 160, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(verticalLayoutWidget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        twoThousandNine = new QCheckBox(verticalLayoutWidget_2);
        twoThousandNine->setObjectName(QStringLiteral("twoThousandNine"));

        verticalLayout_2->addWidget(twoThousandNine);

        twoThousandTen = new QCheckBox(verticalLayoutWidget_2);
        twoThousandTen->setObjectName(QStringLiteral("twoThousandTen"));

        verticalLayout_2->addWidget(twoThousandTen);

        twoThousandEleven = new QCheckBox(verticalLayoutWidget_2);
        twoThousandEleven->setObjectName(QStringLiteral("twoThousandEleven"));

        verticalLayout_2->addWidget(twoThousandEleven);

        checkBox_2 = new QCheckBox(verticalLayoutWidget_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, -10, 151, 51));
        pushButton = new QPushButton(Settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 290, 93, 29));
        button_export_to_image = new QPushButton(Settings);
        button_export_to_image->setObjectName(QStringLiteral("button_export_to_image"));
        button_export_to_image->setGeometry(QRect(470, 250, 93, 29));
        tabWidget->addTab(Settings, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tabWidget->setTabText(tabWidget->indexOf(View), QApplication::translate("MainWindow", "Chart", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Data", 0));
        sudbury->setText(QApplication::translate("MainWindow", "Sudbury (Greater)", 0));
        windsor->setText(QApplication::translate("MainWindow", "Windsor", 0));
        barrie->setText(QApplication::translate("MainWindow", "Barrie", 0));
        ottawa->setText(QApplication::translate("MainWindow", "Ottawa", 0));
        winnipeg->setText(QApplication::translate("MainWindow", "Winnipeg", 0));
        calgary->setText(QApplication::translate("MainWindow", "Calgary", 0));
        hamilton->setText(QApplication::translate("MainWindow", "Hamilton", 0));
        london->setText(QApplication::translate("MainWindow", "London", 0));
        toronto->setText(QApplication::translate("MainWindow", "Toronto", 0));
        thunderBay->setText(QApplication::translate("MainWindow", "Thunder Bay", 0));
        label->setText(QApplication::translate("MainWindow", "Municipalities", 0));
        checkBox->setText(QApplication::translate("MainWindow", "2008", 0));
        twoThousandNine->setText(QApplication::translate("MainWindow", "2009", 0));
        twoThousandTen->setText(QApplication::translate("MainWindow", "2010", 0));
        twoThousandEleven->setText(QApplication::translate("MainWindow", "2011", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "2012", 0));
        label_2->setText(QApplication::translate("MainWindow", "Years", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Get Graph", 0));
        button_export_to_image->setText(QApplication::translate("MainWindow", "Save Graph", 0));
        tabWidget->setTabText(tabWidget->indexOf(Settings), QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
