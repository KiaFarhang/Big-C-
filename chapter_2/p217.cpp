#include <iostream>

using namespace std;

int main() {

	/**
	Changed total variable from integer to floating-point number. That
allows for precision in division.
	*/
	double total;
	cout << "Please enter a number: ";
	double x1;
	cin >> x1;
	total = total + x1;
	cout << "Please enter a number: ";
	double x2;
	cin >> x2;
	total = total + x2;
	total = total / 2;
	cout << "The average is " << total << "\n";

	return 0;
}
