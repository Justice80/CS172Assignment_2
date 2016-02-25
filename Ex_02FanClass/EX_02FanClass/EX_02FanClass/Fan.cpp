#include <string>
#include "Fan.h"

// Default fan settings
Fan::Fan() {
	speed = 1;
	on = false;
	radius = 5;
}

Fan::Fan(int fanSpeed, bool fanOn, double fanRadius) {
	speed = fanSpeed;
	on = fanOn;
	radius = fanRadius;
}

// Get fan speed
int Fan::getSpeed() {
	return speed;
}

// See if fan is on
bool Fan::getOn() {
	return on;
}

// get fan radius
double Fan::getRadius() {
	return radius;
}

// set the speed of the fan 
void Fan::setSpeed(int fanSpeed) {
	if (fanSpeed >= 1 && fanSpeed <= 3)
		speed = fanSpeed;
	else
		speed = 1;
}

void Fan::setOn(bool fanOn) {
	on = fanOn;
}

void Fan::setRadius(double fanRadius) {
	radius = fanRadius;
}



