#include <iostream>

using namespace std;

/*
Sorts two numbers from smallest to largest.
@param a the first number.
@param b the second number.
*/

void sort2(int&a, int&b)
{
	if (a > b)
	{
		int x = a;
		a = b;
		b = c;
	}
}

int main()
{
	cout << "Enter the first integer. ";
	int a;
	cin >> a;

	cout << "Enter the second integer. ";
	int b;
	cin >> b;

	sort2(a, b);

	cout << a << " " <<  b << endl;

	return 0;
}
