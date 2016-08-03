#ifndef EX1_H
#define EX1_H

#include <string>

using namespace std;

class Person
{
public:
//Creates a person with empty name and age 0
Person();

/*
Creates a person.
@param pname the person's name.
@param page the person's age.
*/
Person(string pname, int page);

//Prints the person's name.
void get_name() const;

//Prints the person's age.
void get_age() const;

private:
string name;
int age; // 0 if unknown
};

#endif
