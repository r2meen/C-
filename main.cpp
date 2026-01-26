#include <iostream>
#include "LinearEquation.h"
#include "PlotData.h"

using namespace std;

int main(){

    double m, c;

    cout << "Enter slope (m): ";
    cin >> m;

    cout << "Enter intercept (c): ";
    cin >> c;

    const Linear_Equation E(m, c);
    Plot_Data plot;
    plot.generate(E, -10, 10, 10);

    const auto& x = plot.getX();
    const auto& y = plot.getY();

    cout << "Generated Points for y = " << m << "x + " << c << ":\n";

    for (size_t i = 0; i < x.size(); i++)
    {
        cout << "x = " << x[i] << ", y = " << y[i] << endl;
    }
    return 0;
}
