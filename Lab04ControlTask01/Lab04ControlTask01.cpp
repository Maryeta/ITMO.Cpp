// Lab04ControlTask01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int MyRoot(double, double, double, double&, double&);

int main()
{
	system("chcp 1251");
	double a, b, c;
	double x1, x2;
	int result;
	cout << "Введите коэффициенты уравнения: " << endl;
	cin >> a >> b >> c;
	result = MyRoot(a, b, c, x1, x2);
	if (result == 1) {
		cout << "Корни уравнения: x1 = " << x1 << " x2 = " << x2 << endl;
	}
	else if (result == 0) {
		cout << "Корень уравнения один: x1 = " << x1 << endl;
	}
	else {
		cout << "Корней уравнения нет!" << endl;
	}
}

int MyRoot(double a, double b, double c, double &x1, double &x2) {
    double d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		return 1;
	}
	else if (d == 0)
	{
		x1 = (-b) / 2 * a;
		return 0;
	}
	else
	{
		return -1;
	}
}