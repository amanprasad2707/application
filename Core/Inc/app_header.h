#ifndef APP_HEADER_H
#define APP_HEADER_H

#include "flash_layout.h"
#include <stdint.h>

typedef struct{
    uint32_t ota_flag;
    uint32_t magic;
    uint32_t size;      /* application size in bytes */
    uint32_t crc;       /* CRC32 of application */
    uint32_t version;
} app_header_t;



#endif