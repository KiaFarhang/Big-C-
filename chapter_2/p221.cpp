#include <iostream>
#include <string>
#include "ccc_empl.h"

using namespace std;

int main()
{
	//Collect the employee's name and salary from user.
	cout << "Please enter the employee's name. ";
	string name;
	getline(cin, name);

	cout << "What is the employee's salary? ";
	double salary;
	cin >> salary;

	//Construct employee object.
	Employee emp(name, salary);

	//Give the employee a raise.
	double new_salary = emp.get_salary() * 1.05;
	emp.set_salary(new_salary);

	//Display the employee's name and salary.

	cout << "Name: " << emp.get_name() << "\n";
	cout << "Salary: " << emp.get_salary() << "\n";
	cout << "Enjoy your raise, " << emp.get_name() << "!\n";

	return 0;
}

