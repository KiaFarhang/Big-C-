#include <iostream>
#include <vector>

using namespace std;

double scalar_product(vector<double> a, vector<double> b)
{
	double product = 0;
	for (int i = 0; i < a.size(); i++)
	{
		product += (a[i] * b[i]);
	}

	return product;
}

int main()
{
	vector<double> a(5);

	for (int i = 1; i < 6; i++)
	{
		a.push_back(i);
	}

	vector<double> b(5);

	for (int j = 1; j < 6; j++)
	{
		b.push_back(j);
	}

	cout << scalar_product(a, b) << endl;

	return 0;
}
