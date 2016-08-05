#include <iostream>
#include <cmath>
#include "ex7.h"

using namespace std;

SodaCan::SodaCan(double can_height, double can_radius)
{
	height = can_height;
	radius = can_radius;
}

double SodaCan::get_surface_area() const
{
	return (2 * M_PI * radius * height) + (2 * M_PI * (radius * radius));
}

double SodaCan::get_volume() const
{
	return M_PI * (radius * radius) * height;
}

int main()
{
	cout << "What is the height of your soda can? ";
	double can_height;
	cin >> can_height;

	cout << "What is the can's radius? ";
	double can_radius;
	cin >> can_radius;

	SodaCan a(can_height, can_radius);

	cout << "Your can's surface area is " << a.get_surface_area() << endl;

	cout << "Your can's volume is " << a.get_volume() << endl;

	return 0;
}
