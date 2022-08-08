#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
using namespace std;

class Polynomial
{

public:
	Polynomial(int = 0);	// default constructor
	Polynomial(double*, int);
	Polynomial(const Polynomial&);	// copy constructor
	~Polynomial();

	static int getMaxDegree();
	int getDegree(bool) const;
	double getCoeff(int) const;
	void setCoeff(int, double);
	void print() const;

private:
	int degree;
	int realDegree;
	double* coefficients;
	static int maxDegree;

};


#endif // !POLYNOMIAL_H