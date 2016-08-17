#include <iostream>
#include <cassert>

using namespace std;

void mysort(int a[], int len)
{

	int next;

	for(int i = 0; i < len; i++)
	{
		

}

int main()
{
	int a[] = {4, 9, -2, 3, 1, 0, 5};

	mysort(a, 7);

	assert(a[0] == -2);

	return 0;
}
