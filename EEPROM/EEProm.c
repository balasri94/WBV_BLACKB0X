#include "EEProm.h"

void write_to_EE(char sens_fault_ID)
{
    EEDATA = sens_fault_ID;
}
uint16_t read_from_EE(void)
{
		//EEADR = address;
    uint16_t EEDATA;
		EEDATA	= hal_i2c_eeprom_read(address);
    return EEDATA;
}
