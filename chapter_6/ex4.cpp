#include <iostream>
#include <vector>

using namespace std;

vector<int> append(const vector<int>& a, const vector<int>& b)
{
	vector<int> c;

	for(int i = 0; i < a.size(); i++)
	{
		c.push_back(a[i]);
	}

	for(int i = 0; i < b.size(); i++)
	{
		c.push_back(b[i]);
	}

	return c;
}

int main()
{
	vector<int> a, b;
	a.push_back(1);
	a.push_back(4);
	a.push_back(9);
	a.push_back(16);

	b.push_back(9);
	b.push_back(7);
	b.push_back(4);
	b.push_back(9);
	b.push_back(11);

	vector<int> c = append(a, b);

	for(int i = 0; i < c.size(); i++)
	{
		cout << c[i] << " ";
	}

	cout << endl;

	return 0;
}
