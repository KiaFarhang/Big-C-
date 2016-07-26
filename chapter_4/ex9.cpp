#include <iostream>

using namespace std;

/*
Determines whether a given year was a leap year.
@param year the given year.
@return true or false.
*/
bool leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	cout << "Give me a year. ";
	int year;
	cin >> year;

	if(leap_year(year))
	{
		cout << year << " was a leap year." << endl;
	}
	else
	{
		cout << year << " was not a leap year." << endl;
	}

	return 0;
}
