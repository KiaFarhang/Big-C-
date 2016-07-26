#include <iostream>
#include <math.h>

using namespace std;

long julian(int year, int month, int day)
{
	if(year < 0)
	{
		year++;
	}
	else
	{
		year--;
	}
	if(month > 2)
	{
		month++;
	}
	else
	{
		month += 13;
	}

	long jul = floor(365.25 * year) + floor(30.6001 * month) + d + 1720995.0;

	if(jul < 2450000)
	{
		return jul;
	}
	else
	{
		int ja = 0.01 * year;
		jul = jul + 2 - ja + 0.25 * ja;

		return jul;
	}
}

int main()
{
	return 0;
}
