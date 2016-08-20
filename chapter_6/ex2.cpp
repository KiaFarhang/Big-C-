#include <iostream>
#include <vector>

using namespace std;

int altSum(const vector<int>& a)
{
	int sum = a[0];

	for (int i = 1; i < a.size(); i++)
	{
		if (i % 2 == 0)
		{
			sum += a[i];
		}
		else
		{
			sum -= a[i];
		}

	}

	return sum;
}

int main()
{
	vector<int> a;
	a.push_back(1);
	a.push_back(4);
	a.push_back(9);
	a.push_back(16);
	a.push_back(9);
	a.push_back(7);
	a.push_back(4);
	a.push_back(9);
	a.push_back(11);

	cout << altSum(a) << endl;

	return 0;
}
