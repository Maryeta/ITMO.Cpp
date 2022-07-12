// Lab07ControlTask02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

struct Root
{
	double x1;
	double x2;
	int flag;
};

Root MyRoot(double, double, double);

int main()
{
	system("chcp 1251");
	double a, b, c;

	cout << "Введите коэффициенты уравнения: " << endl;
	cin >> a >> b >> c;
	Root result = MyRoot(a, b, c);
	if (result.flag == 1) {
		cout << "Корни уравнения: x1 = " << result.x1 << " x2 = " << result.x2 << endl;
	}
	else if (result.flag == 0) {
		cout << "Корень уравнения один: x1 = " << result.x1 << endl;
	}
	else {
		cout << "Корней уравнения нет!" << endl;
	}
}

Root MyRoot(double a, double b, double c) {
	Root r;
	double d = b * b - 4 * a * c;
	if (d > 0)
	{
		r.x1 = (-b + sqrt(d)) / 2 * a;
		r.x2 = (-b - sqrt(d)) / 2 * a;
		r.flag = 1;
	}
	else if (d == 0)
	{
		r.x1 = (-b) / 2 * a;
		r.flag = 0;
	}
	else
	{
		r.flag = -1;
	}

	return r;
}