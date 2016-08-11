#ifndef EX8_H
#define EX8_H

class Car
{
public:

	//Constructs a car with given efficiency.
	Car(double car_efficiency);

	//Adds fuel to the gas tank.
	void add_gas(double gas);

	//Returns the gas left in the tank.
	double get_gas() const;

	//Drives the car x distance.
	void drive(double miles);

private:
double efficiency;
double fuel;
};

#endif
