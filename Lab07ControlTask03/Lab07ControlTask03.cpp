// Lab07ControlTask03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <windows.h>
#include <tuple>

using namespace std;

using Tuple = tuple<double, double, int>;

Tuple MyRoot(double, double, double);

int main()
{
	system("chcp 1251");

	double a, b, c;
	cout << "Введите коэффициенты уравнения: " << endl;
	cin >> a >> b >> c;

	auto result = MyRoot(a, b, c);

	if (get<2>(result) == 1) {
		cout << "Корни уравнения: x1 = " << get<0>(result) << " x2 = " << get<1>(result) << endl;
	}
	else if (get<2>(result) == 0) {
		cout << "Корень уравнения один: x1 = " << get<0>(result) << endl;
	}
	else {
		cout << "Корней уравнения нет!" << endl;
	}
}

Tuple MyRoot(double a, double b, double c) {
	double x1, x2;
	int flag;
	double d = b * b - 4 * a * c;
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		flag = 1;
	}
	else if (d == 0)
	{
		x1 = (-b) / 2 * a;
		flag = 0;
	}
	else
	{
		flag = -1;
	}
	return make_tuple(x1, x2, flag);
}

