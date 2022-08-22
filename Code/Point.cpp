#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int a, b;
    friend double cal_dif(Point p1, Point p2);

public:
    Point();
    Point(int, int);
    void displayPoint();
};

Point::Point()
{
    a = 0;
    b = 0;
}

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

void Point::displayPoint()
{
    cout << "Point is (" << a << ", " << b << ")" << endl;
}

double cal_dif(Point p1, Point p2)
{
    return sqrt(pow(p2.a - p1.a, 2) + pow(p2.b - p1.b, 2) * 1.0);
}

int main()
{
    Point P;
    P.displayPoint();

    Point P1(2, 3);
    P1.displayPoint();

    Point P2(6, 4);
    P2.displayPoint();

    double dif = cal_dif(P1, P2);
    cout << "Point difference is " << dif;
    return 0;
}