/* time.cpp */
#include <iostream>
#include "Time.h"

using namespace std;

//Конструктор без параметров
Time::Time()
{
	Time::set_hours(0);
	Time::set_minutes(0);
	Time::set_seconds(0);
}

//Конструктор с параметрами
Time::Time(int h, int m, int s)
{
	if (s >= 60)
	{
		m++;
		s -= 60;
	}
	if (m >= 60)
	{
		h++;
		m -= 60;
	}

	Time::set_hours(h);
	Time::set_minutes(m);
	Time::set_seconds(s);
}

//Установка значений
void Time::set_hours(int h)
{
	Time::hours = h;
}

void Time::set_minutes(int m)
{
	Time::minutes = m;
}

void Time::set_seconds(int s)
{
	Time::seconds = s;
}

//Получение значений
int Time::get_hours()
{
	return Time::hours;
}

int Time::get_minutes()
{
	return Time::minutes;
}

int Time::get_seconds()
{
	return Time::seconds;
}

//Вывод на экран
void Time::show_time(Time t) const
{
	cout << t.get_hours() << " : " << t.get_minutes() << " : " << t.get_seconds() << endl;
}

//Метод сложения
void Time::sum_time(Time t1, Time t2) 
{
	int resH, resM, resS;
	resH = t1.get_hours() + t2.get_hours();
	resM = t1.get_minutes() + t2.get_minutes();
	resS = t1.get_seconds() + t2.get_seconds();

	if (resS >= 60)
	{
		resM++;
		resS -= 60;
	}
	if (resM >= 60)
	{
		resH++;
		resM -= 60;
	}

	this -> set_hours(resH);
	this -> set_minutes(resM);
	this -> set_seconds(resS);

}