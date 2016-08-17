#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Collect three numbers from user input.

	cout << "Please enter your first number. ";
	double a;
	cin >> a;

	cout << "Please enter your second number. ";
	double b;
	cin >> b;

	cout << "Please enter your third number. ";
	double c;
	cin >> c;

	//Compare a against b. If b > a and < c, print c. If b > a and > c, print b.

	if (a < b)
	{
		if (b < c)
		{
			cout << "The largest number is " << c << "\n";
		}
		else
		{
			cout << "The largest number is " << b << "\n";
		}
	}

	//Here a is > than b. So we print c if c > a and a otherwise.

	else {
		if (a < c)
		{
			cout << "The largest number is " << c << "\n";
		}
		else {
			cout << "The largest number is " << a << "\n";
		}
	}
	return 0;
}
