#include "LinearEquation.h"

Linear_Equation :: Linear_Equation(double m, double c){
    this -> m = m;
    this -> c = c;
}
void Linear_Equation :: set_m(double m){
    this -> m = m;
}
void Linear_Equation :: set_c(double c){
    this -> c = c;
}
double Linear_Equation :: get_m()const{
     return m;
}
double Linear_Equation :: get_c()const{
     return c;
}
double Linear_Equation :: calculation_of_y(double x)const{
    return m*x+c;
}
