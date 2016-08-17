#include <iostream>
#include <math.h>

using namespace std;

/*
Calculates the Julian date of a given day.
@param year - the given year.
@param month - the given month.
@param day - the given day.
@return jul - The date as a Julian date.
*/
long julian(int year, int month, int day)
{
	if(year < 0)
	{
		year++;
	}
	if(month > 2)
	{
		month++;
	}
	else
	{
		month += 13;
		year--;
	}

	long jul = floor(365.25 * year) + floor(30.6001 * month) + day + 1720995.0;

	if(jul < 2299171)
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

	int current_year;
	int current_month;
	int current_day;

	cout << "Input today's date like this: 2016 9 22 " << endl;
	cin >> current_year >> current_month >> current_day;

	int year;
	int month;
	int day;

	cout << "Enter a date in the past with the same format." << endl;
	cin >> year >> month >> day;


	cout << "That was " << julian(current_year, current_month, current_day) - julian(year, month, day) << " days ago." << endl;

	return 0;
}
