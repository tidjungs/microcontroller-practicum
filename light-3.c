#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main() 
{
	init_peripheral();
	uint16_t result;
	while(1){
		result = read_adc(PC4);
		if(result > 680) {
			set_led_value(0b100);
		} else if(result > 340) {
			set_led_value(0b010);
		} else {
			set_led_value(0b001);
		}
	}
}