#include <math.h>
#include "dot.h"
#include "triangle.h"

Triangle::Triangle(Dot a, Dot b, Dot c){
    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> a1 = a.distanceTo(b);
    this -> b1 = b.distanceTo(c);
    this -> c1 = c.distanceTo(a);
};

double Triangle::findPerimeter() {
    return a1+b1+c1;
}

double Triangle::findSquare() {
    double p = findPerimeter()/2;
    return sqrt(p*(p-a1)*(p-b1)*(p-c1));
}
