#include <iostream>

using namespace std;

int main()
{
	//Collect an integer from user input.

	cout << "Please enter an integer. ";
	int number;
	cin >> number;

	/*
	This loop starts at the given number. It counts down from there,
	printing every time it hits a factor of the user's number.
	*/

	for (int i = number; i > 0; i--)
	{
		if (number % i == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}
