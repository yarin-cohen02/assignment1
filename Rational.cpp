#include "Rational.h"
#include <iostream>
using namespace std;


Rational::Rational() : nom(), denom() {

	denom.setCoeff(0, 1);

}

Rational::Rational(Polynomial& const a, Polynomial& const b) : nom(a), denom(b) {}

Rational::~Rational() {}

Polynomial Rational::getNom() const { return nom; }

Polynomial Rational::getDenom() const { return denom; }

void Rational::print() const {

	cout << endl;
	nom.print();
	cout << "             ------------------------------" << endl;
	denom.print();
	cout << endl;

}
