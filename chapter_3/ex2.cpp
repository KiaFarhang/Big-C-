#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Collect the card from user input.
	cout << "Please enter the card value. ";
	string card;
	cin >> card;

	//Buy me a dog/face and suit.

	string face = card.substr(0,1);
	string suit = card.substr(1,1);

	//Create output strings.
	string face_output;
	string suit_output;

	//Chain if-else statements to set the two output strings.
	if (face == "A")
	{
		face_output = "Ace ";
	}
	else if (face == "2")
	{
		face_output = "Two ";
	}
	else if (face == "3")
	{
		face_output = "Three ";
	}
	else if (face == "4")
	{
		face_output = "Four ";
	}
	else if (face == "5")
	{
		face_output = "Five ";
	}
	else if (face == "6")
	{
		face_output = "Six ";
	}
	else if (face == "7")
	{
		face_output = "Seven ";
	}
	else if (face == "8")
	{
		face_output = "Eight ";
	}
	else if (face == "9")
	{
		face_output = "Nine ";
	}
	else if (face == "10")
	{
		face_output = "Ten ";
	}
	else if (face == "J")
	{
		face_output = "Jack ";
	}
	else if (face == "Q")
	{
		face_output = "Queen ";
	}
	else if (face == "K")
	{
		face_output = "King ";
	} else
	{
		cout << "Please enter a valid card. ";
	}

	if (suit == "D")
	{
		suit_output = "Diamonds";
	}
	else if (suit == "H")
	{
		suit_output = "Hearts";
	}
	else if (suit == "S")
	{
		suit_output = "Spades";
	}
	else if (suit == "C")
	{
		suit_output = "Clubs";
	}
	else
	{
		cout << "Please enter a valid card. ";
	}

	//Output the card.

	cout << face_output << "of " << suit_output << "\n";

	return 0;
}
