#ifndef EX4_H
#define EX4_H

using namespace std;

class Account
{
public:

	//Creates an empty account.
	Account();

	//Creates an account and sets the starting balance.
	Account(double start_balance);

	//Adds money to the account.
	void deposit(double amount);

	//Withdraws money from the account.
	void withdraw(double amount);

	//Prints the current account balance.
	void print() const;

private:
double balance;
};

#endif
