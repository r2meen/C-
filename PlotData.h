#ifndef PLOTDATA_H // used to stop the repetition of file
#define PLOTDATA_H

#include <vector>
#include "LinearEquation.h"
using namespace std;

class Plot_Data
{
private:
    vector<double> xValues;
    vector<double> yValues;
    int stepCount = 100;

public:
    void generate(const Linear_Equation& E, float startX, float endX, float stepCount);
    const vector <double>& getX() const;
    const vector <double>& getY() const;
};
#endif
