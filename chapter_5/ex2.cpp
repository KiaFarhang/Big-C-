#include <iostream>
#include <string>
#include "ex2.h"

using namespace std;


Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}

string Person::get_name() const
{
	return name;
}

int Person::get_age() const
{
	return age;
}

PEmployee::PEmployee()
{
   salary = 0;
}

PEmployee::PEmployee(Person person, double initial_salary)
{
   person_data = person;
   salary = initial_salary;
}

void PEmployee::set_salary(double new_salary)
{
   salary = new_salary;
}

double PEmployee::get_salary() const
{
   return salary;
}

string PEmployee::get_name() const
{
   return person_data.get_name();
}


int main()
{
	Person kia("Kia Farhang", 24);

	PEmployee k(kia, 30000);

	cout << "Kia's salary is $" << k.get_salary() << endl;

	cout << "Let's give him a $10,000 raise." << endl;

	k.set_salary(40000);

	cout << "Now his salary is $" << k.get_salary() << endl;

	return 0;
}
