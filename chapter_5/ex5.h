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

	//Returns the current account balance.
	double print() const;

	/*
	Modifies the balance with interest over time.
	@param rate the interest rate per period.
	@param period the number of periods.
	@param compound how many times per period the interest is compounded.
	*/
	double compound(double rate, int period, double compounds);

private:
double balance;
};

#endif
