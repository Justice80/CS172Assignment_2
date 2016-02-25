#include <iostream>
#include "EvenNum.h"

using namespace std;

int main() {

	EvenNum E1;
	int Evn;
	cout << "Enter a number: ";
	cin >> Evn;

	E1.setValue(Evn);

	cout << E1.getValue() << " The previous even number is " << E1.getPrev() <<
		" the next even number is " << E1.getNext() << endl;

	return 0;
}