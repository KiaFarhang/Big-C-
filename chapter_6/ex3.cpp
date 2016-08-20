#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& a)
{
	vector<int> b;

	for(int i = a.size() - 1; i >= 0; i--)
	{
		b.push_back(a[i]);
	}

	a = b;
}

int main()
{
	vector<int> a;

	a.push_back(1);
	a.push_back(4);
	a.push_back(9);
	a.push_back(16);

	reverse(a);

	cout << a[0] << " " << a[1] << " "  << a[2] << " " << a[3] << endl;

	return 0;
}
