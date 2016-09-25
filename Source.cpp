/*
Name: Hamza Chaudhry, Fatima Mohamed, Niloofar Oliaei
Description:

*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
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
			if (coeff.find("X") != string::npos || NULL) {	// if coeff does have X in it
				coeff = coeff.substr(0,coeff.length()-1); // cleave off the X to get only coefficient int
			}
			else { // otherwise it has no X but it does have an exponent
				coeff = polyString.substr(0, tempInd);
			}
		}
		else { // the term has no exponent
			expon = "1";
			if (polyString.find("X") || polyString.find("x") != string::npos) { // if value does have X in it
				coeff = coeff.substr(0, coeff.length() - 1); // cleave off the X to get only coefficient int
			}
			else {	// there is no X, only the value.
				coeff = polyString;
			}
		}
		int coeffInt = stoi(coeff);
		int exponInt = stoi(expon);

		Term monomial = Term(coeffInt, exponInt);
		list.push_back(monomial);
	}
	if (polyString == "S" || "s") {
		cout << "You may now enter your second polynomial term-by-term, pressing enter to add a new term. Type 'e' to evaluate your polynomials." << endl;
		while (polyString != "E" || "e") {
			getline(cin, polyString);	// retrieve the next term
			int tempInd = polyString.find("^");
			if (tempInd != string::npos) { // if there is an exponent
				expon = polyString.substr(tempInd + 1); // grab the exponent value
				coeff = polyString.substr(0, tempInd);
				if (coeff.find("X") != string::npos || NULL) {	// if coeff does have X in it
					coeff = coeff.substr(0, coeff.length() - 1); // cleave off the X to get only coefficient int
				}
				else { // otherwise it has no X but it does have an exponent
					coeff = polyString.substr(0, tempInd);
				}
			}
			else { // the term has no exponent
				expon = "1";
				if (polyString.find("X") || polyString.find("x") != string::npos) { // if value does have X in it
					coeff = coeff.substr(0, coeff.length() - 1); // cleave off the X to get only coefficient int
				}
				else {	// there is no X, only the value.
					coeff = polyString;
				}
			}
			int coeffInt = stoi(coeff);
			int exponInt = stoi(expon);

			Term monomial = Term(coeffInt, exponInt);
			list.push_back(monomial);
		}
	}
	for (int i = 0; i < list.size(); i++) {
		//cout << "The term is: " << 
	}

	int age;
	cin >> age;
	
	return 0;
}
