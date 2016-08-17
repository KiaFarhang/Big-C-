#include <iostream>
using namespace std;

int main()
{

	//Collect the exchange rate from the user.

	cout << "What is today's dollar-yen exchange rate? ";
	double rate;
	cin >> rate;

	double input;
	double input_2;
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

		double output = input * rate;
		cout << "$" << input << " = " << output << " yen. \n";


		if (input == 0)
		{
			more = false;
			break;
		}
	}


	while (more == false)
	{

		cout << "Enter your yen values. ";
		cin >> input_2;

		while( cin >> input)
		{

			double output2 = input_2 / rate;

			cout << input << " yen = $" << output2 << "\n";
		}
	}


	return 0;

}
