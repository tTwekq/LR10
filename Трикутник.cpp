#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main()
{
    setlocale(0, ".1251");

    Point A = { 0, 0 };
    Point B = { 10, 9 };
    Point C = { -10, 11 };


    Point M = { (A.x + B.x) / 2, (A.y + B.y) / 2 };
    double m = distance(C, M);

    
    Point W = { (C.x + B.x) / 2, (C.y + B.y) / 2 };
    double w = distance(A, W);

    cout << "Length of median m: " << m << endl;
    cout << " Length of bisectors w: " << w << endl;

    return 0;
}


