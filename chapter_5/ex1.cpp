#include <iostream>
#include <string>
#include "ex1.h"

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

void Person::get_name() const
{

	cout << name << endl;
}

void Person::get_age() const
{
	cout << age << endl;
}

int main()
{
	Person person1 ("Kia Farhang", 23);
	person1.get_name();

	return 0;
}
