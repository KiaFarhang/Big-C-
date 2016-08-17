#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	cout << "Integer, please. ";
	string number;
	cin >> number;
	int len = number.length();

	char *y = new char[number.length() +1];

	strcpy(y, number.c_str());
	string b = " ";

	cout << y[0] + b + y[1] + b + y[2] + b + y[3] + b + y[4] + "\n";
	return 0;
}
