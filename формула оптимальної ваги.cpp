#include <iostream>
using namespace std;

double OptimalWeightForMen(double height, double age)
{
	return 50 + (height - 150) * 0.52 + (age - 21) / 4.0;
}

double OptimalWeightForWomen(double height, double age)
{
	return 50 + (height - 150) * 0.75 + (age - 21) / 5.0;
}

int main()
{
	char gender;
	double height, age;

	cout << "Введіть вашу стать (чоловік - 'Ч', жінка - 'Ж'): ";
	cin >> gender;

	cout << "Введіть ваш зріст (у сантиметрах): ";
	cin >> height;

	cout << "Введіть ваш вік: ";
	cin >> age;

	double OptimalWeight;

	if (gender == 'Ч' || gender == 'ч') 
	{
		OptimalWeight = OptimalWeightForMen(height, age);
	}
	else if (gender == 'Ж' || gender == 'ж') {
		OptimalWeight = OptimalWeightForWomen(height, age);
	}
	else 
	{
		cout << "Некоректний ввід для статі. Введіть 'Ч' або 'Ж'.\n";
		return 1;
	}

	cout << "Оптимальна вага: " << OptimalWeight << " кг\n";

	return 0;
}
