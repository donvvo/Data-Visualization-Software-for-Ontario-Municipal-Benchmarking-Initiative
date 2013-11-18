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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *graphBtn;
    QPushButton *tableBtn;
    QStackedWidget *stackedWidget;
    QWidget *graph;
    QCustomPlot *customPlot;
    QWidget *table;
    QTableView *tableView;
    QWidget *settings;
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QCheckBox *checkBox;
    QCheckBox *twoThousandNine;
    QCheckBox *twoThousandTen;
    QCheckBox *twoThousandEleven;
    QCheckBox *checkBox_2;
    QPushButton *button_get_graph;
    QPushButton *button_export_to_image;
    QPushButton *settingsBtn;
    QPushButton *bg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 452);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        graphBtn = new QPushButton(centralWidget);
        graphBtn->setObjectName(QStringLiteral("graphBtn"));
        graphBtn->setGeometry(QRect(20, 20, 93, 29));
        tableBtn = new QPushButton(centralWidget);
        tableBtn->setObjectName(QStringLiteral("tableBtn"));
        tableBtn->setGeometry(QRect(120, 20, 81, 29));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 114, 643, 329));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        graph = new QWidget();
        graph->setObjectName(QStringLiteral("graph"));
        customPlot = new QCustomPlot(graph);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(0, -100, 621, 421));
        stackedWidget->addWidget(graph);
        table = new QWidget();
        table->setObjectName(QStringLiteral("table"));
        tableView = new QTableView(table);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 10, 643, 321));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stackedWidget->addWidget(table);
        settings = new QWidget();
        settings->setObjectName(QStringLiteral("settings"));
        layoutWidget = new QWidget(settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 213, 343));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        sudbury = new QCheckBox(layoutWidget);
        sudbury->setObjectName(QStringLiteral("sudbury"));

        gridLayout_6->addWidget(sudbury, 1, 0, 1, 1);

        windsor = new QCheckBox(layoutWidget);
        windsor->setObjectName(QStringLiteral("windsor"));

        gridLayout_6->addWidget(windsor, 2, 0, 1, 1);

        barrie = new QCheckBox(layoutWidget);
        barrie->setObjectName(QStringLiteral("barrie"));

        gridLayout_6->addWidget(barrie, 3, 0, 1, 1);

        ottawa = new QCheckBox(layoutWidget);
        ottawa->setObjectName(QStringLiteral("ottawa"));

        gridLayout_6->addWidget(ottawa, 4, 0, 1, 1);

        winnipeg = new QCheckBox(layoutWidget);
        winnipeg->setObjectName(QStringLiteral("winnipeg"));

        gridLayout_6->addWidget(winnipeg, 5, 0, 1, 1);

        calgary = new QCheckBox(layoutWidget);
        calgary->setObjectName(QStringLiteral("calgary"));

        gridLayout_6->addWidget(calgary, 6, 0, 1, 1);

        hamilton = new QCheckBox(layoutWidget);
        hamilton->setObjectName(QStringLiteral("hamilton"));

        gridLayout_6->addWidget(hamilton, 7, 0, 1, 1);

        london = new QCheckBox(layoutWidget);
        london->setObjectName(QStringLiteral("london"));

        gridLayout_6->addWidget(london, 8, 0, 1, 1);

        toronto = new QCheckBox(layoutWidget);
        toronto->setObjectName(QStringLiteral("toronto"));

        gridLayout_6->addWidget(toronto, 9, 0, 1, 1);

        thunderBay = new QCheckBox(layoutWidget);
        thunderBay->setObjectName(QStringLiteral("thunderBay"));

        gridLayout_6->addWidget(thunderBay, 10, 0, 1, 1);

        layoutWidget1 = new QWidget(settings);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(210, 0, 432, 184));
        gridLayout_5 = new QGridLayout(layoutWidget1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout_5->addWidget(checkBox, 1, 0, 1, 1);

        twoThousandNine = new QCheckBox(layoutWidget1);
        twoThousandNine->setObjectName(QStringLiteral("twoThousandNine"));

        gridLayout_5->addWidget(twoThousandNine, 2, 0, 1, 1);

        twoThousandTen = new QCheckBox(layoutWidget1);
        twoThousandTen->setObjectName(QStringLiteral("twoThousandTen"));

        gridLayout_5->addWidget(twoThousandTen, 3, 0, 1, 1);

        twoThousandEleven = new QCheckBox(layoutWidget1);
        twoThousandEleven->setObjectName(QStringLiteral("twoThousandEleven"));

        gridLayout_5->addWidget(twoThousandEleven, 4, 0, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout_5->addWidget(checkBox_2, 5, 0, 1, 1);

        button_get_graph = new QPushButton(settings);
        button_get_graph->setObjectName(QStringLiteral("button_get_graph"));
        button_get_graph->setGeometry(QRect(240, 200, 85, 29));
        sizePolicy.setHeightForWidth(button_get_graph->sizePolicy().hasHeightForWidth());
        button_get_graph->setSizePolicy(sizePolicy);
        button_export_to_image = new QPushButton(settings);
        button_export_to_image->setObjectName(QStringLiteral("button_export_to_image"));
        button_export_to_image->setGeometry(QRect(350, 200, 92, 29));
        sizePolicy.setHeightForWidth(button_export_to_image->sizePolicy().hasHeightForWidth());
        button_export_to_image->setSizePolicy(sizePolicy);
        stackedWidget->addWidget(settings);
        settingsBtn = new QPushButton(centralWidget);
        settingsBtn->setObjectName(QStringLiteral("settingsBtn"));
        settingsBtn->setGeometry(QRect(210, 20, 93, 29));
        bg = new QPushButton(centralWidget);
        bg->setObjectName(QStringLiteral("bg"));
        bg->setGeometry(QRect(0, 0, 661, 452));
        bg->setIconSize(QSize(661, 452));
        bg->setFlat(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        graphBtn->setText(QApplication::translate("MainWindow", "Graph", 0));
        tableBtn->setText(QApplication::translate("MainWindow", "Table", 0));
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
        button_get_graph->setText(QApplication::translate("MainWindow", "Get Graph", 0));
        button_export_to_image->setText(QApplication::translate("MainWindow", "Save Graph", 0));
        settingsBtn->setText(QApplication::translate("MainWindow", "Settings", 0));
        bg->setText(QApplication::translate("MainWindow", "bg", 0));
        bg->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
