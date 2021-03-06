#include <string>


const unsigned char msx_8x8[] =
"\x00\x00\x00\x00\x00\x00\x00\x00\x3c\x42\xa5\x81\xa5\x99\x42\x3c"
"\x3c\x7e\xdb\xff\xff\xdb\x66\x3c\x6c\xfe\xfe\xfe\x7c\x38\x10\x00"
"\x10\x38\x7c\xfe\x7c\x38\x10\x00\x10\x38\x54\xfe\x54\x10\x38\x00"
"\x10\x38\x7c\xfe\xfe\x10\x38\x00\x00\x00\x00\x30\x30\x00\x00\x00"
"\xff\xff\xff\xe7\xe7\xff\xff\xff\x38\x44\x82\x82\x82\x44\x38\x00"
"\xc7\xbb\x7d\x7d\x7d\xbb\xc7\xff\x0f\x03\x05\x79\x88\x88\x88\x70"
"\x38\x44\x44\x44\x38\x10\x7c\x10\x30\x28\x24\x24\x28\x20\xe0\xc0"
"\x3c\x24\x3c\x24\x24\xe4\xdc\x18\x10\x54\x38\xee\x38\x54\x10\x00"
"\x10\x10\x10\x7c\x10\x10\x10\x10\x10\x10\x10\xff\x00\x00\x00\x00"
"\x00\x00\x00\xff\x10\x10\x10\x10\x10\x10\x10\xf0\x10\x10\x10\x10"
"\x10\x10\x10\x1f\x10\x10\x10\x10\x10\x10\x10\xff\x10\x10\x10\x10"
"\x10\x10\x10\x10\x10\x10\x10\x10\x00\x00\x00\xff\x00\x00\x00\x00"
"\x00\x00\x00\x1f\x10\x10\x10\x10\x00\x00\x00\xf0\x10\x10\x10\x10"
"\x10\x10\x10\x1f\x00\x00\x00\x00\x10\x10\x10\xf0\x00\x00\x00\x00"
"\x81\x42\x24\x18\x18\x24\x42\x81\x01\x02\x04\x08\x10\x20\x40\x80"
"\x80\x40\x20\x10\x08\x04\x02\x01\x00\x10\x10\xff\x10\x10\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x20\x20\x20\x20\x00\x00\x20\x00"
"\x50\x50\x50\x00\x00\x00\x00\x00\x50\x50\xf8\x50\xf8\x50\x50\x00"
"\x20\x78\xa0\x70\x28\xf0\x20\x00\xc0\xc8\x10\x20\x40\x98\x18\x00"
"\x40\xa0\x40\xa8\x90\x98\x60\x00\x10\x20\x40\x00\x00\x00\x00\x00"
"\x10\x20\x40\x40\x40\x20\x10\x00\x40\x20\x10\x10\x10\x20\x40\x00"
"\x20\xa8\x70\x20\x70\xa8\x20\x00\x00\x20\x20\xf8\x20\x20\x00\x00"
"\x00\x00\x00\x00\x00\x20\x20\x40\x00\x00\x00\x78\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x60\x60\x00\x00\x00\x08\x10\x20\x40\x80\x00"
"\x70\x88\x98\xa8\xc8\x88\x70\x00\x20\x60\xa0\x20\x20\x20\xf8\x00"
"\x70\x88\x08\x10\x60\x80\xf8\x00\x70\x88\x08\x30\x08\x88\x70\x00"
"\x10\x30\x50\x90\xf8\x10\x10\x00\xf8\x80\xe0\x10\x08\x10\xe0\x00"
"\x30\x40\x80\xf0\x88\x88\x70\x00\xf8\x88\x10\x20\x20\x20\x20\x00"
"\x70\x88\x88\x70\x88\x88\x70\x00\x70\x88\x88\x78\x08\x10\x60\x00"
"\x00\x00\x20\x00\x00\x20\x00\x00\x00\x00\x20\x00\x00\x20\x20\x40"
"\x18\x30\x60\xc0\x60\x30\x18\x00\x00\x00\xf8\x00\xf8\x00\x00\x00"
"\xc0\x60\x30\x18\x30\x60\xc0\x00\x70\x88\x08\x10\x20\x00\x20\x00"
"\x70\x88\x08\x68\xa8\xa8\x70\x00\x20\x50\x88\x88\xf8\x88\x88\x00"
"\xf0\x48\x48\x70\x48\x48\xf0\x00\x30\x48\x80\x80\x80\x48\x30\x00"
"\xe0\x50\x48\x48\x48\x50\xe0\x00\xf8\x80\x80\xf0\x80\x80\xf8\x00"
"\xf8\x80\x80\xf0\x80\x80\x80\x00\x70\x88\x80\xb8\x88\x88\x70\x00"
"\x88\x88\x88\xf8\x88\x88\x88\x00\x70\x20\x20\x20\x20\x20\x70\x00"
"\x38\x10\x10\x10\x90\x90\x60\x00\x88\x90\xa0\xc0\xa0\x90\x88\x00"
"\x80\x80\x80\x80\x80\x80\xf8\x00\x88\xd8\xa8\xa8\x88\x88\x88\x00"
"\x88\xc8\xc8\xa8\x98\x98\x88\x00\x70\x88\x88\x88\x88\x88\x70\x00"
"\xf0\x88\x88\xf0\x80\x80\x80\x00\x70\x88\x88\x88\xa8\x90\x68\x00"
"\xf0\x88\x88\xf0\xa0\x90\x88\x00\x70\x88\x80\x70\x08\x88\x70\x00"
"\xf8\x20\x20\x20\x20\x20\x20\x00\x88\x88\x88\x88\x88\x88\x70\x00"
"\x88\x88\x88\x88\x50\x50\x20\x00\x88\x88\x88\xa8\xa8\xd8\x88\x00"
"\x88\x88\x50\x20\x50\x88\x88\x00\x88\x88\x88\x70\x20\x20\x20\x00"
"\xf8\x08\x10\x20\x40\x80\xf8\x00\x70\x40\x40\x40\x40\x40\x70\x00"
"\x00\x00\x80\x40\x20\x10\x08\x00\x70\x10\x10\x10\x10\x10\x70\x00"
"\x20\x50\x88\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf8\x00"
"\x40\x20\x10\x00\x00\x00\x00\x00\x00\x00\x70\x08\x78\x88\x78\x00"
"\x80\x80\xb0\xc8\x88\xc8\xb0\x00\x00\x00\x70\x88\x80\x88\x70\x00"
"\x08\x08\x68\x98\x88\x98\x68\x00\x00\x00\x70\x88\xf8\x80\x70\x00"
"\x10\x28\x20\xf8\x20\x20\x20\x00\x00\x00\x68\x98\x98\x68\x08\x70"
"\x80\x80\xf0\x88\x88\x88\x88\x00\x20\x00\x60\x20\x20\x20\x70\x00"
"\x10\x00\x30\x10\x10\x10\x90\x60\x40\x40\x48\x50\x60\x50\x48\x00"
"\x60\x20\x20\x20\x20\x20\x70\x00\x00\x00\xd0\xa8\xa8\xa8\xa8\x00"
"\x00\x00\xb0\xc8\x88\x88\x88\x00\x00\x00\x70\x88\x88\x88\x70\x00"
"\x00\x00\xb0\xc8\xc8\xb0\x80\x80\x00\x00\x68\x98\x98\x68\x08\x08"
"\x00\x00\xb0\xc8\x80\x80\x80\x00\x00\x00\x78\x80\xf0\x08\xf0\x00"
"\x40\x40\xf0\x40\x40\x48\x30\x00\x00\x00\x90\x90\x90\x90\x68\x00"
"\x00\x00\x88\x88\x88\x50\x20\x00\x00\x00\x88\xa8\xa8\xa8\x50\x00"
"\x00\x00\x88\x50\x20\x50\x88\x00\x00\x00\x88\x88\x98\x68\x08\x70"
"\x00\x00\xf8\x10\x20\x40\xf8\x00\x18\x20\x20\x40\x20\x20\x18\x00"
"\x20\x20\x20\x00\x20\x20\x20\x00\xc0\x20\x20\x10\x20\x20\xc0\x00"
"\x40\xa8\x10\x00\x00\x00\x00\x00\x00\x00\x20\x50\xf8\x00\x00\x00"
"\x70\x88\x80\x80\x88\x70\x20\x60\x90\x00\x00\x90\x90\x90\x68\x00"
"\x10\x20\x70\x88\xf8\x80\x70\x00\x20\x50\x70\x08\x78\x88\x78\x00"
"\x48\x00\x70\x08\x78\x88\x78\x00\x20\x10\x70\x08\x78\x88\x78\x00"
"\x20\x00\x70\x08\x78\x88\x78\x00\x00\x70\x80\x80\x80\x70\x10\x60"
"\x20\x50\x70\x88\xf8\x80\x70\x00\x50\x00\x70\x88\xf8\x80\x70\x00"
"\x20\x10\x70\x88\xf8\x80\x70\x00\x50\x00\x00\x60\x20\x20\x70\x00"
"\x20\x50\x00\x60\x20\x20\x70\x00\x40\x20\x00\x60\x20\x20\x70\x00"
"\x50\x00\x20\x50\x88\xf8\x88\x00\x20\x00\x20\x50\x88\xf8\x88\x00"
"\x10\x20\xf8\x80\xf0\x80\xf8\x00\x00\x00\x6c\x12\x7e\x90\x6e\x00"
"\x3e\x50\x90\x9c\xf0\x90\x9e\x00\x60\x90\x00\x60\x90\x90\x60\x00"
"\x90\x00\x00\x60\x90\x90\x60\x00\x40\x20\x00\x60\x90\x90\x60\x00"
"\x40\xa0\x00\xa0\xa0\xa0\x50\x00\x40\x20\x00\xa0\xa0\xa0\x50\x00"
"\x90\x00\x90\x90\xb0\x50\x10\xe0\x50\x00\x70\x88\x88\x88\x70\x00"
"\x50\x00\x88\x88\x88\x88\x70\x00\x20\x20\x78\x80\x80\x78\x20\x20"
"\x18\x24\x20\xf8\x20\xe2\x5c\x00\x88\x50\x20\xf8\x20\xf8\x20\x00"
"\xc0\xa0\xa0\xc8\x9c\x88\x88\x8c\x18\x20\x20\xf8\x20\x20\x20\x40"
"\x10\x20\x70\x08\x78\x88\x78\x00\x10\x20\x00\x60\x20\x20\x70\x00"
"\x20\x40\x00\x60\x90\x90\x60\x00\x20\x40\x00\x90\x90\x90\x68\x00"
"\x50\xa0\x00\xa0\xd0\x90\x90\x00\x28\x50\x00\xc8\xa8\x98\x88\x00"
"\x00\x70\x08\x78\x88\x78\x00\xf8\x00\x60\x90\x90\x90\x60\x00\xf0"
"\x20\x00\x20\x40\x80\x88\x70\x00\x00\x00\x00\xf8\x80\x80\x00\x00"
"\x00\x00\x00\xf8\x08\x08\x00\x00\x84\x88\x90\xa8\x54\x84\x08\x1c"
"\x84\x88\x90\xa8\x58\xa8\x3c\x08\x20\x00\x00\x20\x20\x20\x20\x00"
"\x00\x00\x24\x48\x90\x48\x24\x00\x00\x00\x90\x48\x24\x48\x90\x00"
"\x28\x50\x20\x50\x88\xf8\x88\x00\x28\x50\x70\x08\x78\x88\x78\x00"
"\x28\x50\x00\x70\x20\x20\x70\x00\x28\x50\x00\x20\x20\x20\x70\x00"
"\x28\x50\x00\x70\x88\x88\x70\x00\x50\xa0\x00\x60\x90\x90\x60\x00"
"\x28\x50\x00\x88\x88\x88\x70\x00\x50\xa0\x00\xa0\xa0\xa0\x50\x00"
"\xfc\x48\x48\x48\xe8\x08\x50\x20\x00\x50\x00\x50\x50\x50\x10\x20"
"\xc0\x44\xc8\x54\xec\x54\x9e\x04\x10\xa8\x40\x00\x00\x00\x00\x00"
"\x00\x20\x50\x88\x50\x20\x00\x00\x88\x10\x20\x40\x80\x28\x00\x00"
"\x7c\xa8\xa8\x68\x28\x28\x28\x00\x38\x40\x30\x48\x48\x30\x08\x70"
"\x00\x00\x00\x00\x00\x00\xff\xff\xf0\xf0\xf0\xf0\x0f\x0f\x0f\x0f"
"\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x3c\x3c\x00\x00\x00\xff\xff\xff\xff\xff\xff\x00\x00"
"\xc0\xc0\xc0\xc0\xc0\xc0\xc0\xc0\x0f\x0f\x0f\x0f\xf0\xf0\xf0\xf0"
"\xfc\xfc\xfc\xfc\xfc\xfc\xfc\xfc\x03\x03\x03\x03\x03\x03\x03\x03"
"\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x11\x22\x44\x88\x11\x22\x44\x88"
"\x88\x44\x22\x11\x88\x44\x22\x11\xfe\x7c\x38\x10\x00\x00\x00\x00"
"\x00\x00\x00\x00\x10\x38\x7c\xfe\x80\xc0\xe0\xf0\xe0\xc0\x80\x00"
"\x01\x03\x07\x0f\x07\x03\x01\x00\xff\x7e\x3c\x18\x18\x3c\x7e\xff"
"\x81\xc3\xe7\xff\xff\xe7\xc3\x81\xf0\xf0\xf0\xf0\x00\x00\x00\x00"
"\x00\x00\x00\x00\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x00\x00\x00\x00"
"\x00\x00\x00\x00\xf0\xf0\xf0\xf0\x33\x33\xcc\xcc\x33\x33\xcc\xcc"
"\x00\x20\x20\x50\x50\x88\xf8\x00\x20\x20\x70\x20\x70\x20\x20\x00"
"\x00\x00\x00\x50\x88\xa8\x50\x00\xff\xff\xff\xff\xff\xff\xff\xff"
"\x00\x00\x00\x00\xff\xff\xff\xff\xf0\xf0\xf0\xf0\xf0\xf0\xf0\xf0"
"\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\xff\xff\xff\xff\x00\x00\x00\x00"
"\x00\x00\x68\x90\x90\x90\x68\x00\x30\x48\x48\x70\x48\x48\x70\xc0"
"\xf8\x88\x80\x80\x80\x80\x80\x00\xf8\x50\x50\x50\x50\x50\x98\x00"
"\xf8\x88\x40\x20\x40\x88\xf8\x00\x00\x00\x78\x90\x90\x90\x60\x00"
"\x00\x50\x50\x50\x50\x68\x80\x80\x00\x50\xa0\x20\x20\x20\x20\x00"
"\xf8\x20\x70\xa8\xa8\x70\x20\xf8\x20\x50\x88\xf8\x88\x50\x20\x00"
"\x70\x88\x88\x88\x50\x50\xd8\x00\x30\x40\x40\x20\x50\x50\x50\x20"
"\x00\x00\x00\x50\xa8\xa8\x50\x00\x08\x70\xa8\xa8\xa8\x70\x80\x00"
"\x38\x40\x80\xf8\x80\x40\x38\x00\x70\x88\x88\x88\x88\x88\x88\x00"
"\x00\xf8\x00\xf8\x00\xf8\x00\x00\x20\x20\xf8\x20\x20\x00\xf8\x00"
"\xc0\x30\x08\x30\xc0\x00\xf8\x00\x18\x60\x80\x60\x18\x00\xf8\x00"
"\x10\x28\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\xa0\x40"
"\x00\x20\x00\xf8\x00\x20\x00\x00\x00\x50\xa0\x00\x50\xa0\x00\x00"
"\x00\x18\x24\x24\x18\x00\x00\x00\x00\x30\x78\x78\x30\x00\x00\x00"
"\x00\x00\x00\x00\x30\x00\x00\x00\x3e\x20\x20\x20\xa0\x60\x20\x00"
"\xa0\x50\x50\x50\x00\x00\x00\x00\x40\xa0\x20\x40\xe0\x00\x00\x00"
"\x00\x38\x38\x38\x38\x38\x38\x00\x00\x00\x00\x00\x00\x00\x00\x00";
const unsigned char mirko_8x8[] =
"\x00\x00\x00\x00\x00\x00\x00\x00\x18\x3c\x66\xc3\xe7\x24\x24\x3c"
"\x3c\x24\x24\xe7\xc3\x66\x3c\x18\x18\x1c\xf6\x83\x83\xf6\x1c\x18"
"\x18\x38\x6f\xc1\xc1\x6f\x38\x18\x3c\x99\xc3\xe7\xc3\x99\x3c\x00"
"\xff\xff\xfe\xfc\xf9\xf3\xe7\x00\xe7\xc3\x99\x3c\x99\xc3\xe7\x00"
"\x01\x03\x06\x8c\xd8\x70\x20\x00\x7e\xc3\xd3\xd3\xdb\xc3\xc3\x7e"
"\x18\x3c\x3c\x3c\x7e\x10\x38\x10\x18\x1c\x16\x10\x10\x70\xf0\x60"
"\x18\x24\x42\x81\x81\x42\x24\x18\x18\x24\x5a\xbd\xbd\x5a\x24\x18"
"\xff\x81\x81\x81\x81\x81\xff\x00\xff\x81\x83\x85\xa9\x91\xff\x00"
"\x7c\xc6\xc6\x00\xc6\xc6\x7c\x00\x06\x06\x06\x00\x06\x06\x06\x00"
"\x7c\x06\x06\x7c\xc0\xc0\x7c\x00\x7c\x06\x06\x7c\x06\x06\x7c\x00"
"\xc6\xc6\xc6\x7c\x06\x06\x06\x00\x7c\xc0\xc0\x7c\x06\x06\x7c\x00"
"\x7c\xc0\xc0\x7c\xc6\xc6\x7c\x00\x7c\x06\x06\x00\x06\x06\x06\x00"
"\x7c\xc6\xc6\x7c\xc6\xc6\x7c\x00\x7c\xc6\xc6\x7c\x06\x06\x7c\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x18\x18\x18\x18\x18\x00\x18\x00"
"\x66\x66\x66\x00\x00\x00\x00\x00\x00\x6c\xfe\x6c\x6c\xfe\x6c\x00"
"\x18\x3e\x60\x3c\x06\x7c\x18\x00\x00\x66\x6c\x18\x30\x66\x46\x00"
"\x38\x6c\x38\x70\xde\xcc\x76\x00\x18\x18\x18\x00\x00\x00\x00\x00"
"\x0e\x1c\x18\x18\x18\x1c\x0e\x00\x70\x38\x18\x18\x18\x38\x70\x00"
"\x00\x66\x3c\xff\x3c\x66\x00\x00\x00\x18\x18\x7e\x18\x18\x00\x00"
"\x00\x00\x00\x00\x00\x30\x30\x60\x00\x00\x00\x7e\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x18\x18\x00\x02\x06\x0c\x18\x30\x60\x40\x00"
"\x3c\x66\x6e\x76\x66\x66\x3c\x00\x18\x38\x18\x18\x18\x18\x7e\x00"
"\x3c\x66\x06\x0c\x18\x30\x7e\x00\x7e\x0c\x18\x0c\x06\x66\x3c\x00"
"\x0c\x1c\x3c\x6c\x7e\x0c\x0c\x00\x7e\x60\x7c\x06\x06\x66\x3c\x00"
"\x3c\x60\x60\x7c\x66\x66\x3c\x00\x7e\x06\x0c\x18\x30\x30\x30\x00"
"\x3c\x66\x66\x3c\x66\x66\x3c\x00\x3c\x66\x66\x3e\x06\x0c\x38\x00"
"\x00\x18\x18\x00\x18\x18\x00\x00\x00\x18\x18\x00\x18\x18\x30\x00"
"\x06\x0c\x18\x30\x18\x0c\x06\x00\x00\x00\x7e\x00\x00\x7e\x00\x00"
"\x60\x30\x18\x0c\x18\x30\x60\x00\x3c\x66\x06\x0c\x18\x00\x18\x00"
"\x3c\x66\x6e\x6a\x6e\x60\x3e\x00\x18\x3c\x66\x66\x7e\x66\x66\x00"
"\x7c\x66\x66\x7c\x66\x66\x7c\x00\x3c\x66\x60\x60\x60\x66\x3c\x00"
"\x78\x6c\x66\x66\x66\x6c\x78\x00\x7e\x60\x60\x7c\x60\x60\x7e\x00"
"\x7e\x60\x60\x7c\x60\x60\x60\x00\x3e\x60\x60\x6e\x66\x66\x3e\x00"
"\x66\x66\x66\x7e\x66\x66\x66\x00\x3c\x18\x18\x18\x18\x18\x3c\x00"
"\x06\x06\x06\x06\x06\x66\x3c\x00\x66\x6c\x78\x70\x78\x6c\x66\x00"
"\x60\x60\x60\x60\x60\x60\x7e\x00\xc6\xee\xfe\xd6\xc6\xc6\xc6\x00"
"\x66\x76\x7e\x7e\x6e\x66\x66\x00\x3c\x66\x66\x66\x66\x66\x3c\x00"
"\x7c\x66\x66\x7c\x60\x60\x60\x00\x3c\x66\x66\x66\x76\x6c\x36\x00"
"\x7c\x66\x66\x7c\x6c\x66\x66\x00\x3c\x66\x60\x3c\x06\x66\x3c\x00"
"\x7e\x18\x18\x18\x18\x18\x18\x00\x66\x66\x66\x66\x66\x66\x3e\x00"
"\x66\x66\x66\x66\x66\x3c\x18\x00\xc6\xc6\xc6\xd6\xfe\xee\xc6\x00"
"\x66\x66\x3c\x18\x3c\x66\x66\x00\x66\x66\x66\x3c\x18\x18\x18\x00"
"\x7e\x06\x0c\x18\x30\x60\x7e\x00\x1e\x18\x18\x18\x18\x18\x1e\x00"
"\x40\x60\x30\x18\x0c\x06\x02\x00\x78\x18\x18\x18\x18\x18\x78\x00"
"\x10\x38\x6c\xc6\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xfe\x00"
"\x00\xc0\x60\x30\x00\x00\x00\x00\x00\x00\x3c\x06\x3e\x66\x3e\x00"
"\x60\x60\x7c\x66\x66\x66\x7c\x00\x00\x00\x3c\x60\x60\x60\x3c\x00"
"\x06\x06\x3e\x66\x66\x66\x3e\x00\x00\x00\x3c\x66\x7e\x60\x3c\x00"
"\x1c\x30\x7c\x30\x30\x30\x30\x00\x00\x00\x3e\x66\x66\x3e\x06\x7c"
"\x60\x60\x7c\x66\x66\x66\x66\x00\x18\x00\x38\x18\x18\x18\x3c\x00"
"\x18\x00\x18\x18\x18\x18\x18\x70\x60\x60\x66\x6c\x78\x6c\x66\x00"
"\x38\x18\x18\x18\x18\x18\x3c\x00\x00\x00\xec\xfe\xd6\xc6\xc6\x00"
"\x00\x00\x7c\x66\x66\x66\x66\x00\x00\x00\x3c\x66\x66\x66\x3c\x00"
"\x00\x00\x7c\x66\x66\x66\x7c\x60\x00\x00\x3e\x66\x66\x66\x3e\x06"
"\x00\x00\x7c\x66\x60\x60\x60\x00\x00\x00\x3e\x60\x3c\x06\x7c\x00"
"\x00\x18\x7e\x18\x18\x18\x0e\x00\x00\x00\x66\x66\x66\x66\x3e\x00"
"\x00\x00\x66\x66\x66\x3c\x18\x00\x00\x00\xc6\xc6\xd6\x7c\x6c\x00"
"\x00\x00\x66\x3c\x18\x3c\x66\x00\x00\x00\x66\x66\x66\x3e\x06\x7c"
"\x00\x00\x7e\x0c\x18\x30\x7e\x00\x0e\x18\x18\x30\x18\x18\x0e\x00"
"\x18\x18\x18\x18\x18\x18\x18\x18\x70\x18\x18\x0c\x18\x18\x70\x00"
"\x00\x60\xf2\x9e\x0c\x00\x00\x00\x00\x18\x18\x34\x34\x62\x7e\x00"
"\x70\x88\x80\x80\x88\x70\x20\x60\x90\x00\x00\x90\x90\x90\x68\x00"
"\x10\x20\x70\x88\xf8\x80\x70\x00\x20\x50\x70\x08\x78\x88\x78\x00"
"\x48\x00\x70\x08\x78\x88\x78\x00\x20\x10\x70\x08\x78\x88\x78\x00"
"\x20\x00\x70\x08\x78\x88\x78\x00\x00\x70\x80\x80\x80\x70\x10\x60"
"\x20\x50\x70\x88\xf8\x80\x70\x00\x50\x00\x70\x88\xf8\x80\x70\x00"
"\x20\x10\x70\x88\xf8\x80\x70\x00\x50\x00\x00\x60\x20\x20\x70\x00"
"\x20\x50\x00\x60\x20\x20\x70\x00\x40\x20\x00\x60\x20\x20\x70\x00"
"\x50\x00\x20\x50\x88\xf8\x88\x00\x20\x00\x20\x50\x88\xf8\x88\x00"
"\x10\x20\xf8\x80\xf0\x80\xf8\x00\x00\x00\x6c\x12\x7e\x90\x6e\x00"
"\x3e\x50\x90\x9c\xf0\x90\x9e\x00\x60\x90\x00\x60\x90\x90\x60\x00"
"\x90\x00\x00\x60\x90\x90\x60\x00\x40\x20\x00\x60\x90\x90\x60\x00"
"\x40\xa0\x00\xa0\xa0\xa0\x50\x00\x40\x20\x00\xa0\xa0\xa0\x50\x00"
"\x90\x00\x90\x90\xb0\x50\x10\xe0\x50\x00\x70\x88\x88\x88\x70\x00"
"\x50\x00\x88\x88\x88\x88\x70\x00\x20\x20\x78\x80\x80\x78\x20\x20"
"\x18\x24\x20\xf8\x20\xe2\x5c\x00\x88\x50\x20\xf8\x20\xf8\x20\x00"
"\xc0\xa0\xa0\xc8\x9c\x88\x88\x8c\x18\x20\x20\xf8\x20\x20\x20\x40"
"\x10\x20\x70\x08\x78\x88\x78\x00\x10\x20\x00\x60\x20\x20\x70\x00"
"\x20\x40\x00\x60\x90\x90\x60\x00\x20\x40\x00\x90\x90\x90\x68\x00"
"\x50\xa0\x00\xa0\xd0\x90\x90\x00\x28\x50\x00\xc8\xa8\x98\x88\x00"
"\x00\x70\x08\x78\x88\x78\x00\xf8\x00\x60\x90\x90\x90\x60\x00\xf0"
"\x20\x00\x20\x40\x80\x88\x70\x00\x00\x00\x00\xf8\x80\x80\x00\x00"
"\x00\x00\x00\xf8\x08\x08\x00\x00\x84\x88\x90\xa8\x54\x84\x08\x1c"
"\x84\x88\x90\xa8\x58\xa8\x3c\x08\x20\x00\x00\x20\x20\x20\x20\x00"
"\x00\x00\x24\x48\x90\x48\x24\x00\x00\x00\x90\x48\x24\x48\x90\x00"
"\x28\x50\x20\x50\x88\xf8\x88\x00\x28\x50\x70\x08\x78\x88\x78\x00"
"\x28\x50\x00\x70\x20\x20\x70\x00\x28\x50\x00\x20\x20\x20\x70\x00"
"\x28\x50\x00\x70\x88\x88\x70\x00\x50\xa0\x00\x60\x90\x90\x60\x00"
"\x28\x50\x00\x88\x88\x88\x70\x00\x50\xa0\x00\xa0\xa0\xa0\x50\x00"
"\xfc\x48\x48\x48\xe8\x08\x50\x20\x00\x50\x00\x50\x50\x50\x10\x20"
"\xc0\x44\xc8\x54\xec\x54\x9e\x04\x10\xa8\x40\x00\x00\x00\x00\x00"
"\x00\x20\x50\x88\x50\x20\x00\x00\x88\x10\x20\x40\x80\x28\x00\x00"
"\x7c\xa8\xa8\x68\x28\x28\x28\x00\x38\x40\x30\x48\x48\x30\x08\x70"
"\x00\x00\x00\x00\x00\x00\xff\xff\xf0\xf0\xf0\xf0\x0f\x0f\x0f\x0f"
"\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x3c\x3c\x00\x00\x00\xff\xff\xff\xff\xff\xff\x00\x00"
"\xc0\xc0\xc0\xc0\xc0\xc0\xc0\xc0\x0f\x0f\x0f\x0f\xf0\xf0\xf0\xf0"
"\xfc\xfc\xfc\xfc\xfc\xfc\xfc\xfc\x03\x03\x03\x03\x03\x03\x03\x03"
"\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x11\x22\x44\x88\x11\x22\x44\x88"
"\x88\x44\x22\x11\x88\x44\x22\x11\xfe\x7c\x38\x10\x00\x00\x00\x00"
"\x00\x00\x00\x00\x10\x38\x7c\xfe\x80\xc0\xe0\xf0\xe0\xc0\x80\x00"
"\x01\x03\x07\x0f\x07\x03\x01\x00\xff\x7e\x3c\x18\x18\x3c\x7e\xff"
"\x81\xc3\xe7\xff\xff\xe7\xc3\x81\xf0\xf0\xf0\xf0\x00\x00\x00\x00"
"\x00\x00\x00\x00\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x00\x00\x00\x00"
"\x00\x00\x00\x00\xf0\xf0\xf0\xf0\x33\x33\xcc\xcc\x33\x33\xcc\xcc"
"\x00\x20\x20\x50\x50\x88\xf8\x00\x20\x20\x70\x20\x70\x20\x20\x00"
"\x00\x00\x00\x50\x88\xa8\x50\x00\xff\xff\xff\xff\xff\xff\xff\xff"
"\x00\x00\x00\x00\xff\xff\xff\xff\xf0\xf0\xf0\xf0\xf0\xf0\xf0\xf0"
"\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\xff\xff\xff\xff\x00\x00\x00\x00"
"\x00\x00\x68\x90\x90\x90\x68\x00\x30\x48\x48\x70\x48\x48\x70\xc0"
"\xf8\x88\x80\x80\x80\x80\x80\x00\xf8\x50\x50\x50\x50\x50\x98\x00"
"\xf8\x88\x40\x20\x40\x88\xf8\x00\x00\x00\x78\x90\x90\x90\x60\x00"
"\x00\x50\x50\x50\x50\x68\x80\x80\x00\x50\xa0\x20\x20\x20\x20\x00"
"\xf8\x20\x70\xa8\xa8\x70\x20\xf8\x20\x50\x88\xf8\x88\x50\x20\x00"
"\x70\x88\x88\x88\x50\x50\xd8\x00\x30\x40\x40\x20\x50\x50\x50\x20"
"\x00\x00\x00\x50\xa8\xa8\x50\x00\x08\x70\xa8\xa8\xa8\x70\x80\x00"
"\x38\x40\x80\xf8\x80\x40\x38\x00\x70\x88\x88\x88\x88\x88\x88\x00"
"\x00\xf8\x00\xf8\x00\xf8\x00\x00\x20\x20\xf8\x20\x20\x00\xf8\x00"
"\xc0\x30\x08\x30\xc0\x00\xf8\x00\x18\x60\x80\x60\x18\x00\xf8\x00"
"\x10\x28\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\xa0\x40"
"\x00\x20\x00\xf8\x00\x20\x00\x00\x00\x50\xa0\x00\x50\xa0\x00\x00"
"\x00\x18\x24\x24\x18\x00\x00\x00\x00\x30\x78\x78\x30\x00\x00\x00"
"\x00\x00\x00\x00\x30\x00\x00\x00\x3e\x20\x20\x20\xa0\x60\x20\x00"
"\xa0\x50\x50\x50\x00\x00\x00\x00\x40\xa0\x20\x40\xe0\x00\x00\x00"
"\x00\x38\x38\x38\x38\x38\x38\x00\x00\x00\x00\x00\x00\x00\x00\x00";
const unsigned char namco_8x8[] =
"\x00\x00\x00\x00\x00\x00\x00\x00\x1c\x1c\x38\x30\x20\x00\x60\x00"
"\x6c\x6c\x24\x48\x00\x00\x00\x00\x6c\x6c\xfe\x6c\xfe\x6c\x6c\x00"
"\x10\x7c\xd0\x7c\x16\x7c\x10\x00\xe2\xa4\xe8\x10\x2e\x4a\x8e\x00"
"\x60\x90\xb0\x66\xd4\x88\x76\x00\x30\x30\x10\x20\x00\x00\x00\x00"
"\x18\x30\x60\x60\x60\x30\x18\x00\x30\x18\x0c\x0c\x0c\x18\x30\x00"
"\x10\x54\x38\x10\x38\x54\x10\x00\x00\x30\x30\xfc\x30\x30\x00\x00"
"\x00\x00\x00\x60\x60\x20\x40\x00\x00\x00\xfc\xfc\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x30\x30\x00\x03\x06\x0c\x18\x30\x60\xc0\x00"
"\x38\x4c\xc6\xc6\xc6\x64\x38\x00\x18\x38\x18\x18\x18\x18\x7e\x00"
"\x7c\xc6\x0e\x3c\x78\xe0\xfe\x00\x7e\x0c\x18\x3c\x06\xc6\x7c\x00"
"\x1c\x3c\x6c\xcc\xfe\x0c\x0c\x00\xfc\xc0\xfc\x06\x06\xc6\x7c\x00"
"\x3c\x60\xc0\xfc\xc6\xc6\x7c\x00\xfe\xc6\x0c\x18\x30\x30\x30\x00"
"\x78\xc4\xe4\x78\x9e\x86\x7c\x00\x7c\xc6\xc6\x7e\x06\x0c\x78\x00"
"\x00\x30\x30\x00\x30\x30\x00\x00\x30\x30\x00\x30\x30\x10\x20\x00"
"\x0c\x18\x30\x60\x30\x18\x0c\x00\x00\xfc\xfc\x00\xfc\xfc\x00\x00"
"\x60\x30\x18\x0c\x18\x30\x60\x00\x7c\xc6\x06\x0c\x18\x00\x18\x00"
"\x7c\x82\xba\xaa\xbe\x80\x7c\x00\x38\x6c\xc6\xc6\xfe\xc6\xc6\x00"
"\xfc\xc6\xc6\xfc\xc6\xc6\xfc\x00\x3c\x66\xc0\xc0\xc0\x66\x3c\x00"
"\xf8\xcc\xc6\xc6\xc6\xcc\xf8\x00\x7e\x60\x60\x7c\x60\x60\x7e\x00"
"\xfe\xc0\xc0\xfc\xc0\xc0\xc0\x00\x3e\x60\xc0\xce\xc6\x66\x3e\x00"
"\xc6\xc6\xc6\xfe\xc6\xc6\xc6\x00\x7e\x18\x18\x18\x18\x18\x7e\x00"
"\x06\x06\x06\x06\x06\xc6\x7c\x00\xc6\xcc\xd8\xf0\xf8\xdc\xce\x00"
"\x60\x60\x60\x60\x60\x60\x7e\x00\xc6\xee\xfe\xfe\xd6\xc6\xc6\x00"
"\xc6\xe6\xf6\xfe\xde\xce\xc6\x00\x7c\xc6\xc6\xc6\xc6\xc6\x7c\x00"
"\xfc\xc6\xc6\xc6\xfc\xc0\xc0\x00\x7c\xc6\xc6\xc6\xde\xcc\x7a\x00"
"\xfc\xc6\xc6\xce\xf8\xdc\xce\x00\x78\xcc\xc0\x7c\x06\xc6\x7c\x00"
"\x7e\x18\x18\x18\x18\x18\x18\x00\xc6\xc6\xc6\xc6\xc6\xc6\x7c\x00"
"\xc6\xc6\xc6\xee\x7c\x38\x10\x00\xc6\xc6\xd6\xfe\xfe\xee\xc6\x00"
"\xc6\xee\x7c\x38\x7c\xee\xc6\x00\x66\x66\x66\x3c\x18\x18\x18\x00"
"\xfe\x0e\x1c\x38\x70\xe0\xfe\x00\x78\x60\x60\x60\x60\x60\x78\x00"
"\xc0\x60\x30\x18\x0c\x06\x02\x00\x3c\x0c\x0c\x0c\x0c\x0c\x3c\x00"
"\x18\x3c\x7e\x5a\x18\x18\x18\x00\x00\x30\x60\xfe\xfe\x60\x30\x00"
"\x18\x18\x18\x5a\x7e\x3c\x18\x00\x00\x18\x0c\xfe\xfe\x0c\x18\x00"
"\x00\xc6\x6c\x38\x6c\xc6\x00\x00\x30\x30\x00\xfc\x00\x30\x30\x00";
const unsigned char c64_8x8[] =
"\x3c\x66\x6e\x6e\x60\x62\x3c\x00\x00\x00\x3c\x06\x3e\x66\x3e\x00"
"\x00\x60\x60\x7c\x66\x66\x7c\x00\x00\x00\x3c\x60\x60\x60\x3c\x00"
"\x00\x06\x06\x3e\x66\x66\x3e\x00\x00\x00\x3c\x66\x7e\x60\x3c\x00"
"\x00\x0e\x18\x3e\x18\x18\x18\x00\x00\x00\x3e\x66\x66\x3e\x06\x7c"
"\x00\x60\x60\x7c\x66\x66\x66\x00\x00\x18\x00\x38\x18\x18\x3c\x00"
"\x00\x06\x00\x06\x06\x06\x06\x3c\x00\x60\x60\x6c\x78\x6c\x66\x00"
"\x00\x38\x18\x18\x18\x18\x3c\x00\x00\x00\x66\x7f\x7f\x6b\x63\x00"
"\x00\x00\x7c\x66\x66\x66\x66\x00\x00\x00\x3c\x66\x66\x66\x3c\x00"
"\x00\x00\x7c\x66\x66\x7c\x60\x60\x00\x00\x3e\x66\x66\x3e\x06\x06"
"\x00\x00\x7c\x66\x60\x60\x60\x00\x00\x00\x3e\x60\x3c\x06\x7c\x00"
"\x00\x18\x7e\x18\x18\x18\x0e\x00\x00\x00\x66\x66\x66\x66\x3e\x00"
"\x00\x00\x66\x66\x66\x3c\x18\x00\x00\x00\x63\x6b\x7f\x3e\x36\x00"
"\x00\x00\x66\x3c\x18\x3c\x66\x00\x00\x00\x66\x66\x66\x3e\x0c\x78"
"\x00\x00\x7e\x0c\x18\x30\x7e\x00\x3c\x30\x30\x30\x30\x30\x3c\x00"
"\x0c\x12\x30\x7c\x30\x62\xfc\x00\x3c\x0c\x0c\x0c\x0c\x0c\x3c\x00"
"\x00\x18\x3c\x7e\x18\x18\x18\x18\x00\x10\x30\x7f\x7f\x30\x10\x00"
"\x00\x00\x00\x00\x00\x00\x00\x00\x18\x18\x18\x18\x00\x00\x18\x00"
"\x66\x66\x66\x00\x00\x00\x00\x00\x66\x66\xff\x66\xff\x66\x66\x00"
"\x18\x3e\x60\x3c\x06\x7c\x18\x00\x62\x66\x0c\x18\x30\x66\x46\x00"
"\x3c\x66\x3c\x38\x67\x66\x3f\x00\x06\x0c\x18\x00\x00\x00\x00\x00"
"\x0c\x18\x30\x30\x30\x18\x0c\x00\x30\x18\x0c\x0c\x0c\x18\x30\x00"
"\x00\x66\x3c\xff\x3c\x66\x00\x00\x00\x18\x18\x7e\x18\x18\x00\x00"
"\x00\x00\x00\x00\x00\x18\x18\x30\x00\x00\x00\x7e\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x18\x18\x00\x00\x03\x06\x0c\x18\x30\x60\x00"
"\x3c\x66\x6e\x76\x66\x66\x3c\x00\x18\x18\x38\x18\x18\x18\x7e\x00"
"\x3c\x66\x06\x0c\x30\x60\x7e\x00\x3c\x66\x06\x1c\x06\x66\x3c\x00"
"\x06\x0e\x1e\x66\x7f\x06\x06\x00\x7e\x60\x7c\x06\x06\x66\x3c\x00"
"\x3c\x66\x60\x7c\x66\x66\x3c\x00\x7e\x66\x0c\x18\x18\x18\x18\x00"
"\x3c\x66\x66\x3c\x66\x66\x3c\x00\x3c\x66\x66\x3e\x06\x66\x3c\x00"
"\x00\x00\x18\x00\x00\x18\x00\x00\x00\x00\x18\x00\x00\x18\x18\x30"
"\x0e\x18\x30\x60\x30\x18\x0e\x00\x00\x00\x7e\x00\x7e\x00\x00\x00"
"\x70\x18\x0c\x06\x0c\x18\x70\x00\x3c\x66\x06\x0c\x18\x00\x18\x00"
"\x00\x00\x00\xff\xff\x00\x00\x00\x18\x3c\x66\x7e\x66\x66\x66\x00"
"\x7c\x66\x66\x7c\x66\x66\x7c\x00\x3c\x66\x60\x60\x60\x66\x3c\x00"
"\x78\x6c\x66\x66\x66\x6c\x78\x00\x7e\x60\x60\x78\x60\x60\x7e\x00"
"\x7e\x60\x60\x78\x60\x60\x60\x00\x3c\x66\x60\x6e\x66\x66\x3c\x00"
"\x66\x66\x66\x7e\x66\x66\x66\x00\x3c\x18\x18\x18\x18\x18\x3c\x00"
"\x1e\x0c\x0c\x0c\x0c\x6c\x38\x00\x66\x6c\x78\x70\x78\x6c\x66\x00"
"\x60\x60\x60\x60\x60\x60\x7e\x00\x63\x77\x7f\x6b\x63\x63\x63\x00"
"\x66\x76\x7e\x7e\x6e\x66\x66\x00\x3c\x66\x66\x66\x66\x66\x3c\x00"
"\x7c\x66\x66\x7c\x60\x60\x60\x00\x3c\x66\x66\x66\x66\x3c\x0e\x00"
"\x7c\x66\x66\x7c\x78\x6c\x66\x00\x3c\x66\x60\x3c\x06\x66\x3c\x00"
"\x7e\x18\x18\x18\x18\x18\x18\x00\x66\x66\x66\x66\x66\x66\x3c\x00"
"\x66\x66\x66\x66\x66\x3c\x18\x00\x63\x63\x63\x6b\x7f\x77\x63\x00"
"\x66\x66\x3c\x18\x3c\x66\x66\x00\x66\x66\x66\x3c\x18\x18\x18\x00"
"\x7e\x06\x0c\x18\x30\x60\x7e\x00\x18\x18\x18\xff\xff\x18\x18\x18"
"\xc0\xc0\x30\x30\xc0\xc0\x30\x30\x18\x18\x18\x18\x18\x18\x18\x18"
"\x33\x33\xcc\xcc\x33\x33\xcc\xcc\x33\x99\xcc\x66\x33\x99\xcc\x66"
"\x00\x00\x00\x00\x00\x00\x00\x00\xf0\xf0\xf0\xf0\xf0\xf0\xf0\xf0"
"\x00\x00\x00\x00\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00"
"\x00\x00\x00\x00\x00\x00\x00\xff\xc0\xc0\xc0\xc0\xc0\xc0\xc0\xc0"
"\xcc\xcc\x33\x33\xcc\xcc\x33\x33\x03\x03\x03\x03\x03\x03\x03\x03"
"\x00\x00\x00\x00\xcc\xcc\x33\x33\xcc\x99\x33\x66\xcc\x99\x33\x66"
"\x03\x03\x03\x03\x03\x03\x03\x03\x18\x18\x18\x1f\x1f\x18\x18\x18"
"\x00\x00\x00\x00\x0f\x0f\x0f\x0f\x18\x18\x18\x1f\x1f\x00\x00\x00"
"\x00\x00\x00\xf8\xf8\x18\x18\x18\x00\x00\x00\x00\x00\x00\xff\xff"
"\x00\x00\x00\x1f\x1f\x18\x18\x18\x18\x18\x18\xff\xff\x00\x00\x00"
"\x00\x00\x00\xff\xff\x18\x18\x18\x18\x18\x18\xf8\xf8\x18\x18\x18"
"\xc0\xc0\xc0\xc0\xc0\xc0\xc0\xc0\xe0\xe0\xe0\xe0\xe0\xe0\xe0\xe0"
"\x07\x07\x07\x07\x07\x07\x07\x07\xff\xff\x00\x00\x00\x00\x00\x00"
"\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff"
"\x01\x03\x06\x6c\x78\x70\x60\x00\x00\x00\x00\x00\xf0\xf0\xf0\xf0"
"\x0f\x0f\x0f\x0f\x00\x00\x00\x00\x18\x18\x18\xf8\xf8\x00\x00\x00"
"\xf0\xf0\xf0\xf0\x00\x00\x00\x00\xf0\xf0\xf0\xf0\x0f\x0f\x0f\x0f"
"\xc3\x99\x91\x91\x9f\x99\xc3\xff\xff\xff\xc3\xf9\xc1\x99\xc1\xff"
"\xff\x9f\x9f\x83\x99\x99\x83\xff\xff\xff\xc3\x9f\x9f\x9f\xc3\xff"
"\xff\xf9\xf9\xc1\x99\x99\xc1\xff\xff\xff\xc3\x99\x81\x9f\xc3\xff"
"\xff\xf1\xe7\xc1\xe7\xe7\xe7\xff\xff\xff\xc1\x99\x99\xc1\xf9\x83"
"\xff\x9f\x9f\x83\x99\x99\x99\xff\xff\xe7\xff\xc7\xe7\xe7\xc3\xff"
"\xff\xf9\xff\xf9\xf9\xf9\xf9\xc3\xff\x9f\x9f\x93\x87\x93\x99\xff"
"\xff\xc7\xe7\xe7\xe7\xe7\xc3\xff\xff\xff\x99\x80\x80\x94\x9c\xff"
"\xff\xff\x83\x99\x99\x99\x99\xff\xff\xff\xc3\x99\x99\x99\xc3\xff"
"\xff\xff\x83\x99\x99\x83\x9f\x9f\xff\xff\xc1\x99\x99\xc1\xf9\xf9"
"\xff\xff\x83\x99\x9f\x9f\x9f\xff\xff\xff\xc1\x9f\xc3\xf9\x83\xff"
"\xff\xe7\x81\xe7\xe7\xe7\xf1\xff\xff\xff\x99\x99\x99\x99\xc1\xff"
"\xff\xff\x99\x99\x99\xc3\xe7\xff\xff\xff\x9c\x94\x80\xc1\xc9\xff"
"\xff\xff\x99\xc3\xe7\xc3\x99\xff\xff\xff\x99\x99\x99\xc1\xf3\x87"
"\xff\xff\x81\xf3\xe7\xcf\x81\xff\xc3\xcf\xcf\xcf\xcf\xcf\xc3\xff"
"\xf3\xed\xcf\x83\xcf\x9d\x03\xff\xc3\xf3\xf3\xf3\xf3\xf3\xc3\xff"
"\xff\xe7\xc3\x81\xe7\xe7\xe7\xe7\xff\xef\xcf\x80\x80\xcf\xef\xff"
"\xff\xff\xff\xff\xff\xff\xff\xff\xe7\xe7\xe7\xe7\xff\xff\xe7\xff"
"\x99\x99\x99\xff\xff\xff\xff\xff\x99\x99\x00\x99\x00\x99\x99\xff"
"\xe7\xc1\x9f\xc3\xf9\x83\xe7\xff\x9d\x99\xf3\xe7\xcf\x99\xb9\xff"
"\xc3\x99\xc3\xc7\x98\x99\xc0\xff\xf9\xf3\xe7\xff\xff\xff\xff\xff"
"\xf3\xe7\xcf\xcf\xcf\xe7\xf3\xff\xcf\xe7\xf3\xf3\xf3\xe7\xcf\xff"
"\xff\x99\xc3\x00\xc3\x99\xff\xff\xff\xe7\xe7\x81\xe7\xe7\xff\xff"
"\xff\xff\xff\xff\xff\xe7\xe7\xcf\xff\xff\xff\x81\xff\xff\xff\xff"
"\xff\xff\xff\xff\xff\xe7\xe7\xff\xff\xfc\xf9\xf3\xe7\xcf\x9f\xff"
"\xc3\x99\x91\x89\x99\x99\xc3\xff\xe7\xe7\xc7\xe7\xe7\xe7\x81\xff"
"\xc3\x99\xf9\xf3\xcf\x9f\x81\xff\xc3\x99\xf9\xe3\xf9\x99\xc3\xff"
"\xf9\xf1\xe1\x99\x80\xf9\xf9\xff\x81\x9f\x83\xf9\xf9\x99\xc3\xff"
"\xc3\x99\x9f\x83\x99\x99\xc3\xff\x81\x99\xf3\xe7\xe7\xe7\xe7\xff"
"\xc3\x99\x99\xc3\x99\x99\xc3\xff\xc3\x99\x99\xc1\xf9\x99\xc3\xff"
"\xff\xff\xe7\xff\xff\xe7\xff\xff\xff\xff\xe7\xff\xff\xe7\xe7\xcf"
"\xf1\xe7\xcf\x9f\xcf\xe7\xf1\xff\xff\xff\x81\xff\x81\xff\xff\xff"
"\x8f\xe7\xf3\xf9\xf3\xe7\x8f\xff\xc3\x99\xf9\xf3\xe7\xff\xe7\xff"
"\xff\xff\xff\x00\x00\xff\xff\xff\xe7\xc3\x99\x81\x99\x99\x99\xff"
"\x83\x99\x99\x83\x99\x99\x83\xff\xc3\x99\x9f\x9f\x9f\x99\xc3\xff"
"\x87\x93\x99\x99\x99\x93\x87\xff\x81\x9f\x9f\x87\x9f\x9f\x81\xff"
"\x81\x9f\x9f\x87\x9f\x9f\x9f\xff\xc3\x99\x9f\x91\x99\x99\xc3\xff"
"\x99\x99\x99\x81\x99\x99\x99\xff\xc3\xe7\xe7\xe7\xe7\xe7\xc3\xff"
"\xe1\xf3\xf3\xf3\xf3\x93\xc7\xff\x99\x93\x87\x8f\x87\x93\x99\xff"
"\x9f\x9f\x9f\x9f\x9f\x9f\x81\xff\x9c\x88\x80\x94\x9c\x9c\x9c\xff"
"\x99\x89\x81\x81\x91\x99\x99\xff\xc3\x99\x99\x99\x99\x99\xc3\xff"
"\x83\x99\x99\x83\x9f\x9f\x9f\xff\xc3\x99\x99\x99\x99\xc3\xf1\xff"
"\x83\x99\x99\x83\x87\x93\x99\xff\xc3\x99\x9f\xc3\xf9\x99\xc3\xff"
"\x81\xe7\xe7\xe7\xe7\xe7\xe7\xff\x99\x99\x99\x99\x99\x99\xc3\xff"
"\x99\x99\x99\x99\x99\xc3\xe7\xff\x9c\x9c\x9c\x94\x80\x88\x9c\xff"
"\x99\x99\xc3\xe7\xc3\x99\x99\xff\x99\x99\x99\xc3\xe7\xe7\xe7\xff"
"\x81\xf9\xf3\xe7\xcf\x9f\x81\xff\xe7\xe7\xe7\x00\x00\xe7\xe7\xe7"
"\x3f\x3f\xcf\xcf\x3f\x3f\xcf\xcf\xe7\xe7\xe7\xe7\xe7\xe7\xe7\xe7"
"\xcc\xcc\x33\x33\xcc\xcc\x33\x33\xcc\x66\x33\x99\xcc\x66\x33\x99"
"\xff\xff\xff\xff\xff\xff\xff\xff\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
"\xff\xff\xff\xff\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff"
"\xff\xff\xff\xff\xff\xff\xff\x00\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x3f"
"\x33\x33\xcc\xcc\x33\x33\xcc\xcc\xfc\xfc\xfc\xfc\xfc\xfc\xfc\xfc"
"\xff\xff\xff\xff\x33\x33\xcc\xcc\x33\x66\xcc\x99\x33\x66\xcc\x99"
"\xfc\xfc\xfc\xfc\xfc\xfc\xfc\xfc\xe7\xe7\xe7\xe0\xe0\xe7\xe7\xe7"
"\xff\xff\xff\xff\xf0\xf0\xf0\xf0\xe7\xe7\xe7\xe0\xe0\xff\xff\xff"
"\xff\xff\xff\x07\x07\xe7\xe7\xe7\xff\xff\xff\xff\xff\xff\x00\x00"
"\xff\xff\xff\xe0\xe0\xe7\xe7\xe7\xe7\xe7\xe7\x00\x00\xff\xff\xff"
"\xff\xff\xff\x00\x00\xe7\xe7\xe7\xe7\xe7\xe7\x07\x07\xe7\xe7\xe7"
"\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x3f\x1f\x1f\x1f\x1f\x1f\x1f\x1f\x1f"
"\xf8\xf8\xf8\xf8\xf8\xf8\xf8\xf8\x00\x00\xff\xff\xff\xff\xff\xff"
"\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00"
"\xfe\xfc\xf9\x93\x87\x8f\x9f\xff\xff\xff\xff\xff\x0f\x0f\x0f\x0f"
"\xf0\xf0\xf0\xf0\xff\xff\xff\xff\xe7\xe7\xe7\x07\x07\xff\xff\xff"
"\x0f\x0f\x0f\x0f\xff\xff\xff\xff\x0f\x0f\x0f\x0f\xf0\xf0\xf0\xf0";

unsigned char custom[ 256 * 8 ];


static unsigned char reverse8(unsigned char v) {
    return (v * 0x0202020202ULL & 0x010884422010ULL) % 1023;
}


int main() {

    if(0)
    {
#define REVERSE(xx) { \
        memcpy( custom, xx, sizeof(xx) - 1 ); \
        for( unsigned y = 0; y < sizeof(xx) - 1; ++y ) custom[y] = reverse8(custom[y]); \
        printf("const unsigned char %s_8x8[] =\n", #xx ); \
        for( auto end = sizeof(xx) - 1, it = end - end; it < end; ++it ) { \
            printf( &"\"\\x%02x%s"[ !!(it % 16) ], custom[it], &"\"\n\0\";\n"[ (1+it) < end ? 2 * !!((1+it) % 16) : 3 ] ); \
        } \
    }

        REVERSE( msx_8x8 );
        REVERSE( mirko_8x8 );
        REVERSE( namco_8x8 );
        REVERSE( c64_8x8 );
    }

    // 
    //memcpy( custom, msx_8x8, 256 * 8 );
//    memcpy( &custom[ 0 * 8], mirko_8x8, 64 * 8 );
//    memcpy( &custom[' ' * 8], namco_8x8, 62 * 8 );
//  memcpy( &custom['a'*8], &c64_8x8[ 8 ], 32 * 8 );
//  memcpy( &custom[128 * 8], c64_8x8, 128 * 8 ); 
//    memcpy( &custom[ 0 * 8], mirko_8x8, 64 * 8 );
    //memcpy( &custom['a'*8], &c64_8x8[ 8 ], ('z'-'a'+1) * 8 ); 

    memcpy( custom, mirko_8x8, 256 * 8 ); 

#   define COPY(a,b,fnt,aoff) memcpy( &custom[(a) * 8], &fnt[(a + aoff) * 8], ( ((b) - (a)) + 1 ) * 8 )
    COPY( '!', '"', namco_8x8, -32 );
    COPY( '0', '9', namco_8x8, -32 );
    COPY( 'A', 'Z', namco_8x8, -32 ); 
    /*COPY( 'S', 'T', mirko_8x8, -0 );
    COPY( 'X', 'X', mirko_8x8, -0 ); */

    printf("const unsigned char %s_8x8[] =\n", "custom" ); 
    for( auto end = sizeof(custom), it = end - end; it < end; ++it ) { 
        printf( &"\"\\x%02x%s"[ !!(it % 16) ], custom[it], &"\"\n\0\";\n"[ (1+it) < end ? 2 * !!((1+it) % 16) : 3 ] ); 
    } 

}
