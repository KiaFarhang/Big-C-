#include <iostream>
#include <string>

using namespace std;


/*
Tells user how to boil water.
*/
void boilWater()
{
	cout << "Do you have a microwave? (y/n) ";
	string q3;
	cin >> q3;

	if(q3 == "y")
	{
		cout << "Fill a cup with water." << endl << "Put the cup in the microwave. " << endl << "Heat for three minutes. " << endl;
	}
	else
	{
		cout << "Fill a kettle with water. " << endl << "Bring the water to a boil." << endl;
	}
}

/*
Walks the user through making instant coffee.
*/
void instantCoffee()
{
	boilWater();

	cout << "Mix the water and instant coffee. You're done!\n";
}

/*
Asks someone else to make coffee for you.
*/
void askCoffee()
{
	cout << "Ask someone else to make coffee for you." << endl << "You're done!\n";
}

/*
How to grind coffee beans.
*/
void grindBeans()
{
	cout << "Add coffee beans to your grinder.\n";
	cout << "Grind for 60 seconds.\n";
}

/*
Gives instructions to brew coffee.
*/
void brewCoffee()
{
	cout << "Add water to your coffee maker.\n";
	cout << "Add a filter to your coffee maker.\n";

	grindBeans();

	cout << "Add coffee beans to the filter.\n";
	cout << "Turn the coffee maker on. You're done!\n";
}

/*
Begins the coffee-making process.
*/
void makeCoffee()
{
	cout << "Okay. Do you have instant coffee? (y/n) ";
	string q2;
	cin >> q2;

	if(q2 == "y")
	{
		instantCoffee();
	}
	else
	{
		brewCoffee();
	}
}

int main()
{
	cout << "So you want some coffee." << endl << "Is there anyone you can have make it for you? (y/n) ";
	string q1;
	cin >> q1;

	if (q1 == "y")
	{
		askCoffee();
	}
	else
	{
		makeCoffee();
	}

	return 0;
}
