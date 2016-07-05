#include <iostream>

using namespace std;

int main()
{

	/*
	Collect the year from the user. Note the integer - the modulo
	operator doesn't work on floating-point numbers.
	*/

	cout << "Please enter a year. ";
	int year;
	cin >> year;

	/*
	No matter what, the number must be divisible by 4 to be a
	leap year. You can't use an && test for the 100 and 400
	checks, though, because the program will end after failing
	the first of the two.
	Use an || statement instead.
	*/

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "That is a leap year.\n";
	}
	else
	{
		cout << "That is not a leap year.\n";
	}

	return 0;
}
