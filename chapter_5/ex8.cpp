#include <iostream>
#include "ex8.h"

using namespace std;

Car::Car(double car_efficiency)
{
	efficiency = car_efficiency;
	fuel = 0;
}

void Car::add_gas(double gas)
{
	fuel += gas;

}

double Car::get_gas() const
{
	return fuel;
}


void Car::drive(double miles)
{
	fuel -= (miles / efficiency);
}


int main()
{
	Car my_honda(28);
	my_honda.add_gas(12);

	cout << "Currently you have " << my_honda.get_gas() << " gallons in your tank." << endl;

	for (int i = 1; i < 50; ++i)
	{
		my_honda.drive(5);
		cout << "After driving " << i * 5 << " miles, you have " << my_honda.get_gas() << " gallons left. " << endl;
	}

	return 0;
}
