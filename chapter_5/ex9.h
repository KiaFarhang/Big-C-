#ifndef EX9_H
#define EX9_H

#include <string>

using namespace std;

class Country
{
public:

	/*
	Constructs a country.
	@param name the country's name.
	@param population the country's population.
	@param area the country's area.
	*/
	Country(string name, double area, double population);

	//Reads in a country.
	void read();

	/*
	Compares two country objects by area.
	@param b the country to compare with this one.
	@return true if this country is bigger than b.
	*/
	bool is_bigger_than(Country b) const;

	/*
	Compares two country objects by population.
	@param b the country to compare with this one.
	@return true if this country is bigger than b.
	*/
	bool is_more_populous(Country b) const;

	/*
	Compares two country objects by population density.
	@param b the country to compare with this one.
	@return true if this country's population density > b's.
	*/
	bool is_denser_than(Country b) const;

	//Prints a country's name.
	string print() const;

private:
	string name;
	double area;
	double population;
	double density;
};

#endif
