#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(0, ".1251");

	double m = 2, x = 1.1;

	double b = (pow(x, 4) + pow(m, 2));

	double a = sqrt(abs(x));

    double y = pow(cos(a + sin(b)), 2);

	cout << "Значення функції y: " << y << endl;

	return 0;
}