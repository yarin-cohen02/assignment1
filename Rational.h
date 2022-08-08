#ifndef RATIONAL_H
#define RATIONAL_H

#include "Polynomial.h"
#include <iostream>
using namespace std;

class Rational
{
public:
	Rational();	// default constructor
	Rational(Polynomial& const, Polynomial& const);
	~Rational();

	Polynomial getNom() const;
	Polynomial getDenom() const;
	void print() const;

private:
	Polynomial nom;
	Polynomial denom;
};


#endif // !RATIONAL_H