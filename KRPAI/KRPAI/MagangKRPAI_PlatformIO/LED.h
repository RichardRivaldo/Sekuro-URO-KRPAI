#ifndef LED_H
#define LED_H

#include <mbed.h>

class LED {
	public:
		LED(int pinNum);
	private:
		int pinNum;
};

#endif