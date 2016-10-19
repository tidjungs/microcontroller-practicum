#include <avr/io.h>
#include <util/delay.h>
#include "peri.h"

int main() 
{
	init_peripheral();
	int i = 0;
	int isPlus = 0;
	while(1) {
		while(IS_SW_PRESSED()) {
			
			// check is plus
			if(isPlus == 0) {
				i++;
				isPlus = 1;
			}

			// check i > 7
			if(i == 8) {
				i = 0;
			}
		
		}

		while(!IS_SW_PRESSED()) {
			set_led_value(i);
			isPlus = 0;
		}
	}
}