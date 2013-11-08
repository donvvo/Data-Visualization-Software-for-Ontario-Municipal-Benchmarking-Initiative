/*!
 * Authors: Vietca Vo, Fraser Filice, Chuhan Qin, Stephan De Jegar, Sohrab Dolatabadi, Group 6
 * Description: This is the main window which is responsible for creating the graph,
 * data passed to main window through the stub and are used for plotting
 * Date: October 25, 2013
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include "stub.h"

/*!
 * Creating "Get Graph" button which will generate the graph once pressed
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->button_get_graph, SIGNAL(clicked(bool)), this, SLOT(slot_get_graph(bool)));
    QObject::connect(ui->button_export_to_image,SIGNAL(clicked(bool)), this, SLOT(slot_save_to_image()));



}

MainWindow::~MainWindow()
{
    delete ui;
}



/*!
 * Function: slot_get_graph
 * Description: When "Get Graph" is clicked, this function is responsible for generating the graph based on the data passed,
 * a full description of each part is given below
 * @param bool check when it is check
 */
void MainWindow::slot_get_graph(bool)
{


    Stub *stub = new Stub(); //! stub contains data for testing purpose.

    //! This is the variable for bar width; the value will be calculated and scaled accordingly, depending on how
    //! many checkboxes were selected
    double barWidth = 0;
    double i = 0;  //! loop index; counts how many checkboxes where checked
    int barsAdded = 0;


    //! Creating the legend box
    ui -> customPlot -> legend -> clearItems();
    ui -> customPlot -> axisRect()->insetLayout()->setInsetAlignment(0,Qt::AlignTop|Qt::AlignRight);
    ui -> customPlot -> legend -> setVisible(true);
    ui->customPlot->clearPlottables(); //! clear the graph

    //! Set graph interval
    ui->customPlot->xAxis->setAutoTickStep(0);
    ui->customPlot->xAxis->setTicks(1);
    ui->customPlot->xAxis->setTickStep(1.0);
    ui->customPlot->xAxis->setSubTickCount(0);

    chartcolour *colourSelect = new chartcolour();

    ui->customPlot->legend->clearItems();       //!Clears the existing data from the legend
    ui->customPlot->axisRect()->setAutoMargins(QCP::msLeft | QCP::msTop | QCP::msBottom);
    ui->customPlot->axisRect()->setMargins(QMargins(0,0,150,0));
    ui->customPlot->axisRect()->insetLayout()->setInsetPlacement(0, QCPLayoutInset::ipFree);
    ui->customPlot->axisRect()->insetLayout()->setInsetRect(0, QRectF(1.1,0,0.1,0.1));



    //! Scaling the bar width based on the number of cities checked
        if (ui->barrie->isChecked()) {
            ++i;
        }
        if (ui->calgary->isChecked()) {
            ++i;
        }
        if (ui->hamilton->isChecked()) {
            ++i;
        }
        if (ui->london->isChecked()) {
            ++i;
        }
        if (ui->ottawa->isChecked()) {
            ++i;
        }
        if (ui->sudbury->isChecked()) {
            ++i;
        }
        if (ui->thunderBay->isChecked()) {
            ++i;
        }
        if (ui->toronto->isChecked()) {
            ++i;
        }

        if (ui->windsor->isChecked()) {
            ++i;
        }
        if (ui->winnipeg->isChecked()) {
            ++i;
        }


    //! Calculating the new bar width
    double totalWidth = 0.8;
    barWidth = totalWidth / i;
    double setBack = totalWidth/2;
    double offset = 0;


    //! Plot data and create a bar graph for Barrie if this city is selected
    if(ui->barrie->isChecked()) {   //! if barrie is checked
            QCPBars *myBars = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars->setWidth(barWidth);
            myBars->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars->setName("Barrie");

            ui->customPlot->addPlottable(myBars);
            //! Barrie data
            QVector<double> barrieDatatemp = stub->getData("Barrie");
            QVector<double> barrieData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                barrieData << barrieDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                barrieData << barrieDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                barrieData << barrieDatatemp.at(2);
            }
            //!valueYears << 2009-setBack+offset << 2010-setBack+offset<< 2011-setBack+offset;
            ++barsAdded;


            myBars->setData(valueYears, barrieData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }


        //! Plot data and create a bar graph for Calgary if this city is selected
        if (ui->calgary->isChecked()) {
            //! This is for Calgary
            QCPBars *myBars2 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars2->setWidth(barWidth);
            myBars2->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));


            ui->customPlot->addPlottable(myBars2);
            //! now we can modify properties of myBars
            myBars2->setName("Calgary");

            //! Calgary Data
            QVector<double> calgaryDatatemp = stub->getData("Calgary");
            QVector<double> calgaryData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                calgaryData << calgaryDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                calgaryData << calgaryDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                calgaryData << calgaryDatatemp.at(2);
            }

           //! valueYears2 << 2009-setBack+offset << 2010-setBack+offset<< 2011-setBack+offset;
            //!2008.60+barWidth*barsAdded << 2009.60+barWidth*barsAdded << 2010.60+barWidth*barsAdded;
            ++barsAdded;

            myBars2->setData(valueYears, calgaryData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }

        //!Plot data and create a bar graph for London if this city is selected
        if (ui->london->isChecked()) {
            QCPBars *myBars3 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars3->setWidth(barWidth);
            myBars3->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars3->setName("London");

            ui->customPlot->addPlottable(myBars3);
            //! London data
            QVector<double> londonDatatemp = stub->getData("London");
            QVector<double> londonData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                londonData << londonDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                londonData << londonDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                londonData << londonDatatemp.at(2);
            }

           //! valueYears << 2009-setBack+offset << 2010-setBack+offset<< 2011-setBack+offset;
            ++barsAdded;


            myBars3->setData(valueYears, londonData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();


        }


        //!Plot data and create a bar graph for Hamilton if this city is selected
        if (ui->hamilton->isChecked()) {
            QCPBars *myBars4 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars4->setWidth(barWidth);
            myBars4->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars4->setName("Hamilton");

            ui->customPlot->addPlottable(myBars4);
            //! Hamilton data
            QVector<double> hamiltonDatatemp = stub->getData("Hamilton");
            QVector<double> hamiltonData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                hamiltonData << hamiltonDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                hamiltonData << hamiltonDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                hamiltonData << hamiltonDatatemp.at(2);
            }

            ++barsAdded;


            myBars4->setData(valueYears, hamiltonData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();

        }

        //! Plot data and create a bar graph for Ottawa if this city is selected
        if (ui->ottawa->isChecked()) {
            QCPBars *myBars5 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars5->setWidth(barWidth);
            myBars5->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars5->setName("Ottawa");

            ui->customPlot->addPlottable(myBars5);
            //! Ottawa data
            QVector<double> ottawaDatatemp = stub->getData("Ottawa");
            QVector<double> ottawaData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                ottawaData << ottawaDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                ottawaData << ottawaDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                ottawaData << ottawaDatatemp.at(2);
            }

            ++barsAdded;


            myBars5->setData(valueYears, ottawaData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();

        }

        //! Plot data and create a bar graph for Sudbury (Greater) if this city is selected
        if (ui->sudbury->isChecked()) {
            QCPBars *myBars6 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars6->setWidth(barWidth);
            myBars6->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars6->setName("Sudbury");

            ui->customPlot->addPlottable(myBars6);
            //! Sudbury data
            QVector<double> sudburyDatatemp = stub->getData("Sudbury (Greater)");
            QVector<double> sudburyData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                sudburyData << sudburyDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                sudburyData << sudburyDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                sudburyData << sudburyDatatemp.at(2);
            }


            ++barsAdded;


            myBars6->setData(valueYears, sudburyData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();

        }


        //! Plot data and create a bar graph for Thunder Bay if this city is selected
        if (ui->thunderBay->isChecked()) {
            QCPBars *myBars7 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars7->setWidth(barWidth);
            myBars7->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars7->setName("Thunder Bay");

            ui->customPlot->addPlottable(myBars7);
            //! Thunder Bay data
            QVector<double> thunderDatatemp = stub->getData("Thunder Bay");
            QVector<double> thunderData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                thunderData << thunderDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                thunderData << thunderDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                thunderData << thunderDatatemp.at(2);
            }

            ++barsAdded;


            myBars7->setData(valueYears, thunderData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }

        //! Plot data and create a bar graph for Toronto if this city is selected
        if (ui->toronto->isChecked()) {
            QCPBars *myBars8 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars8->setWidth(barWidth);
            myBars8->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars8->setName("Toronto");

            ui->customPlot->addPlottable(myBars8);
            //! Sudbury data
            QVector<double> torontoDatatest = stub->getData("Toronto");
            QVector<double> torontoData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                torontoData << torontoDatatest.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                torontoData << torontoDatatest.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                torontoData << torontoDatatest.at(2);
            }
            ++barsAdded;


            myBars8->setData(valueYears, torontoData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }


        //! Plot data and create a bar graph for Winnipeg if this city is selected
        if (ui->winnipeg->isChecked()) {
            QCPBars *myBars9 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars9->setWidth(barWidth);
            myBars9->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars9->setName("Winnipeg");

            ui->customPlot->addPlottable(myBars9);
            //! Sudbury data
            QVector<double> winnipegDatatemp = stub->getData("Winnipeg");
            QVector<double> winnipegData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                winnipegData << winnipegDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                winnipegData << winnipegDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                winnipegData << winnipegDatatemp.at(2);
            }

            ++barsAdded;


            myBars9->setData(valueYears, winnipegData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }

        //! Plot data and create a bar graph for Windsor if this city is selected
        if (ui->windsor->isChecked()) {
            QCPBars *myBars10 = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
            myBars10->setWidth(barWidth);
            myBars10->setBrush(QBrush(QColor(colourSelect->getColour(barsAdded))));
            myBars10->setName("Windor");

            ui->customPlot->addPlottable(myBars10);
            //! Sudbury data
            QVector<double> windsorDatatemp = stub->getData("Windsor");
            QVector<double> windsorData;
            QVector<double> valueYears;

            offset = (barWidth*barsAdded)+(barWidth/2);

            /*!
                Checks which years are checked.  Plots the years selected, and scales the graph accordingly.
              */
            if(ui->twoThousandNine->isChecked())
            {
                valueYears << 2009-setBack+offset;
                windsorData << windsorDatatemp.at(0);
            }
            if(ui->twoThousandTen->isChecked())
            {
                valueYears << 2010-setBack+offset;
                windsorData << windsorDatatemp.at(1);
            }
            if(ui->twoThousandEleven->isChecked())
            {
                valueYears << 2011-setBack+offset;
                windsorData << windsorDatatemp.at(2);
            }

            ++barsAdded;


            myBars10->setData(valueYears, windsorData);

            ui->customPlot->rescaleAxes();
            ui->customPlot->replot();
        }
}

void MainWindow::slot_save_to_image(){
    QString saveFilename = QFileDialog::getSaveFileName(this, "Save as", "Choose a filename", "PNG(*.png);; TIFF(*.tiff *.tif);; JPEG(*.jpg *.jpeg)");

    QString saveExtension = "PNG";
    int pos = saveFilename.lastIndexOf('.');
    if (pos >= 0)
        saveExtension = saveFilename.mid(pos + 1);

    if(!QPixmap::grabWidget(ui->View).save(saveFilename, qPrintable(saveExtension)))
    {
        // since you have a widget, just use grabWidget() here. winId() would possibly have
        // portability issues on other platforms.  qPrintable(saveExtension) is effectively
        // the same as saveExtension.toLocal8Bit().constData()

        QMessageBox::warning(this, "File could not be saved", "ok", QMessageBox::Ok);
    }
}

 void MainWindow::on_MainWindow_customContextMenuRequested(const QPoint &pos){}
