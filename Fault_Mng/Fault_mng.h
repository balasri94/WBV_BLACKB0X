
#define  FAULT_ID_SNA_Both_gnd  0XAA0000
#define  FAULT_ID_SNV_Both_gnd  0XAA0010
#define  FAULT_ID_SNA_Revs_conn 0XAA0001
#define  FAULT_ID_SNV_Revs_conn  0XAA0011
#define  FAULT_ID_SNA_Prop_conn  0XAA0002
#define  FAULT_ID_No_fault       0XAA0012
#define  FAULT_ID_SNA_Both_high  0XAA0003
#define  FAULT_ID_SNV_Both_high  0XAA0013
#define  IDEAL_STATE             0XAA00FF



typedef struct {
  uint8_t pin_1:2;
  uint8_t pin_2:2;
  uint8_t data:1;
  }sens_pin_2_1_check;

uint8_t sens_IP_read(void);
void sens_fault_check();
enum sensor_io_pin_stat 
	{SNA_Both_gnd=0,
	 SNV_Both_gnd,
	 SNA_Revs_conn,
	 SNV_Revs_conn,
	 SNA_Prop_conn,
	 No_fault,
	 SNA_Both_high,
	 SNV_Both_high};
