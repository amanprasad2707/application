# bin2c.py
import sys

bin_file = "ota_image.bin"
c_file = "ota_image.h"
array_name = "ota_image_bin"

with open(bin_file, "rb") as f:
    data = f.read()

with open(c_file, "w") as f:
    f.write(f"const unsigned char {array_name}[] = {{\n")
    for i, b in enumerate(data):
        f.write(f"0x{b:02X}, ")
        if (i + 1) % 12 == 0:
            f.write("\n")
    f.write("\n};\n")
    f.write(f"const unsigned int {array_name}_len = {len(data)};\n")