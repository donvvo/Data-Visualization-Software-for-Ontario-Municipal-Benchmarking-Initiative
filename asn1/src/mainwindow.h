/*!
 * Authors: Vietca Vo, Fraser Filice, Chuhan Qin, Stephan De Jegar, Sohrab Dolatabadi, Group 6
 * Description: This is the main window which is responsible for creating the graph,
 * data passed to main window through the stub and are used for plotting
 * Date: October 25, 2013
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qcustomplot.h"
#include "stub.h"
#include "QFileDialog"
#include "QMessageBox"
#include "chartcolor.h"

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


private slots:
    //! When "Get Graph" button is clicked, this slot is triggered.
    void slot_get_graph(bool);

    void on_MainWindow_customContextMenuRequested(const QPoint &pos);

    void slot_save_to_image();

    void on_graphBtn_clicked();

    void on_tableBtn_clicked();

    void on_settingsBtn_clicked();

<<<<<<< HEAD
    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_lineGraphBtn_clicked();
=======
    void slot_welcome_disappear();
>>>>>>> b909f1976d5310f1e4e5aa1886a724c661b68586

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
