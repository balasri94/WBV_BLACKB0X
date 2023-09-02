#include<stdint.h>

#define R_led port1.1;
#define Y_led port1.2;
#define B_led port1.3;


#define Blink_1 100;
#define Blink_7 700;
#define Blink_20 2000;
#define Led_loop_count 500000000

enum led_state {OFF,ON};

void warning_lamp( uint8_t	Led,uint8_t blink_delay );
