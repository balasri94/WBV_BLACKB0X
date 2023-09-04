uint8_t sens_data;

uint8_t sens_IP_read(void)
{
	uint8_t decimal;
	decimal=var.pin_1<<1|var.pin_2;
	return decimal;
}

uint8_t sens_OP_read()
{
	if(sens_data)
		return 1;
	else
		return 0;
}
