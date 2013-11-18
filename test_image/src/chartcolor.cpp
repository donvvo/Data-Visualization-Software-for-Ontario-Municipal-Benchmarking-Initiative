#include "chartcolor.h"

chartcolour::chartcolour()
{
    //! Set a color for each city based on the order of the cities in the list
    colourSelect.append("light blue");
    colourSelect.append("light yellow");
    colourSelect.append("purple");
    colourSelect.append("light green");
    colourSelect.append("red");
    colourSelect.append("orange");
    colourSelect.append("green");
    colourSelect.append("pink");
    colourSelect.append("grey");
    colourSelect.append("blue");
}

QString chartcolour::getColour(int i){
    return colourSelect.at(i);
}


