#ifndef CHARTCOLOUR_H
#define CHARTCOLOUR_H

#include <QVector>
#include <QString>

class chartcolour
{
public:
    chartcolour();
    ~chartcolour();
    QString getColour(int);
private:
    QVector<QString> colourSelect;
};

#endif // CHARTCOLOUR_H
