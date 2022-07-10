// Lab05_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int sumElem(int n, int mas[]) {
    int s = 0;
    for (int i = 0; i < n; i ++)
    {
        s += mas[i];
    }
    return s;
}

int sumUneven(int n, int mas[]) {
    int s = 0;
    for (int i = 1; i < n; i += 2)
    {
        s += mas[i];
    }
    return s;
}

int sumEven(int n, int mas[]) {
    int s = 0;
    for (int i = 0; i < n; i += 2)
    {
        s += mas[i];
    }
    return s;
}


int main()
{
    const int n = 10;
    int mas[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    //int s = 0;
    //for (int i = 1; i < n; i+=2)
    //{
    //    s += mas[i];
    //}

    cout << sumElem(n, mas) << endl;
    cout << sumEven(n, mas) << endl;
    cout << sumUneven(n, mas) << endl;
}
