/*
Name: Hamza Chaudhry, Fatima Mohamed, Niloofar Oliaei
Description:

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#include "Term.h"


int main() {
	cout << "Welcome to the polynomial adder. Please enter your first polynomial \n"
		     "term-by-term in the following fashion, 3x^2. To enter a new term in\n"
			 "your polynomial, press enter. To begin entering your second polynomial\n"
			 "type 'S' into your console.";
	string polyString = "";
	vector<Term> list;
	int index = 0;
	string expon;
	string coeff;
	while (polyString != "S" || "s") { // while we are not entering a new polynomial
		getline(cin, polyString);	// retrieve the next term
		int tempInd = polyString.find("^");
		if (tempInd != string::npos) { // if there is an exponent
			expon = polyString.substr(tempInd+1); // grab the exponent value
			coeff = polyString.substr(0, tempInd);
			if (coeff.find("X") != string::npos) {	// if coeff does have X in it
				coeff = coeff.substr(0,coeff.length()-1); // cleave off the X to get only coefficient int
			}
			cout << "The exponent is: " << expon;
			cout << "The coefficient is: " << coeff;
		}
	}
	

	/*getline(cin, polyString);
	cout << "The polynomial got stored as " << polyString;

	int poly1Len = polyString.length() -1;
	int index = 0;
	int terms = 1;

	while (index <= poly1Len) {
		// Check to to find +, means new term is defined
		if (polyString[index] == '+') {
			terms++;
		}
		// Multiple exceptions for -
		if (polyString[index] == '-') {
			if (isdigit(polyString[index - 1])) {
				terms++;
			}
			if (polyString[index - 1] == 'X' || 'x') {
				terms++;
			}
		}
		index++;
	}

	cout << "There are " << terms << " terms.";*/
	int age;
	cin >> age;
	
	return 0;
}
