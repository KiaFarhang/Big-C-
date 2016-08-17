#include <iostream>
#include <string>
#include "ex9.h"

using namespace std;

Country::Country(string name, double area, double population)
{
	this->name = name;
	this->area = area;
	this->population = population;
	density = population / area;
}

void Country::read()
{
	cout << "Please enter the country name: ";
	getline(cin, name);
	cout << "Please enter the country's area: ";
	cin >> area;
	cout << "Please enter the country's population: ";
	cin >> population;
	string remainder; //Read remainder of line
	getline(cin, remainder);
}

bool Country::is_bigger_than(Country b) const
{
	return area > b.area;
}

bool Country::is_more_populous(Country b) const
{
	return population > b.population;
}

bool Country::is_denser_than(Country b) const
{
	return density > b.density;
}

string Country::print() const
{
	return name;
}

int main()
{

	string first_name;
	double first_area;
	double first_population;

	cout << "Please enter your first country's name: ";
	getline(cin, first_name);

	cout << "Enter the country's area: ";
	cin >> first_area;

	cout << "Enter the country's population: ";
	cin >> first_population;

	Country a(first_name, first_area, first_population);

	string second_name;
	double second_area;
	double second_population;

	cout << "Please enter your second country's name: ";
	getline(cin, second_name);

	cout << "Please enter the country's area: ";
	cin >> second_area;

	cout << "Please enter the country's population: ";
	cin >> second_population;

	Country b(second_name, second_area, second_population);

	if(a.is_bigger_than(b))
	{
		cout << "The country with the largest area is " << a.print() << endl;
	}
	else
	{
		cout << "The country with the largest area is " << b.print() << endl;
	}

	if(a.is_more_populous(b))
	{
		cout << "The most populous country is " << a.print() << endl;
	}
	else
	{
		cout << "The most populous country is " << b.print() << endl;
	}

	if(a.is_denser_than(b))
	{
		cout << "The most densely populated country is " << a.print() << endl;
	}
	else
	{
		cout << "The most desnely populated country is " << b.print() << endl;
	}

	return 0;
}
