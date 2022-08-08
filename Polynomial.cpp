#include "Polynomial.h"

#include <iostream>
using namespace std;

int Polynomial::maxDegree = 0;

//constructors:

Polynomial::Polynomial(int n) : degree(n), realDegree(0) {

	coefficients = new double[n + 1];

	for (int i = 0; i <= n; i++)
		coefficients[i] = 0;

}

Polynomial::Polynomial(double* arr, int n) : degree(n), realDegree(0) {

	coefficients = new double[n + 1];

	for (int i = 0; i <= degree; i++)
	{
		coefficients[i] = arr[i];	// copying arr to coefficients
		if (coefficients[i] != 0) realDegree = i;	// updating realDegree
	}

	maxDegree = maxDegree > realDegree ? maxDegree : realDegree;
}

Polynomial::Polynomial(const Polynomial& copy) :
	degree(copy.getDegree(false)), realDegree(copy.getDegree(true)) {

	// copying new coefficients array:
	coefficients = new double[degree + 1];

	for (int i = 0; i <= degree; i++)
		coefficients[i] = copy.getCoeff(i);

}

Polynomial::~Polynomial() { delete[] coefficients; }


// member functions:

int Polynomial::getDegree(bool what) const {

	if (what) return realDegree;
	return degree;

}

int Polynomial::getMaxDegree() { return maxDegree; }

double Polynomial::getCoeff(int n) const {

	if (n < 0) return -1234;	// validation of index
	return coefficients[n];

}

void Polynomial::setCoeff(int index, double coeff) {

	if (index >= 0) coefficients[index] = coeff;
	else return;	// validation of index

	// updating realDegree:
	realDegree = 0;
	for (int i = 0; i <= degree; i++)
		if (coefficients[i] != 0) realDegree = i;

}

void Polynomial::print() const {

	cout << "polynomial = " << coefficients[0];		// printing first num

	// printing until realDegree:
	for (int i = 1; i <= realDegree; i++)
		cout << " + " << coefficients[i] << "X^" << i;

	cout << endl;

}

