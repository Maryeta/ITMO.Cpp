/* time.h */
#pragma once /* Защита от двойного подключения заголовочного файла */

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	// Конструктор без параметров
	Time();

	//Конструктор с параметрами
	Time(int, int, int);

	//Установка значений
	void set_hours(int);
	void set_minutes(int);
	void set_seconds(int);

	//Получение значений
	int get_hours();
	int get_minutes();
	int get_seconds();

	//Вывод на экран
	void show_time(Time) const;

	//Метод сложения
	void sum_time(Time, Time);

	class ExTime
	{
	public:
		string er;
		int val;

		ExTime(int, string);

	};
};
