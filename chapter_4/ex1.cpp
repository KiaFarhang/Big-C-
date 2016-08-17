#include <iostream>
#include <cmath>

using namespace std;

/**
Computes tha value of an investment with compound interest.
@param initial_balance the initial value of the investment.
@param p the interest rate per period in percent.
@param n the number of periods the investment is held.
@return the balance after n periods.
*/

double future_value(double initial_balance, double p, int n)
{
	double b = initial_balance * pow(1 + p / 100, n);
	return b;
}

int main()
{
	cout << "Please enter the initial investment. ";
	double initial_balance;
	cin >> initial_balance;

	cout << "Please enter the interest rate in percent. ";
	double p;
	cin >> p;

	cout << "Please enter the number of periods the investment is held. (ie years) ";
	int n;
	cin >> n;

	cout << "After " << n << " periods, the balance is " << future_value(initial_balance, p, n) << endl;

	return 0;
}
