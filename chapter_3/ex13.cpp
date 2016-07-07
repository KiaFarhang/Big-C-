#include <iostream>

using namespace std;

int main()
{

	//Collect month from user input

	cout << "Enter a month (1 for January, 2 for February, etc.) ";
	int month;
	cin >> month;

	//Simple if-else chain to determine which month, print number of days.

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8
|| month == 10 || month == 12)
	{
		cout << "31 days\n";
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		cout << "30 days\n";
	}
	else if (month == 2)
	{
		cout << "28 or 29 days\n";
	}
	else
	{
		cout << "Not a valid month, try again.\n";
	}

	return 0;
}
