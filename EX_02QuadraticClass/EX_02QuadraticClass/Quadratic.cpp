#include <iostream>
#include "Quadratic.h"

double Quadratic :: getA() {
	return a;
}

double Quadratic :: getB() {
	return b;
}

double Quadratic :: getC() {
	return c;
}

double Quadratic :: getDiscriminant(double aFirst, double bSecond, double cThird) {
	discriminant = (bSecond*bSecond) - (4 * aFirst*cThird);

	return discriminant;
}

void Quadratic :: setA(double aFirst) {
	a = aFirst;
}

void Quadratic :: setB(double bSecond) {
	b = bSecond;
}

void Quadratic :: setC(double cThird) {
	c = cThird;
}

double Quadratic :: getRoot1(double aF, double bS, double cT) {
	Quadratic Q1;

	if (Q1.getDiscriminant(aF, bS, cT) < 0)
		return 0; 
	else
		root1 = (-bS + sqrt(Q1.getDiscriminant(aF, bS, cT))) / (2 * aF);

	return root1;
}

double Quadratic :: getRoot2(double aF, double bS, double cT) {
	Quadratic Q1;

	if (Q1.getDiscriminant(aF, bS, cT) < 0)
		return 0;
	else
		root2 = (-bS - sqrt(Q1.getDiscriminant(aF, bS, cT))) / (2 * aF);

	return root2;
}