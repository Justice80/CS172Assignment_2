/*
Justice Martinez
CS 172 HW #2
EX02 Fan Class
*/

#include <iostream>
#include <string>
#include <cctype>
#include "Fan.h"

using namespace std;

int main() {

	string pwr, pwr2;
	Fan f1(3, true, 10);
	Fan f2(2, false, 5);

	if (f1.getOn() == true)
		pwr = "on";
	else
		pwr = "off";

	if (f2.getOn() == true)
		pwr2 = "on";
	else
		pwr2 = "off";

	cout << "Fan 1 is currently " << pwr << " and is set to speed " << 
		f1.getSpeed() << ". The fan also has a radius of " <<
		f1.getRadius() << "in.\n";

	cout << "Fan 2 is currently " << pwr2 << " and is set to speed " <<
		f2.getSpeed() << ". The fan also has a radius of " <<
		f2.getRadius() << "in.\n";

	return 0;
}