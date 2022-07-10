// Lab03ControlTask05.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void binar(int a) {
    if ((a / 2) == 1) {
        cout << a / 2 << a % 2;
    }
    else {
        binar(a / 2);
        cout << a % 2;
    }
}

int main()
{
    system("chcp 1251");
    int a;
    long long result;
    cout << "Введите число: ";
    cin >> a;
    binar(a);

    return 0;
}
