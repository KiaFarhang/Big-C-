#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Collect a number from user input.

	cout << "Please enter a number between 0 and 4.0 ";
	double grade;
	cin >> grade;

	string grade_output;

	//Test for grades, setting output at the correct level.

	if (grade > 3.7)
	{
		grade_output = "A";
	}
	else if (grade > 3.3 && grade <= 3.7)
	{
		grade_output = "A-";
	}
	else if (grade > 3.0 && grade <= 3.3)
	{
		grade_output = "B+";
	}
	else if (grade > 2.7 && grade <= 3.0)
	{
		grade_output = "B";
	}
	else if (grade > 2.3 && grade <= 2.7)
	{
		grade_output = "B-";
	}
	else if (grade > 2.0 && grade <= 2.3)
	{
		grade_output = "C+";
	}
	else if (grade > 1.7 && grade <= 2.0)
	{
		grade_output = "C";
	}
	else if (grade > 1.3 && grade <= 1.7)
	{
		grade_output = "C-";
	}
	else if (grade > 1.0 && grade <= 1.3)
	{
		grade_output = "D";
	}
	else if (grade > 0.7 && grade <= 1.0)
	{
		grade_output = "D-";
	}
	else if (grade < 0.7)
	{
		grade_output = "F";
	}

	//Output the grade.

	cout << "Your grade is " << grade_output << ".\n";

	return 0;
}
