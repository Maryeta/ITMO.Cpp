// Lab03ControlTask02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

double cubeRoot(double x) {
	return pow(x, 1.0 / 3);
}

double cubeRootIter(double x) {
	double xi, x0;
	xi = x;
	x0 = 0;
	while (abs(xi - x0) > 0.000000001) {
		x0 = xi;
		xi = (1.0 / 3.0) * ((x / (x0 * x0)) + 2.0 * x0);
	}
	return xi;
}

int main()
{
	system("chcp 1251");
	double x, resultPow, resultIter;
	cout << "Введите число: ";
	cin >> x;
	resultPow = cubeRoot(x);
	cout.precision(10);
	cout << "Расчет функции Pow: " << resultPow << endl;
	resultIter = cubeRootIter(x);
	cout << "Расчет по итерационной формуле: " << resultIter << endl;

	return 0;
}

