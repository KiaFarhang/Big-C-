#include <iostream>
#include "ex4.h"

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

void Account::print() const
{
	cout << "Current balance: $" << balance << endl;
}

int main()
{
	cout << "You will start a bank account. How much will you deposit to begin? ";
	double start;
	cin >> start;

	Account a(start);

	a.print();

	cout << "Let's deposit some money. How much? ";
	int deposit;
	cin >> deposit;

	a.deposit(deposit);

	cout << "Now let's make a withdrawal. How much? ";
	int withdrawal;
	cin >> withdrawal;

	a.withdraw(withdrawal);

	cout << "Goodbye! " << endl;

	return 0;
}
