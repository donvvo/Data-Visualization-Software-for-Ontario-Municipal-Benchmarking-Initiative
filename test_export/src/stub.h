/*!
 * Author: Chuhan Qin, Group 6
 * Description: The Stub class provides data from 10 cities for the purpose of testing
 * The data is "Number of Residential Structural Fires with Losses per 1,000 Households (Urban)".
 * Date: October 25, 2013
 */

#ifndef STUB_H
#define STUB_H

#include <QVector>
#include <QString>

class Stub
{
public:

   Stub(); //! Constructor that contains data of the cities
   QVector<double> getData(QString city); //! Getter to get a city's data.


private:
   QVector<double> _Calgary; //! Stores data of Calgary.
   QVector<double> _Barrie; //! Stores data of Barrie.
   QVector<double> _Hamilton; //! Stores data of Hamilton.
   QVector<double> _London; //! Stores data of London.
   QVector<double> _Ottawa; //! Stores data of Ottawa.
   QVector<double> _ThunderBay; //! Stores data of Thunder Bay.
   QVector<double> _Toronto; //! Stores data of Toronto.
   QVector<double> _Windsor; //! Stores data of Windsor.
   QVector<double> _SudburyGreater; //! Stores data of Sudbury (Greater).
   QVector<double> _Winnipeg;//! Stores data of Winnipeg.
};

#endif // STUB_H

