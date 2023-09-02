#include "Warning.h"


void warning_lamp( uint8_t	Led,uint8_t blink_delay )
{
	uint32_t loop=Led_loop_count;
	while(loop){
		Led=ON;
	  delay_ms(blink_delay);
		Led=OFF;
	  loop--;
	}