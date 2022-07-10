// Lab02ControlTask04_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main()
{
    system("chcp 1251");
    int countPoint, countHits;
    double x, y;
    countPoint = 0;
    countHits = 0;

    while ((countPoint < 50)) {
        cout << "Введите координаты x, y: ";
        cin >> x >> y;
        double r = sqrt(x * x + y * y);
        if (r < 1) {
            countPoint += 10;
            cout << "Попадание: + 10 баллов " << "Итог: " << countPoint << endl;
        }
        else if ((r >= 1) && (r > 2)) {
            countPoint += 5;
            cout << "Попадание: + 5 баллов " << "Итог: " << countPoint << endl;
        }
        else if ((r >= 2) && (r < 3)) {
            countPoint += 1;
            cout << "Попадание: + 1 балл " << "Итог: " << countPoint << endl;
        }
        else cout << " Мимо: + 0 баллов " << "Итог: " << countPoint << endl;
        countHits++;
    }

    if (countHits <= 7) 
        cout << "Ваш результат " << countHits << " выстрелов. " << " Статус: снайпер!";
    if ((countHits > 7) && (countHits <= 15)) 
        cout << "Ваш результат " << countHits << " выстрелов. " << " Статус: стрелок!";
    if (countHits > 15) 
        cout << "Ваш результат " << countHits << " выстрелов. " << " Статус: новичок!";

    return 0;
}
