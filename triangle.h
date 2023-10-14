#ifndef LAB10_CPP_TRIANGLE_H
#define LAB10_CPP_TRIANGLE_H
#include "dot.h"
class Triangle{
private:
    Dot a;
    Dot b;
    Dot c;
    double a1;
    double b1;
    double c1;
public:
    Triangle(Dot a, Dot b, Dot c);
    double findSquare();
    double findPerimeter();
    void printSides();
};
#endif //LAB10_CPP_TRIANGLE_H
