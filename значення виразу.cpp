#include <iostream>
#include <cmath>

using namespace std;

double cotangent(double x) {
    return 1 / tan(x);
}



int main() 
{
    double a;
    cout << "Введіть значення кута a в градусах: ";
    cin >> a;

    double alphaRad = a * M_PI / 180.0;

    double z1 = sin(M_PI / 2 + 3 * a * alphaRad) / (1 - sin(3 * a * alphaRad - M_PI));
    
    double z2 = cotangent(5 / 4 * M_PI + static_cast<double>(3) / 2 * a * alphaRad);

    cout << "Значення виразу z1: " << z1 << endl;
    cout << "Значення виразу z2: " << z2 << endl;

    return 0;
}