/* time.h */
#pragma once /* ������ �� �������� ����������� ������������� ����� */

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	// ����������� ��� ����������
	Time();

	//����������� � �����������
	Time(int, int, int);

	//��������� ��������
	void set_hours(int);
	void set_minutes(int);
	void set_seconds(int);

	//��������� ��������
	int get_hours();
	int get_minutes();
	int get_seconds();

	//����� �� �����
	void show_time(Time) const;

	//����� ��������
	void sum_time(Time, Time);

	class ExTime
	{
	public:
		string er;
		int val;

		ExTime(int, string);

	};
};
