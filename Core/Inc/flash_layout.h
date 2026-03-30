#ifndef INC_FLASH_LAYOUT_H
#define INC_FLASH_LAYOUT_H

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_flash.h"
#include "stm32f4xx_hal_flash_ex.h"

#define BL_START_ADDR            0x08000000     // 32 KB

#define APP_HEADER_ADDR          0x08008000     // 16 KB
#define APP_START_ADDR           0x0800C000     // 464 KB
#define OTA_START_ADDR           0x08080000     // 512 KB


#define APP_HEADER_SECTOR	FLASH_SECTOR_2
#define APP_START_SECTOR	FLASH_SECTOR_3
#define APP_END_SECTOR		FLASH_SECTOR_7
#define OTA_START_SECTOR	FLASH_SECTOR_8
#define OTA_END_SECTOR		FLASH_SECTOR_11

#define APP_MAX_SIZE            (464 * 1024)
#define OTA_MAX_SIZE            (464 * 1024)



#endif //INC_FLASH_LAYOUT_H