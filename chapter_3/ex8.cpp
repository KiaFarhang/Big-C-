#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Collect two floating-point numbers from the user.

	cout << "Enter two floating-point numbers. ";
	double a, b;
	cin >> a >> b;

	//Set sigma as .01 for comparison.
	const double SIGMA = .01;

	/*See if the absolute value of a-b is greater than sigma. If so, the
	numbers are NOT the same up to two decimal places. Otherwise, they
	are the same up to two decimal places.
	*/

	if (abs(a-b) > SIGMA)
	{
		cout << "They are different.\n";
	}
	else
	{
		cout << "They are the same up to two decimal places.\n";
	}

	return 0;
}
