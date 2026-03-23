
#ifndef INC_FLASH_OPERATIONS_H_
#define INC_FLASH_OPERATIONS_H_


void flash_read_sector(uint32_t sector_start_addr, uint32_t *buffer);
void flash_erase_sector(uint32_t sector_number);
void flash_write_sector(uint32_t sector_start_addr, uint32_t *buffer);



#endif /* INC_FLASH_OPERATIONS_H_ */
