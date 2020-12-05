#include <mbed.h>
#include "LED.cpp"

DigitalOut tesLED(LED3);

int main()
{
	while (1)
	{
		tesLED = 1;
		wait(2);
		tesLED = 0;
		wait(1);
	}
}