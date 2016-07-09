#include <iostream>

using namespace std;

int main()
{
	cout << "What is today's dollar-yen exchange rate? ";
	double rate;
	cin >> rate;

	double input;
	bool more = true;

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
