#include <iostream>
#include <string>

using namespace std;

#include "ccc_time.h"

int main() {

	// Collect two times from user input.

	cout << "Please enter the first time. ";
	string first;
	cin >> first;

	cout << "Please enter the second time. ";
	string second;
	cin >> second;

	//Chop given times into hours and minutes.

	string first_hour = first.substr(0,2);
	string first_minute = first.substr(2,2);

	string second_hour = second.substr(0,2);
	string second_minute = second.substr(2,2);

	//Convert time strings into integers for object construction.

	int hour1 = stoi(first_hour);
	int minute1 = stoi(first_minute);
	int hour2 = stoi(second_hour);
	int minute2 = stoi(second_minute);

	//Construct two time integers from objects

	Time time_A(hour1,minute1,00);
	Time time_B(hour2,minute2,00);

	//Calculate difference between times in minutes and hours.

	int minute_difference = (time_B.seconds_from(time_A)) / 60;
	int hour_difference = minute_difference / 60;

	cout << "The second time is " << hour_difference << " hours and "
<< minute_difference % 60 << " minutes after the first time.\n";

	return 0;
}
