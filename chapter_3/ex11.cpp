#include <iostream>
#include <string>

using namespace std;

int main()
{

	//Create variables and constants.

	double income;
	double tax;

	double cutoff15;
	double cutoff28;

	double tax1;
	double tax2;

	const double RATE1 = 0.15;
	const double RATE2 = 0.28;
	const double RATE3 = 0.31;

	//Collect income and marital status from the user.

	cout << "Please enter your income. ";
	cin >> income;

	cout << "Enter s for single, m for married. ";
	string status;
	cin >> status;

	/* Set the cutoffs and taxes to the proper level based on the
	user's marital status.
	*/

	if (status == "s")
	{
		cutoff15 = 21450.00;
		cutoff28 = 51900.00;
		tax1 = 3217.50;
		tax2 = 11743.50;
	}
	else if (status == "m")
	{
		cutoff15 = 35800.00;
		cutoff28 = 86500.00;
		tax1 = 5370.00;
		tax2 = 19566.00;
	}
	else
	{
		cout << "Please enter a valid status.\n";
	}

	//This is the actual tax calculation.

	if (income <= cutoff15)
	{
		tax = RATE1 * income;
	}
	else if(income <= cutoff28)
	{
		tax = tax1 + RATE2 * (income - cutoff15);
	}
	else
	{
		tax = tax2 + RATE3 * (income - cutoff28);
	}

	cout << "The tax is $" << tax << "\n";

	return 0;
}
