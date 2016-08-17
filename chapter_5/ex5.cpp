#include <iostream>
#include <cmath>
#include "ex5.h"

using namespace std;

Account::Account()
{
	balance = 0;
}

Account::Account(double start_balance)
{
	balance = start_balance;
}

void Account::deposit(double amount)
{
	balance += amount;
	cout << "New balance: $" << balance << endl;
}

void Account::withdraw(double amount)
{
	if(amount > balance)
	{
		balance -= 5;
		cout << "You withdrew more than you had. Transaction canceled, $5 fee." << endl;
	}
	else
	{
		balance -= amount;
	}

	cout << "New balance: $" << balance << endl;
}

double Account::print() const
{
	return balance;
}

double Account::compound(double rate, int period, double compounds)
{
	balance = balance* pow((1 + rate / compounds), (compounds * period));


}
int main()
{

	Account a(10000);

	int years = 0;

	while(a.print() < 20000)
	{
		a.compound(.06, 1, 12);

		years++;
	}

	cout << "It took " << years << " years for the balance to double. " << endl;

	return 0;

}
