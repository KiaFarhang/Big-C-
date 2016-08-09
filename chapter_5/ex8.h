#ifndef EX8_H
#define EX8_H

class Car
{
public:

	//Constructs a car with given efficiency.
	Car(double efficiency);

	//Adds fuel to the gas tank.
	void add_gas(gas);

	//Returns the gas left in the tank.
	double get_gas() const;

	

private:
double efficiency;
double fuel;
}

#endif
