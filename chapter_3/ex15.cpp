#include <iostream>

using namespace std;

int main()
{

	//Collect the exchange rate from the user.

	cout << "What is today's dollar-yen exchange rate? ";
	double rate;
	cin >> rate;

	double input;
	bool more = true;

	/*
	This loop runs while our boolean value "more" is equal to true.
	The loop asks for a dollar value and stores it in the input variable.
	If the user enters 0, more becomes false. The loop condition is
	no longer true and it terminates.
	*/

	while (more)
	{

		cout << "Enter your dollar value. Enter 0 to finish. ";
		cin >> input;

		if (input == 0)
		{
			more = false;
		}
		else
		{

			double output = input * rate;

			cout << "$" << input << " = " << output << " yen. \n";

		}
	}

	return 0;

}
