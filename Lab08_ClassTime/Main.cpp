#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time time01(2, 30, 5);
	Time time02(1, 50, 45);
	Time time03;
	time03.sum_time(time01, time02);
	time03.show_time(time03);

	return 0;
	
}