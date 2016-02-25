#ifndef EVENNUM_H_
#define EVENNUM_H_
#include <iostream>

class EvenNum {
private:
	int value;
public:
	EvenNum();
	EvenNum(int number);
	int getValue();
	int getNext();
	int getPrev();
	void setValue(int num);
};

#endif