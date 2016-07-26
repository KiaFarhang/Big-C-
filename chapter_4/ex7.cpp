#include <iostream>
#include <math.h>

using namespace std;

/*
Computes the volume of a sphere.
@param r the sphere's radius.
@return v the volume of the sphere.
*/
double sphere_volume(double r)
{
	double v = (4/3) * M_PI * pow(r, 3);
	return v;
}

/*
Computes the surface area of a sphere.
@param r the sphere's radius.
@return a the sphere's surface area.
*/
double sphere_surface(double r)
{
	double a = 4 * M_PI * pow(r, 2);
	return a;
}

/*
Computes the volume of a cylinder.
@param r the cylinder's radius.
@param h the cylinder's height.
@return v the cylinder's volume.
*/
double cylinder_volume(double r, double h)
{
	double v = M_PI * pow(r, 2) * h;
	return v;
}

/*
Calculates the surface area of a cylinder.
@param r the cylinder's radius.
@param h the cylinder's height.
@return a the cylinder's surface area.
*/
double cylinder_surface(double r, double h)
{
	double a = (2 * M_PI * r * h) + (2 * M_PI * pow(r, 2));
	return a;
}

/*
Calculates the volume of a cone.
@param r the cone's radius.
@param h the cone's height.
@return v the cone's volume.
*/
double cone_volume(double r, double h)
{
	double v = M_PI * pow(r, 2) * (h/3);
	return v;
}

/*
Calculates the surface area of a cone.
@param r the cone's radius.
@param h the cone's height.
@return a the cone's surface area.
*/
double cone_surface(double r, double h)
{
	double a = M_PI * r * (r + sqrt(pow(h, 2) + pow(r, 2)));
	return a;
}

int main()
{
	cout << "r = ";
	double r;
	cin >> r;

	cout << "h = ";
	double h;
	cin >> h;

	cout << "Sphere's volume: " << sphere_volume(r) << endl;
	cout << "Sphere's surface area: " << sphere_surface(r) <<  endl;
	cout << "Cylinder's volume: " << cylinder_volume(r, h) << endl;
	cout << "Cylinder's surface area: " << cylinder_surface(r, h) << endl;
	cout << "Cone's volume: " << cone_volume(r, h) << endl;
	cout << "Cone's surface area: " << cone_surface(r, h) << endl;

	return 0;
}
