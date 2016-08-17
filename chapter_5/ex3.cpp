#include <iostream>
#include <string>
#include "ex3.h"

using namespace std;

Address::Address(int address_house, string address_street, string address_city, string address_state, int address_code)
{
	number = address_house;
	street = address_street;
	apartment_number = 0;
	city = address_city;
	state = address_state;
	postal_code = address_code;
}

Address::Address(int address_house, string address_street, int address_apartment, string address_city, string address_state, int address_code)
{
	number = address_house;
	street = address_street;
	apartment_number = address_apartment;
	city = address_city;
	state = address_state;
	postal_code = address_code;
}

void Address::print()
{
	if(apartment_number > 0)
	{
		cout << number << " " << street << ", #" <<
		apartment_number << endl;
		cout << city << ", " << state << " " << postal_code << endl;
	}
	else
	{
		cout << number << " " << street << endl;
		cout << city << ", " << state << " " << postal_code << endl;
	}
}

bool Address::comes_before(Address b) const
{
	if (postal_code < b.postal_code) return true;

	return false;
}

int main()
{

	Address a(1453, "Apocryphal Avenue", 5, "Fakerland", "CA", 92333);

	Address b(123, "Fake Street", "Fakersville", "IL", 66602);

	a.print();

	b.print();

 	if(a.comes_before(b) == true)
	{
		cout << "The first address comes first." << endl;

	}
	else
	{
		cout << "The second address comes first." << endl;
	}

	return 0;
}
