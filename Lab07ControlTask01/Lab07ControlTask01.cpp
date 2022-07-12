// Lab07ControlTask01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

struct Time
{
	int hours, minutes, seconds;

	void showTime(Time t)
	{
		cout << "Время в секундах: " << convertSeconds(t) << endl;
	}

	void showTimeChMS(Time t)
	{
		cout << t.hours << "ч\t" << t.minutes << "мин\t" << t.seconds << "сек\t" << endl;
	}

	int convertSeconds(Time t)
	{
		int restime;
		restime = t.hours * 60 * 60 + t.minutes * 60 + t.seconds;
		return restime;
	}

	Time intervalPlus(Time t1,Time t2)
	{
		Time t;
		int convertSecond1, convertSecond2, resultSeconds;

		convertSecond1 = convertSeconds(t1);
		convertSecond2 = convertSeconds(t2);
		resultSeconds = convertSecond1 + convertSecond2;

		t.hours = resultSeconds / 3600;
		t.minutes = (resultSeconds - t.hours * 3600) / 60;
		t.seconds = (resultSeconds - t.hours * 3600) - t.minutes * 60;

		return t;
	}

	Time intervalMinus(Time t1, Time t2)
	{
		Time t;
		int convertSecond1, convertSecond2, resultSeconds;

		convertSecond1 = convertSeconds(t1);
		convertSecond2 = convertSeconds(t2);
		resultSeconds = convertSecond1 - convertSecond2;

		t.hours = resultSeconds / 3600;
		t.minutes = (resultSeconds - t.hours * 3600) / 60;
		t.seconds = (resultSeconds - t.hours * 3600) - t.minutes * 60;

		return t;
	}


};

Time inputTime() {
	Time t;
	cout << "\nВведите часы: ";
	cin >> t.hours;
	cout << "Введите минуты: ";
	cin >> t.minutes;
	cout << "Введите секунды: ";
	cin >> t.seconds;
	return t;

}


int main()
{
	system("chcp 1251");
	Time t1 = inputTime();
	t1.showTime(t1);

	Time t2 = inputTime();
	Time t3 = inputTime();
	Time result = result.intervalPlus(t2, t3);
	result.showTime(result);
	result.showTimeChMS(result);

	Time result2 = result.intervalMinus(t2, t3);
	result.showTime(result2);
	result.showTimeChMS(result2);
}


