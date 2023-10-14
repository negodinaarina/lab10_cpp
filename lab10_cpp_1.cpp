#include <iostream>
#include "dot.h"
#include "triangle.h"
using namespace std;

int main(){
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter dot1(x,y)";
    cin >> x1; cin >> y1;
    Dot a = Dot(x1, y1);
    cout << "Enter dot2(x,y)";
    cin >> x2; cin >> y2;
    Dot b = Dot(x2, y2);
    cout << "Enter dot3(x,y)";
    cin >> x3; cin >> y3;
    Dot c = Dot(x3, y3);
    Triangle triangle = Triangle(a, b, c);
    cout << triangle.findPerimeter();
    cout << triangle.findSquare();
}