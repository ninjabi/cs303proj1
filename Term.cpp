#include "Term.h"
#include <cmath>



Term::Term(int coeff, int expo)
{
	coefficient = coeff;
	exponent = expo;
}


Term::~Term()
{
	// Do later;
}

bool operator== (const Term &t1, const Term &t2) {
	return (t1.coefficient == t2.coefficient && t1.exponent == t2.exponent);
}

bool operator!= (const Term &t1, const Term &t2) {
	return (t1.coefficient != t2.coefficient && t1.exponent == t2.exponent);
}

bool operator> (const Term &t1, const Term &t2) {
	int term1 = pow(t1.coefficient, t1.exponent);
	int term2 = pow(t2.coefficient, t2.exponent);
	return(term1 > term2);
}

bool operator< (const Term &t1, const Term &t2) {
	int term1 = pow(t1.coefficient, t1.exponent);
	int term2 = pow(t2.coefficient, t2.exponent);
	return(term1 < term2);
}
