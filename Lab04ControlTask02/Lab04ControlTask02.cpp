// Lab04ControlTask02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;

int Input(int&, int&);

int main()
{
    system("chcp 1251");
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}

int Input(int &a, int &b) {
    cout << "Введите значения: " << endl;
    cin >> a >> b;
    if (a > 0 && b >= 10) return true;
    else return false;
}