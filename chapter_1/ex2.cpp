#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello, my name is Hal!\n";
	cout << "What is your name?\n";

	string name;
	getline(cin, name);

	cout << "Hello, " << name << ". Glad to meet you!\n";

	return 0;
}
