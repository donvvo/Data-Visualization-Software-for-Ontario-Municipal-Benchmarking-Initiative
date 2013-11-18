#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pixmap("../untitled/bg.png");
    //ui->label->setPixmap(pixmap);
    QIcon ButtonIcon(pixmap);
    ui->pB->setIcon(ButtonIcon);
    ui->pB->setIconSize(pixmap.rect().size());
    //ui->label->show();


}

MainWindow::~MainWindow()
{
    delete ui;
}
