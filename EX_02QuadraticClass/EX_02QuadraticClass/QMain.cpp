/*
Justice Martinez
CS 172 HW #2
EX02 Quadratic Class
*/

#include <iostream>
#include "Quadratic.h"

using namespace std;

int main() {

	Quadratic Q1;
	double a, b, c;
	cout << "Enter 3 random numbers: ";
	cin >> a >> b >> c;
	Q1.setA(a);
	Q1.setB(b);
	Q1.setC(c);

	if (Q1.getDiscriminant(a, b, c) < 0)
		cout << "There are no roots\n";

	if (Q1.getDiscriminant(a, b, c) == 0)
		cout << "The root is " << Q1.getRoot1(a, b, c) << endl;

	if (Q1.getDiscriminant(a, b, c) > 0) {
		cout << "The first root is " << Q1.getRoot1(a, b, c) << endl;
		cout << "The second root is " << Q1.getRoot2(a, b, c) << endl;
	}

	return 0;
}