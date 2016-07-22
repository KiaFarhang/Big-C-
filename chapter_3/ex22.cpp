#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Welcome to the game of Nim. You will play against a computer. You must take at least one marble and as many as half of them from the pile." << endl << endl <<  "The player who takes the last marble loses." << endl;

	srand(time(0));

	int marbles = rand() % 91 + 10;

	int order = rand() % 2;

	int intelligence = rand() % 2;

	int counter = 0;

	int playerTake = 0;

	cout << "\nWe will start with " << marbles << " marbles in the pile.\n";

	if(order == 0)
	{

		cout << "\nYou go first.";

		while(counter == 0)
		{
			cout << "\nHow many marbles will you take?\n";
			cin >> playerTake;

			if(playerTake < 1 || playerTake > marbles /2)
			{
				cout << "\nThat's not a valid move.";
			}
			else
			{

				marbles -= playerTake;
				playerTake = 0;
				counter++;
			}
		}
	}
	else
	{
		cout << "\nThe computer goes first.\n";
	}

	while (marbles > 0)
	{
		if(intelligence == 0) //Computer smart mode.
		{
			if(marbles >= 64)
			{
				marbles = 63;
				counter++;
			}
			else if(marbles > 31 && marbles < 63)
			{
				marbles = 31;
				counter++;
			}
			else if(marbles > 15 && marbles < 31)
			{
				marbles = 15;
				counter++;
			}
			else if(marbles > 7 && marbles < 15)
			{
				marbles = 7;
				counter++;
			}
			else if(marbles > 3 && marbles < 7)
			{
				marbles = 3;
				counter++;
			}
			else if(marbles == 1)
			{
				marbles = 0;
				counter++;
			}
			else
			{
				marbles -= rand() % (marbles/2) + 1;
				counter++;
			}
		}
		else //Computer dumb mode
		{
			if (marbles == 1)
			{
				marbles = 0;
				counter++;
			}
			else
			{
				marbles -= rand() % (marbles/2) +1;
				counter++;
			}
		}


		if (marbles > 0)
		{

			playerTake = 0;

			while(playerTake == 0)
			{

				cout << "\nAfter the computer's move, there are " << marbles << " marbles in the pile. How many will you take?\n";
				cin >> playerTake;

				if(playerTake < 1 || playerTake > marbles / 2 && marbles != 1)
				{
					cout << "\nThat's not a valid move.";
					playerTake = 0;
				}
				else
				{
					marbles -= playerTake;
					counter++;
				}
			}
		}
	}

	if(order == 0 && counter % 2 != 0)
	{
		cout << "You lost. Machines rule.\n";
	}
	else if(order == 1 && counter % 2 == 0)
	{
		cout << "You lost. Machines rule.\n";
	}
	else
	{
		cout << "You won. Humanity escapes the machine.\n";
	}

	return 0;
}
