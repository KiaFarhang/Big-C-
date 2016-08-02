#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
Person();
Person(string pname, int page);
void get_name() const;
void get_age() const;
private:
string name;
int age; // 0 if unknown
};

//Creates a person with empty name and age 0
Person::Person()
{
	name = "";
	age = 0;
}

/*
Creates a person.
@param pname the person's name.
@param page the person's age.
*/
Person::Person(string pname, int page)
{
	name = pname;
	age = page;
}

//Prints the person's name.
void Person::get_name() const
{

	cout << name << endl;
}

//Prints the person's age.
void Person::get_age() const
{
	cout << age << endl;
}
