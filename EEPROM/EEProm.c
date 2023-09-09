#include "EEProm.h"

bool write_to_EE(char sens_fault_ID)
{
    EEDATA = sens_fault_ID;
    // v = HAL_i2c_eeprom_write(eeprom_addr,mem_addr,sens_fault_ID);
    if(ack==1)
	    return true;
    else
	    return false;
}
uint32_t read_from_EE(void)
{
		//EEADR = address;
    uint16_t EEDATA;
		EEDATA	= hal_i2c_eeprom_read(address);
	
    return EEDATA;
}
