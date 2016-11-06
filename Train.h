/*
	Train.h - Library for controlling model trains.
	Created by Anthony Caravello, 10/13/2016
	Released into the public domain
*/

#ifndef Train_h
#define Train_h

#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_DCMotor *track1 = controller.getMotor(2);
class Train {
	public:
		Train(int trackID);
		void setSpeed(int newSpeed);
		int getSpeed();
		void setDirection(enum direction);
		char getDirection();
	private:
		Adafruit_MotorShield controller = Adafruit_MotorShield();
		Adafruit_DCMotor *track1;
		int speed;
		enum direction {
			FORWARD,
			BACKWARD
		};
		int acceleration;
}

#endif
