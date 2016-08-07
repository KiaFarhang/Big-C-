#ifndef EX6_H
#define EX6_H

#include <string>

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

class Bank
{
public:

	Bank(double checking_amount, double savings_amount);

	/*
	Deposits money into a bank account.
	@param amount the amount to deposit.
	@param account the account to deposit into (checking/savings).
	*/
	void deposit(double amount, string account);

	/*
	Withdraws money from a bank account.
	@param amount the amount to withdraw.
	@param account the account to withdraw from (checking/savings).
	*/
	void withdraw(double amount, string account);

	/*
	Transfers money from one account to another.
	@param amount the amount to transfer.
	@param account which account to take from (goes to the other).
	*/
	void transfer(double amount, string account);

	//Prints the balances of a bank's accounts.
	void print_balances() const;

private:
Account checking;
Account savings;
};

#endif
