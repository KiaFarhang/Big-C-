#ifndef EX7_H
#define EX7_H

using namespace std;

class SodaCan
{
public:

	//Constructs a soda can object with given height and radius.
	SodaCan(double can_height, double can_radius);

	//Returns a can object's surface area.
	double get_surface_area() const;

	//Returns a can object's volume.
	double get_volume() const;

private:
double height;
double radius;
};


#endif
