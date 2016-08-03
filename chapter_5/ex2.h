#ifndef EX2_H
#define EX2_H

#include <string>

using namespace std;

	//A basic person class.
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
string get_name() const;

	//Prints the person's age.
int get_age() const;

private:
string name;
int age; // 0 if unknown
};


/**
   A basic employee class that is used in many examples
   in the book "Computing Concepts with C++ Essentials"
*/
class PEmployee
{
public:
   /**
      Constructs an employee with empty name and no salary.
   */
   PEmployee();
   /**
      Constructs an employee with a given name and salary.
      @param employee_name the employee name
      @param initial_salary the initial salary
   */
   PEmployee(Person person, double initial_salary);
   /**
      Sets the salary of this employee.
      @param new_salary the new salary value
   */
   void set_salary(double new_salary);
   /**
      Gets the salary of this employee.
      @return the current salary
   */
   double get_salary() const;
   /**
      Gets the name of this employee.
      @return the employee name
   */
   string get_name() const;
private:
   Person person_data;
   double salary;
};

#endif
