// Lab_2.1.cpp
// < Михайлович Юлія >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double B; // вхідний параметр
	double a; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a =  "; cin >> a;
	cout << "B = "; cin >> B;
	z1 = (sin(a) + cos(2 * B - a)) / (cos(a) - sin(2 * B - a));
	z2 = (1 + sin(2 * B)) / (cos(2 * B));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}