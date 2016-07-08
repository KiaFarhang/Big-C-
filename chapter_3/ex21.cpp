#include <iostream>

using namespace std;

int main()
{
	//Collect an integer from the user.

	cout << "Please enter an integer. ";
	int number;
	cin >> number;

	cout << "Here are all the prime numbers up to your integer: \n";

	/* This for statement starts at 1 and ends after reaching the given
	integer. For each number, it checks whether the number is prime
	and prints it if so.
	*/

	for (i = 1; i <= number; i++)
	{
		int check = i %
