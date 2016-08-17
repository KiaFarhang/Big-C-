#include <iostream>
#include <string>

using namespace std;

int main() {

	string month = "January  February March    April    May      June     July     August   SeptemberOctober  November December ";

	cout << "Enter a number from 1 to 12 corresponding to a month. ";
	int input;
	cin >> input;

	cout << "Your month is " << month.substr(((input - 1) * 9) ,9) << ".\n";

	return 0;
}
