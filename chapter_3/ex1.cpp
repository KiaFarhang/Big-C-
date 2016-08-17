#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Collect a, b and c coefficients from user.

	double a, b, c;

	cout << "Please enter your a coefficient. ";
	cin >> a;

	cout << "Please enter your b coefficient. ";
	cin >> b;

	cout << "Please enter your c coefficient. ";
	cin >> c;

	//Calculate the square-root discriminant.

	double square = sqrt((b*b) - (4*a*c));

	/*
	Check if the square-root discriminant >= 0.
	If it is, solve for x.
	Otherwise, tell the user there are no solutions.
	*/

	if (square >= 0)
	{
		double solution_1 = (((b * -1) + square) / (2 * a));
		double solution_2 = (((b * -1) - square) / (2 * a));

		cout << "x=" << solution_1 << " and x=" << solution_2 << "\n";
	} else
	{
		cout << "There are no solutions. ";

	}

	return 0;
}
