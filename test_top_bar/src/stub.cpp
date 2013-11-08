/*!
 * Author: Chuhan Qin, Group 6
 * Description: The Stub class provides data from 10 cities for the purpose of testing.
 * The data is "Number of Residential Structural Fires with Losses per 1,000 Households (Urban)".
 * Date: October 25, 2013
 */

#include "stub.h"


/*!
 * Function: Constructor.
 * Description: initializes 10 cities for testing in format of double vector.
 *              Data of Years 2009, 2010, 2011 respectively.
 */
Stub::Stub()
{
     _Calgary << 0.630 << 0.594 << 0.630; //! Data of 2009, 2010, 2011
     _Barrie << 0.843 << 0.780 << 0.843; //! Data of 2009, 2010, 2011
     _Hamilton << 0.661 << 0.984 << 0.661; //! Data of 2009, 2010, 2011
     _London << 1.033 << 1.073 << 1.033; //! Data of 2009, 2010, 2011
     _Ottawa << 0.841 << 0.932 << 0.841; //! Data of 2009, 2010, 2011
     _ThunderBay << 1.797 << 1.475 << 1.797; //! Data of 2009, 2010, 2011
     _Toronto << 0.901 << 0.953 << 0.901; //! Data of 2009, 2010, 2011
     _Windsor << 1.381 << 1.640 << 1.381; //! Data of 2009, 2010, 2011
     _SudburyGreater << 1.312 << 1.378 << 1.312; //! Data of 2009, 2010, 2011
     _Winnipeg << 1.666 << 0.0 << 1.666; //! Data of 2009, 2010, 2011
}


/*!
 * Function: getData
 * Description: gets data of a city based on the parameter and returns the data in format of double vector.
 * Parameter: QString city. Takes a string of a city's name.
 * Return: one of the double vectors stored in the Stub object.
 */
QVector<double> Stub::getData(QString city){
    if (QString::compare(city, "Calgary", Qt::CaseInsensitive) == 0) //! If the parameter is Calgary, returns data of Calgary.
        return _Calgary;
    else if (QString::compare(city, "Barrie", Qt::CaseInsensitive) == 0) //! If the parameter is Barrie, returns data of Barrie.
        return _Barrie;
    else if (QString::compare(city, "London", Qt::CaseInsensitive) == 0) //! If the parameter is London, returns data of London.
        return _London;
    else if (QString::compare(city, "Toronto", Qt::CaseInsensitive) == 0) //! If the parameter is Toronto, returns data of Toronto.
        return _Toronto;
    else if (QString::compare(city, "Thunder Bay", Qt::CaseInsensitive) == 0) //! If the parameter is Thunder Bay, returns data of Thunder Bay.
        return _ThunderBay;
    else if (QString::compare(city, "Winnipeg", Qt::CaseInsensitive) == 0) //! If the parameter is Winnipeg, returns data of Winnipeg.
        return _Winnipeg;
    else if (QString::compare(city, "Sudbury (Greater)", Qt::CaseInsensitive) == 0) //! If the parameter is Sudbury (Greater), returns data of Sudbury (Greater).
        return _SudburyGreater;
    else if (QString::compare(city, "Windsor", Qt::CaseInsensitive) == 0) //! If the parameter is Windsor, returns data of Windsor.
        return _Windsor;
    else if (QString::compare(city, "Hamilton", Qt::CaseInsensitive) == 0) //! If the parameter is Hamilton, returns data of Hamilton.
        return _Hamilton;
    else if (QString::compare(city, "Ottawa", Qt::CaseInsensitive) == 0) //! If the parameter is Ottawa, returns data of Ottawa.
        return _Ottawa;
}
