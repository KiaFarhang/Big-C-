#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* Create two strings to hold the units the user wants to convert
	from and to. */

	cout << "Convert from? ";
	string from;
	getline(cin,from);

	cout << "Convert to? ";
	string to;
	cin >> to;

	// Get the number to be converted and initialize the new value.

	cout << "Value? ";
	double value;
	cin >> value;

	double new_value;

	/* Use multipart if statements to find the correct conversion rate. */

	if (from == "fl. oz" && to == "ml")
	{
		new_value = value * 29.586;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "fl. oz" && to == "l")
	{
		new_value = value * 0.0296;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "gal" && to == "l")
	{
		new_value = value * 3.785;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "gal" && to == "ml")
	{
		new_value = value * 3785.4120;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "oz" && to == "g")
	{
		new_value = value * 28.3495;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "lb" && to == "g")
	{
		new_value = value * 453.6;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "in" && to == "cm")
	{
		new_value = value * 2.54;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "ft" && to == "cm")
	{
		new_value = value * 30.5;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else if (from == "mi" && to == "km")
	{
		new_value = value * 1.609;
		cout << value << " " << from << " = " << new_value << " " << to << endl;

	}
	else
	{
		cout << "Not a valid conversion.\n";
	}

	return 0;

}
