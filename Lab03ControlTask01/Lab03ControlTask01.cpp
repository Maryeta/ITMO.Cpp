// Lab03ControlTask01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

double sideTriangle(double xa, double ya, double xb, double yb) {
	double a = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
	return a;
}

double squareTriangle(double a, double b, double c) {
	double p = 0.5 * (a + b + c);
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}

int main()
{
	system("chcp 1251");
	double xa, ya, xb, yb, xc, yc, xd, yd, xe, ye;
	cout << "Введите координаты вершин многоугольника: ";
	cin >> xa >> ya;
	cin >> xb >> yb;
	cin >> xc >> yc;
	cin >> xd >> yd;
	cin >> xe >> ye;

	double a = sideTriangle(xb, yb, xc, yc);
	double b = sideTriangle(xa, ya, xb, yb);
	double f = sideTriangle(xc, yc, xa, ya);
	double s1 = squareTriangle(a, b, f);

	double c = sideTriangle(xa, ya, xe, ye);
	double g = sideTriangle(xc, yc, xe, ye);
	double s2 = squareTriangle(c, g, f);

	double e = sideTriangle(xc, yc, xd, yd);
	double d = sideTriangle(xd, yd, xe, ye);
	double s3 = squareTriangle(e, d, g);

	double square = s1 + s2 + s3;

	cout << "Площадь многоугольника: " << square << endl;

	return 0;
}


