#include <iostream>
#include <string>

using namespace std;

int main()
{

	//Collect a number from user input.

	cout << "Please enter a number from 1 to 3,999.\n";
	int num;
	cin >> num;

	//Create a string to hold your Roman numeral.
	string roman;

	//Test whether number can be represented w/Roman numerals.

	if (num > 3999)
	{
		cout << "Sorry, your number is too big.\n";
	}

	/*

	This code uses integer division and nested if statements to solve the problem.
	It converts each place of the given number one by one - first the thousands, then hundreds, etc.
	Every time it makes a conversion, it adds to the string and  decrements the given number.
	This way the number flows down the program, getting smaller until it's finally just one digit.

	*/

	else if (num >= 1000 && num < 4000)
	{
		 if (num / 1000 == 3)
		{
			roman += "MMM";
			num -= 3000;
		}
		else if (num / 1000 == 2)
		{
			roman += "MM";
			num -= 2000;
		}
		else if (num / 1000 == 1)
		{
			roman += "M";
			num -= 1000;
		}
	}

	if (num >= 100 && num < 1000)
	{
		if (num >= 900)
		{
			roman += "CM";
			num -= 900;
		}
		if (num >= 800)
		{
			roman += "DCCC";
			num -= 800;
		}
		if (num >= 700)
		{
			roman += "DCC";
			num -= 700;
		}
		if (num >= 600)
		{
			roman += "DC";
			num -= 600;
		}
		if (num >= 500)
		{
			roman += "D";
			num -= 500;
		}
		if (num >= 400)
		{
			roman += "CD";
			num -= 400;
		}
		if (num >= 300)
		{
			roman += "CCC";
			num -= 300;
		}
		if (num >= 200)
		{
			roman += "CC";
			num -= 200;
		}
		if (num >= 100)
		{
			roman += "C";
			num -= 100;
		}
	}

	if(num >= 10 && num < 100)
	{
		if (num >= 90)
		{
			roman += "XC";
			num -= 90;
		}
		if (num >= 80)
		{
			roman += "LXXX";
			num -= 80;
		}
		if (num >= 70)
		{
			roman += "LXX";
			num -= 70;
		}
		if (num >= 60)
		{
			roman += "LX";
			num -= 60;
		}
		if (num >= 50)
		{
			roman += "L";
			num -= 50;
		}
		if (num >= 40)
		{
			roman += "XL";
			num -= 40;
		}
		if (num >= 30)
		{
			roman += "XXX";
			num -= 30;
		}
		if (num >= 20)
		{
			roman += "XX";
			num -= 20;
		}
		if (num >= 10)
		{
			roman += "X";
			num -= 10;
		}
	}

	if (num >= 1 && num < 10)
	{
		if (num == 9)
		{
			roman += "IX";
		}
		if (num == 8)
		{
			roman += "VIII";
		}
		if (num == 7)
		{
			roman += "VII";
		}
		if (num == 6)
		{
			roman += "VI";
		}
		if (num == 5)
		{
			roman += "V";
		}
		if (num == 4)
		{
			roman += "IV";
		}
		if (num == 3)
		{
			roman += "III";
		}
		if (num == 2)
		{
			roman += "II";
		}
		if (num == 1)
		{
			roman += "I";
		}
	}
	cout << roman << endl;

	return 0;
}
