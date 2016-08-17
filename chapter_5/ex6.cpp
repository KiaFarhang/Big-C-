#include <iostream>
#include <cmath>
#include <string>
#include "ex6.h"

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

Bank::Bank(double checking_amount, double savings_amount)
{
	checking = Account(checking_amount);
	savings = Account(savings_amount);
}

void Bank::deposit(double amount, string account)
{
	if (account == "S")
	{
		savings.deposit(amount);
	}
	else if (account == "C")
	{
		checking.deposit(amount);
	}
	else
	{
		cout << "Please enter a valid account (C or S)." << endl;
	}

}

void Bank::withdraw(double amount, string account)
{
	if (account == "S")
	{
		savings.withdraw(amount);
	}
	else if (account == "C")
	{
		checking.withdraw(amount);
	}
	else
	{
		cout << "Please enter a valid account (C or S)." << endl;
	}
}

void Bank::transfer(double amount, string account)
{
	if (account == "S")
	{
		savings.withdraw(amount);
		checking.deposit(amount);
	}
	else if (account == "C")
	{
		checking.withdraw(amount);
		savings.deposit(amount);
	}
	else
	{
		cout << "Please enter a valid account (S or C)." << endl;
	}
}

void Bank::print_balances() const
{
	cout << "Savings: $" << savings.print() << endl;
	cout << "Checking: $" << checking.print() << endl;
}

int main()
{

	Bank a(50, 100);

	a.print_balances();

	a.deposit(50, "C");

	a.deposit(50, "S");

	a.print_balances();

	a.withdraw(50, "C");

	a.withdraw(50, "S");

	a.print_balances();

	a.transfer(25, "S");

	a.print_balances();

	a.transfer(75, "C");

	a.print_balances();

	return 0;

}
