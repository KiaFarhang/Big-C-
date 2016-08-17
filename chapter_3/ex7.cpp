#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Collect three strings from user input.

	string a, b, c;

	cout << "Please enter three strings. ";
	cin >> a >> b >> c;

	// > = comes after
	// < = comes before

	if (a > b)
	{
		if (b > c)
		{
			cout << c << " " << b << " " << a << endl;
		}
		else
		{
			cout << b << " " << c << " " << a << endl;
		}
	}

	else {
		if (a > c)
		{
			cout << c << " " << a << " " << b << endl;
		}
		else {
			cout << a << " " << c << " " << b << endl;
		}
	}
	return 0;
}
