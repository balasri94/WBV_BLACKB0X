#include "EEProm.h"

 uint32_t write_to_EE(char sens_fault_ID)
{
    EEDATA = sens_fault_ID;
    HAL_i2c_eeprom_write(eeprom_addr,mem_addr,sens_fault_ID);
    if(ack==1)
	    return 1;
    else
	    return FAULT_ID_EEPROM_WRITE;
}
uint32_t read_from_EE(void)
{
		//EEADR = address;
    uint16_t EEDATA;
		EEDATA	= hal_i2c_eeprom_read(address);
	 if(ack==1)
	    return EEDATA;
         else
	    return FAULT_ID_EEPROM_READ;
}
