#pragma once
class Term
{
public:
	Term(int coeff, int expo);
	~Term();
	friend bool operator== (const Term &t1, const Term &t2);
	friend bool operator!= (const Term &t1, const Term &t2);
	friend bool operator> (const Term &t1, const Term &t2);
	friend bool operator<(const Term &t1, const Term &t2);
private:
	int coefficient;
	int exponent;
};
