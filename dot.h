#ifndef LAB10_CPP_DOT_H
#define LAB10_CPP_DOT_H
class Dot
{
private:
    double x;
    double y;
public:
    Dot();
    Dot(double x, double y);
    double distanceTo(Dot point);
};
#endif //LAB10_CPP_DOT_H