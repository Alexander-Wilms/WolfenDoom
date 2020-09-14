#!/usr/bin/env python3
# Output a grAb chunk for copy/pasting into a PNG

import struct
import zlib
import argparse
import sys

# Offsets as arguments
parser = argparse.ArgumentParser(description="Output a grAb chunk for PNGs")
parser.add_argument('x', type=int, help="x offset")
parser.add_argument('y', type=int, help="y offset")
offsets = parser.parse_args()

# Convert to binary
grabs = b"grAb" + struct.pack("!ii", offsets.x, offsets.y)
crc = struct.pack("!I", zlib.crc32(grabs))
size = struct.pack("!i", 8)
output = size + grabs + crc

# Write to stdout
sys.stdout.buffer.write(output)