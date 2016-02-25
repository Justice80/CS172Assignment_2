#ifndef FAN_H_
#define FAN_H_

class Fan {
private:
	int speed;
	bool on;
	double radius;
public:
	Fan();
	Fan(int speed, bool on, double radius);
	int getSpeed();
	bool getOn();
	double getRadius();
	void setSpeed(int speed);
	void setOn(bool on);
	void setRadius(double radius);
};

#endif