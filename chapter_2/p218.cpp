#include <iostream>
#include <string>

using namespace std;

int main() {
	const string LETTER_H = "*    *\n*    *\n******\n*    *\n*    *\n\n";
	const string LETTER_E = "******\n*\n******\n*\n******\n\n";
	const string LETTER_L = "*\n*\n*\n*\n******\n\n";
	const string LETTER_O = "******\n*    *\n*    *\n*    *\n******\n\n";
	cout << LETTER_H + LETTER_E + LETTER_L + LETTER_L + LETTER_O;

	return 0;
}
