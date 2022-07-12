#include <iostream>
#include <Windows.h>
#include "Time.h"


using namespace std;

int main()
{
	system("chcp 1251");
	try
	{
		Time time01(2, 18, 89);
		Time time02(1, 50, 45);
		Time time03;
		time03.sum_time(time01, time02);
		time03.show_time(time03);
	}
	catch (Time::ExTime& ex)
	{
		cout << "Error! " << ex.val << " - " << ex.er << endl;
	}
	

	return 0;
	
}