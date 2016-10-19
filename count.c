#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main() 
{
	init_peripheral();
	int i = 0;
	while(1) {
		set_led_value(i);
		if(++i == 8) {
			i = 0;
		}
		_delay_ms(500);
	}
}