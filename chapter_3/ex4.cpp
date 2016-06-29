#include <iostream>
#include <string>

using namespace std;
int main()
{
	//Collect grade from user input.
	cout << "Please enter your letter grade (A+, C-, etc.) ";
	string grade;
	cin >> grade;

	//Create a floating-point number we'll use to store and output the grade's numerical value.
	double output_grade = 0;

	//Begin testing for grades.

	if (grade.substr(0, 1) == "A")
	{
		output_grade += 4.0;
	}
	else if (grade.substr(0, 1) == "B")
	{
		output_grade += 3.0;
	}
	else if (grade.substr(0, 1) == "C")
	{
		output_grade += 2.0;
	}
	else if (grade.substr(0,1) == "D")
	{
		output_grade += 1.0;
	}
	else if (grade.substr(0, 1) == "F")
	{
		output_grade += 0;
	}
	else
	{
		cout << "You didn't enter a valid grade. Please try again.\n";
	}

	//Add the plus modifier, if applicable. Make sure you don't modify As or Fs.

	if (grade.substr(1, 1) == "+")
	{
		if (grade.substr(0, 1) == "A" || grade.substr(0, 1) == "F")
		{
			output_grade += 0;
		}
		else {
			output_grade += 0.3;
		}
	}

	if (grade.substr(1, 1) == "-")
	{
		if (grade.substr(0, 1) == "F")
		{
			output_grade += 0;
		}
		else {
			output_grade -= 0.3;
		}
	}

	cout << "The numeric value is " << output_grade << "\n";

	return 0;
}