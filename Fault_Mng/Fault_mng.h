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