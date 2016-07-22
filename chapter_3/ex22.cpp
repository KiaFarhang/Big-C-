#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Welcome to the game of Nim. You will play against a computer.
You must take at least one marble and as many as half of them from the pile.
The player who takes the last marble loses.\n";

	srand(time(0));

	int marbles = rand() % 91 + 10;

	int order = rand() % 2;

	int intelligence = rand() % 2;

	if(order == 0)
	{
		cout << "You go first.\n";

		while (marbles > 0)
		{
			cout << "How many marbles will you take?\n";
			int playerTake;
			cin >> playerTake;

			if(playerTake < 1 || playerTake > marbles / 2)
			{
				cout << "That's not a valid move.\n";
			}
			else
			{
				marbles -= playerTake;
			}


	return 0;
}
