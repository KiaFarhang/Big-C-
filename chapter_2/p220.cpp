#include <iostream>
#include <string>
#include "ccc_time.h"

using namespace std;

int main() {

	//Collect the due date from user input.

	cout << "When is your next assignment due? ";
	string due;
	cin >> due;

	//Chop the time into hours and minutes strings.
	string due_hours = due.substr(0,2);
	string due_minutes = due.substr(2,2);

	//Convert time strings into integers for object construction.
	int hours = stoi(due_hours);
	int minutes = stoi(due_minutes);

	//Construct due date and current time objects.

	Time due_date = Time(hours,minutes,0);
	Time now ;

	//Calculate the number of seconds until the assignment is due.

	int seconds_due = due_date.seconds_from(now);

	//Divide by 60 to get the number of minutes until assignment is due.

	int remaining = seconds_due / 60;

	cout << "Your assignment is due in " << remaining << " minutes.\n";

	return 0;
}
