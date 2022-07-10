// Lab03ControlTask04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;

int addNumbers(int n) {
    if (n == 5) return 5;
    else return (n + addNumbers(n - 5));
}

int main()
{
    system("chcp 1251");
    int a, result;
    cout << "Введите число: " << endl;
    cin >> a;
    result = addNumbers(a);
    cout << result;
}

