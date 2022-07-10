// Lab05ControlTask02.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int *max_vect(int n, int *x, int *y) {
	int *z = new int[n];
	for (int i = 0; i < n; i++)
		z[i] = x[i] > y[i] ? x[i] : y[i];
	return z;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
	int* c; //Указатель на результирующий массив
	c = max_vect(kc, a, b); //вызов функции для создания массива
	for (int i = 0; i < kc; i++) //Вывод результата.
		cout << c[i] << " ";
	cout << endl;
	delete[]c; //Возврат памяти.
}

