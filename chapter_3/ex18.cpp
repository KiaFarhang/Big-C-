#include <iostream>

using namespace std;

int main()
{
	/* Set a counter variable, your first two sequence numbers
	and the variable to hold the new number.
	*/

	int counter = 0;
	int fold1 = 0;
	int fold2 = 1;
	int fnew = fold1 + fold2;

	//Print those first two sequence numbers.

	cout << fold1 << "\n" << fold2 << "\n";

	/* This while loop runs 20 times, printing fnew and then recalculating
	the three non-counter variables before incrementing counter.*/

	while (counter < 20)
	{
		cout << fnew << "\n";
		fold1 = fold2;
		fold2 = fnew;
		fnew = fold1 + fold2;
		counter++;
	}

	return 0;
}
