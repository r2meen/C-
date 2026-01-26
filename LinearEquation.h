#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H

class Linear_Equation
{

private:
    double m;
    double c;

public:
    Linear_Equation(double m = 1, double c = 0);

    void set_m(double m);
    void set_c(double c);

    double get_m() const;
    double get_c() const;
    double calculation_of_y(double x) const;
};
#endif
