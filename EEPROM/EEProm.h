#define EEPROM_WRITE 0xA1
#define EEPROM_READ 0xA0
#define EEPROM_MEM_LOC 0x00
#define  FAULT_ID_EEPROM_WRITE	 0XEEAA0001
#define  FAULT_ID_EEPROM_READ	 0XEEAA0000


void write_to_EE (char);
char read_from_EE (char);

