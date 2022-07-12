// Lab09_ControlTask01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Triangle
{
private:
	double a;
	double b;
	double c;

public:
    class ExEnter //класс исключений
    {
    public:
        string er = "Введены некорректные значения! ";

        ExEnter(){}
    };

    Triangle(double ain, double bin, double cin)
    {
        a = ain;
        b = bin;
        c = cin;
        if (a > (b + c) || b > (a + c) || c > (a + b))
            throw ExEnter();
    }

	double squareTriangle() {
		double p = 0.5 * (this -> a + this -> b + this -> c);
		double s = sqrt(p * (p - this-> a) * (p - this-> b) * (p - this-> c));
		return s;
	}
};


int main()
{
    system("chcp 1251");
    int a, b, c;
    double s;
    cout << "Введите стороны треугольника: ";
    cin >> a;
    cin >> b;
    cin >> c;
    try
    {
        Triangle tr1(a, b, c);
        s = tr1.squareTriangle();
        cout << "Треугольник со сторонами: " << a << " " << b << " " << c << endl;
        cout << "Площадь: " << s << endl;
    }
    catch (Triangle::ExEnter& ex)
    {
        cout <<"Error! " << ex.er << endl;
    }

    
}


