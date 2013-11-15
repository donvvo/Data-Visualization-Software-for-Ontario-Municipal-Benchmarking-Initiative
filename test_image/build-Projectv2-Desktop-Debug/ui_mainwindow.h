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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *View;
    QGridLayout *gridLayout_2;
    QCustomPlot *customPlot;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QWidget *Settings;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_6;
    QLabel *label;
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
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *twoThousandNine;
    QCheckBox *twoThousandTen;
    QCheckBox *twoThousandEleven;
    QCheckBox *checkBox_2;
    QPushButton *button_export_to_image;
    QPushButton *button_get_graph;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 452);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        View = new QWidget();
        View->setObjectName(QStringLiteral("View"));
        gridLayout_2 = new QGridLayout(View);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        customPlot = new QCustomPlot(View);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout_2->addWidget(customPlot, 0, 0, 1, 1);

        tabWidget->addTab(View, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        Settings = new QWidget();
        Settings->setObjectName(QStringLiteral("Settings"));
        gridLayout_4 = new QGridLayout(Settings);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        sudbury = new QCheckBox(Settings);
        sudbury->setObjectName(QStringLiteral("sudbury"));

        gridLayout_6->addWidget(sudbury, 1, 0, 1, 1);

        windsor = new QCheckBox(Settings);
        windsor->setObjectName(QStringLiteral("windsor"));

        gridLayout_6->addWidget(windsor, 2, 0, 1, 1);

        barrie = new QCheckBox(Settings);
        barrie->setObjectName(QStringLiteral("barrie"));

        gridLayout_6->addWidget(barrie, 3, 0, 1, 1);

        ottawa = new QCheckBox(Settings);
        ottawa->setObjectName(QStringLiteral("ottawa"));

        gridLayout_6->addWidget(ottawa, 4, 0, 1, 1);

        winnipeg = new QCheckBox(Settings);
        winnipeg->setObjectName(QStringLiteral("winnipeg"));

        gridLayout_6->addWidget(winnipeg, 5, 0, 1, 1);

        calgary = new QCheckBox(Settings);
        calgary->setObjectName(QStringLiteral("calgary"));

        gridLayout_6->addWidget(calgary, 6, 0, 1, 1);

        hamilton = new QCheckBox(Settings);
        hamilton->setObjectName(QStringLiteral("hamilton"));

        gridLayout_6->addWidget(hamilton, 7, 0, 1, 1);

        london = new QCheckBox(Settings);
        london->setObjectName(QStringLiteral("london"));

        gridLayout_6->addWidget(london, 8, 0, 1, 1);

        toronto = new QCheckBox(Settings);
        toronto->setObjectName(QStringLiteral("toronto"));

        gridLayout_6->addWidget(toronto, 9, 0, 1, 1);

        thunderBay = new QCheckBox(Settings);
        thunderBay->setObjectName(QStringLiteral("thunderBay"));

        gridLayout_6->addWidget(thunderBay, 10, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 1, 0, 2, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        checkBox = new QCheckBox(Settings);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_5->addWidget(checkBox, 1, 0, 1, 1);

        twoThousandNine = new QCheckBox(Settings);
        twoThousandNine->setObjectName(QStringLiteral("twoThousandNine"));

        gridLayout_5->addWidget(twoThousandNine, 2, 0, 1, 1);

        twoThousandTen = new QCheckBox(Settings);
        twoThousandTen->setObjectName(QStringLiteral("twoThousandTen"));

        gridLayout_5->addWidget(twoThousandTen, 3, 0, 1, 1);

        twoThousandEleven = new QCheckBox(Settings);
        twoThousandEleven->setObjectName(QStringLiteral("twoThousandEleven"));

        gridLayout_5->addWidget(twoThousandEleven, 4, 0, 1, 1);

        checkBox_2 = new QCheckBox(Settings);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_5->addWidget(checkBox_2, 5, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_5, 1, 1, 2, 1);

        button_export_to_image = new QPushButton(Settings);
        button_export_to_image->setObjectName(QStringLiteral("button_export_to_image"));
        sizePolicy.setHeightForWidth(button_export_to_image->sizePolicy().hasHeightForWidth());
        button_export_to_image->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(button_export_to_image, 3, 3, 1, 1);

        button_get_graph = new QPushButton(Settings);
        button_get_graph->setObjectName(QStringLiteral("button_get_graph"));
        sizePolicy.setHeightForWidth(button_get_graph->sizePolicy().hasHeightForWidth());
        button_get_graph->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(button_get_graph, 3, 2, 1, 1);

        tabWidget->addTab(Settings, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

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
        label->setText(QApplication::translate("MainWindow", "Municipalities", 0));
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
        label_2->setText(QApplication::translate("MainWindow", "Years", 0));
        checkBox->setText(QApplication::translate("MainWindow", "2008", 0));
        twoThousandNine->setText(QApplication::translate("MainWindow", "2009", 0));
        twoThousandTen->setText(QApplication::translate("MainWindow", "2010", 0));
        twoThousandEleven->setText(QApplication::translate("MainWindow", "2011", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "2012", 0));
        button_export_to_image->setText(QApplication::translate("MainWindow", "Save Graph", 0));
        button_get_graph->setText(QApplication::translate("MainWindow", "Get Graph", 0));
        tabWidget->setTabText(tabWidget->indexOf(Settings), QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
