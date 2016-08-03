#ifndef EX3_H
#define EX3_H

#include <string>

using namespace std;

class Address
{
public:
	//Constructs an address without an apartment number (initializes to 0)
	Address(int adrress_number, string address_street, string address_city, string address_state, int address_code);

	//Constructs an address with an apartment number
	Address(int address_number, string address_street, int address_apartment, string address_city, string address_state, int address_code);

	//Prints an address
	void print();

	//Compares whether an address comes before another by postal code
	bool comes_before(Address b) const;

private:
int number;
string street;
int apartment_number;
string city;
string state;
int postal_code;
};

#endif
