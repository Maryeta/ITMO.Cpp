// Lab06ControlTask01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char fileName[80];
	char buffer[255]; 

	cout << "File name: ";
	cin >> fileName;

	ofstream fout(fileName);   // открытие файла для записи

	cout << "Введите четверостишье: " << endl;
	cin.ignore(1, '\n');

	for (int i = 0; i < 4; i++) {
		cin.getline(buffer, 255);
		fout << buffer << "\n";
	}
	fout.close(); 
}

