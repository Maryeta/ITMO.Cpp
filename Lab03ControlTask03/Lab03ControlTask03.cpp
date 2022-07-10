// Lab03ControlTask03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

double squareTriangle(double a) {
    double p, s;
    p = 0.5 * 3 * a;
    s = sqrt(p * 3 * (p - a));
    return s;
}

double squareTriangle(double a, double b, double c) {
    double p, s;
    p = 0.5 * (a + b + c);
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}

int main()
{
    system("chcp 1251");
    int way;
    double a, b, c, s;
    cout << "Треугольник равносторонний? Да - 1, нет - 0 "<< endl;
    cin >> way;
    if (way == 1) {
        cout << "Введите сторону равностороннего треугольника: ";
        cin >> a;
        s = squareTriangle(a);
        cout << "Площадь равностороннего треугольника: " << s;
    }
    else {
        cout << "Введите стороны треугольника: "<< endl;
        cin >> a >> b >> c;
        s = squareTriangle(a, b, c);
        cout << "Площадь треугольника: " << s << endl;
    }
}

