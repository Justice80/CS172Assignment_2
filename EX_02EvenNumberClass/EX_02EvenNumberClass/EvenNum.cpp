#include <iostream>
#include "EvenNum.h"

EvenNum :: EvenNum() {

	value = 0;

}

EvenNum :: EvenNum(int number) {

	if (number % 2 == 0)
		value = number;
	else {
		number++;
		value = number;
	}
}

int EvenNum :: getValue() {

	return value;

}

int EvenNum :: getNext() {

	int next;
	next = value + 2;

	return next;
}

int EvenNum :: getPrev() {

	int prev;
	prev = value - 2;

	return prev;
}

void EvenNum::setValue(int num) {
	if (num % 2 == 0)
		value = num;
	else {
		num++;
		value = num;
	}
}