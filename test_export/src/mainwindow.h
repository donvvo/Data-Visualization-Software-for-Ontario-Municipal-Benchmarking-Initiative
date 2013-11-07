/*!
 * Authors: Vietca Vo, Fraser Filice, Chuhan Qin, Stephan De Jegar, Sohrab Dolatabadi, Group 6
 * Description: This is the main window which is responsible for creating the graph,
 * data passed to main window through the stub and are used for plotting
 * Date: October 25, 2013
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"qcustomplot.h"
#include "stub.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //! When "Get Graph" button is clicked, on_pushButton_clicked calls this method
    void createGraph();


private slots:
    //! When "Get Graph" button is clicked, this slot is triggered.
    void on_pushButton_clicked();

    void on_MainWindow_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
