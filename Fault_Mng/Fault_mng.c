#include"Fault_mng.h"
#include<stdint.h>
sens_pin_2_1_check var;
uint8_t fault_cases;

uint8_t sens_IP_read(void)
{
	uint8_t decimal;
	decimal=var.pin_1<<1|var.pin_2;
	return decimal;
}

void sens_fault_check()
{
	sens_IP = sens_IP_read();
	sens_OP = sens_OP_read();
	
	fault_cases = (sens_IP<<1)|sens_OP;
	
	switch(fault_cases)
	{
		case SNA_Both_gnd :
		case SNV_Both_gnd :
		case SNA_Revs_conn :
		case SNV_Revs_conn :
		case SNA_Prop_conn :
		case No_fault :
		case SNA_Both_high :
		case SNV_Both_high :
		default :
	}

	
	
