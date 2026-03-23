#!/usr/bin/env python3
import zlib, struct

APP_BIN = "build/Debug/application.bin"

with open(APP_BIN, "rb") as f:
    app = f.read()

crc = zlib.crc32(app) & 0xFFFFFFFF
size = len(app)


hdr = struct.pack(
    "<IIII",
    0xABCABC,   # magic
    size,
    crc,
    0x03    # version
)

with open("ota_image.bin", "wb") as f:
    f.write(hdr)
    f.write(app)
