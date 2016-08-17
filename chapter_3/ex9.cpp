#include <iostream>
#include <string>
#include "ccc_empl.h"

using namespace std;

int main()
{

	//Collect employee's name, hourly pay and hours worked.

	cout << "Please enter the employee's name. ";
	string name;
	getline(cin,name);

	cout << "And what is the employee's hourly wage? ";
	double wage;
	cin >> wage;

	cout << "How many hours did the person work last week? ";
	double hours;
	cin >> hours;

	//Create empty total pay variable.

	double pay;

	//Construct employee object with given inputs.

	Employee person(name, wage);

	//Pay hours * hourly wage up to 40 hours.

	if (hours <= 40)
	{
		pay = person.get_salary() * hours;
	}

	/*Above 40 hours, pay one and a half times for every hour
	above 40. Add that overtime pay to 40 * hourly wage.
	*/

	else
	{
		double overtime_hours = hours - 40;
		double overtime_pay = overtime_hours * (wage * 1.5);
		pay = (person.get_salary() * 40) + overtime_pay;
	}

	cout << name <<  " earned $" << pay << " last week.\n";

	return 0;
}
