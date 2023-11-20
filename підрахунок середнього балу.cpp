#include <iostream>
using namespace std;

int main()
{

    int math, physics, biology, foreignLanguage, geography;


    cout << "Введіть оцінку з математики: ";
    cin >> math;

    cout << "Введіть оцінку з фізики: ";
    cin >> physics;

    cout << "Введіть оцінку з біології: ";
    cin >> biology;

    cout << "Введіть оцінку з іноземної мови: ";
    cin >> foreignLanguage;

    cout << "Введіть оцінку з географії: ";
    cin >> geography;

    double average = (math + physics + biology + foreignLanguage + geography) / 5.0;

    cout << "Середній бал: " << average << std::endl;

    return 0;
}
