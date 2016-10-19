#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main() 
{
	init_peripheral();
	uint16_t result;
	while(1){
		
		result = read_adc(PC4);

		int i = 0;
		while(i++ <= 8) {
			if(result < 128 * i) {
				set_led_value(i-1);
			}
		}	
	}
}