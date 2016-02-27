#ifndef QUADRATIC_H_
#define QUADRATIC_H_

#include <iostream>

class Quadratic {
private:
	double a;
	double b;
	double c;
	double discriminant;										
	double root1;
	double root2;
public:
	double getA();
	double getB();
	double getC();
	double getDiscriminant(double a, double b, double c);
	double getRoot1(double a, double b, double c);                 /*  ---Joseph--- Not in the UML. Make sure to update the UML after you have finished coding. (-1) */
	double getRoot2(double a, double b, double c);
	void setA(double a);
	void setB(double b);
	void setC(double c);
};

#endif 