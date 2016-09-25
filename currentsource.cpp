#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream> 
using namespace std;
void main() {
	string poly = "5X-5X^-2+10-5X+X^2";
	istringstream tokens(poly);
	char next_char;
	int exponent=0;
	int coffecient=0;
	while (tokens >> next_char) {
		if (next_char == '^') {
		
			exponent += next_char;
		}

		cout << next_char << endl;
	}

	system("pause");
}
