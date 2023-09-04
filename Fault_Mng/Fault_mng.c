#include"Fault_mng.h"
#include<stdint.h>
sens_pin_2_1_check var;

uint8_t fault_count;

void sens_fault_check()
{
	uint8_t fault_cases;
	sens_IP = sens_IP_read();
	sens_OP = sens_OP_read();
	
	fault_cases = (sens_IP<<1)|sens_OP;
	
	switch(fault_cases)
	{
		case SNA_Both_gnd :	fault_count++; write_to_EEPROM(FAULT_ID_SNA_Both_gnd); warning_lamp( R_led,  Blink_1); break;  // SNA == SIGNAL NOT AVAILABLE
		case SNV_Both_gnd :	fault_count++; write_to_EEPROM(FAULT_ID_SNV_Both_gnd); break;					// SNV == SIGNAL NOT VALID 
		case SNA_Revs_conn :	fault_count++; write_to_EEPROM(FAULT_ID_SNA_Revs_conn); warning_lamp( R_led,  Blink_7); break;
		case SNV_Revs_conn :	fault_count++; write_to_EEPROM(FAULT_ID_SNV_Revs_conn); break;
		case SNA_Prop_conn :	fault_count++; write_to_EEPROM(FAULT_ID_SNA_Prop_conn); warning_lamp( R_led,  Blink_1000); break;
		case No_fault :		write_to_EEPROM(FAULT_ID_No_fault); break;
		case SNA_Both_high :	fault_count++; write_to_EEPROM(FAULT_ID_SNA_Both_high); warning_lamp( R_led,  Blink_20); break;
		case SNV_Both_high :	fault_count++; write_to_EEPROM(FAULT_ID_SNV_Both_high); break;
		default :
	}

	if(fault_count>=3)
	{
	 write_to_EEPROM( IDEAL_STATE);
	fault_count=0;
	}	
}
