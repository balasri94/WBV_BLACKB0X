uint8_t sens_IP_read(void)
{
	uint8_t decimal;
	decimal=var.pin_1<<1|var.pin_2;
	return decimal;
}
