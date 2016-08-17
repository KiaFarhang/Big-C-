#include <iostream>

using namespace std;

int main()
{
	//Collect an integer from the user.

	cout << "Please enter an integer. ";
	int number;
	cin >> number;

	int counter;

	cout << "Here are all the prime numbers up to your integer: \n";

	/*
	This problem requires a double loop. The first loop starts at the
	given number and works down. For each iteration, it runs its own
	loop. That secondary loop starts at 1 and checks every number
	betwen 1 and i (the first loop counter) for its divisibility by i.

	If j (the second loop) is only divisible by 1 and i, it's a prime
	number and we print it. This cycle continues until i reaches 0
	and we've checked every number below the one the user gave us.
	*/

	for (int i = number; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if ((i % j) == 0)
			{
				counter++;
			}
		}

		if (counter == 2)
		{
			cout << i << endl;
		}

		counter = 0;
	}

	return 0;
}
