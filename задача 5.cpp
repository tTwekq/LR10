#include <iostream>
#include <cmath>

using namespace std;\

int main()
{
	setlocale(0, ".1251");

	double a, b, c;
	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << "enter c: ";
	cin >> c;

	double abc = (a * b * c);
	double result = log(abc);
	cout << "ln(" << abc << ") = " << result << endl;

	if ((a + b - c / a * 2 + log(abc) - cos(b)) < 0) cout << "error";
	else if (sqrt(a + b - c) / a * 2 + log(abc) - cos(b) < 0) cout << "error";
	else cout << (sqrt(sqrt(a + b - c) / a * 2 + log(abc) - cos(b)));

	return 0;
		 
}