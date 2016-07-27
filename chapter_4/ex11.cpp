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


void jul_to_date(long jul, int& year, int& month, int&day)
{
	if(jul > 2299160)
	{
		long jalpha = ((jul - 1867216) - 0.25) / 36524.25;
		jul = jul + 1 + jalpha - (int)(0.25 * jalpha);
	}

	long jb = jul + 1524;
	long jc = 6680.0 + (jb - 2439870 - 122.1)/365.25;
	long jd = 365 * jc + (0.25 * jc);
	int je = (jb - jd)/30.6001;

	day = jb - jd - (long)(30.6001 * je);
	month = je - 1;
	year = (int)(jc - 4715);

	if(month > 12)
	{
		month-= 12;
	}
	if(month > 2)
	{
		year--;
	}
	if(year < 1)
	{
		year--;
	}

}

int main()
{

	int year;
	int month;
	int day;

	cout << "Enter a date in the following format: 2016 9 22 " << endl;
	cin >> year >> month >> day;

	cout << "How many days back would you like to go? ";
	int n;
	cin >> n;

	long jul = julian(year, month, day) - n;

	jul_to_date(jul, year, month, day);

	cout << "That was day " << day << " in month " << month << " of year " << year << endl;

	return 0;
}
