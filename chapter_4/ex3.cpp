#include <iostream>

using namespace std;

/*
Sorts two numbers from smallest to largest.
@param a the first number.
@param b the second number.
*/

void sort2(int& a, int& b)
{
	if (a > b)
	{
		int x = a;
		a = b;
		b = x;
	}
}

/*
Sorts three numbers from smallest to largest.
@param a the first number.
@param b the second number.
@param c the third number.
*/
void sort3(int& a, int& b, int& c)
{
	sort2(a, b);
	sort2(b, c);
	sort2(a, b);

}

int main()
{

	int a = 45;
	int b= 8;
	int c = 4;

	sort3(a, b, c);

	cout << a << " " << b << " " << c << endl;

	return 0;
}

