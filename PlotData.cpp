#include "PlotData.h"

void Plot_Data :: generate(const Linear_Equation& E, float startX, float endX, float stepCount){
    xValues.clear();/* clears old points */               
    yValues.clear();  

    double dx = (endX - startX) / static_cast<double>(stepCount);
    for (int i = 0; i <= stepCount; i++)
    {
        double x = startX + i*dx;
        xValues.push_back(x); // add x to vector
        yValues.push_back(E.calculation_of_y(x)); // add y to vector
    }
}

//Define X
const vector <double>& Plot_Data:: getX() const{
    return xValues;
}
//Define Y
const vector <double>& Plot_Data:: getY() const{
    return yValues;
}
