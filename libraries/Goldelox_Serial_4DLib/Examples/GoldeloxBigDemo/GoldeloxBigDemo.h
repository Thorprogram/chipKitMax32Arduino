#define maxrates 20

int  baudrates[maxrates] = {   110,    300,    600,   1200,   2400,   4800,   9600,
                             14400,  19200,  31250,  38400,  56000,  57600, 115200,
						    128000, 256000, 300000, 375000, 500000, 600000} ;

const char Image[2054] PROGMEM = {0,  32,   0,  32,  16,   0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x84, 0x31, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x51,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x04, 0x29, 0x45, 0x31, 0xA6, 0x94, 0xB2, 0x94, 0x92, 0x94, 0x92, 0x84, 0x31, 0x5A, 0xEC,
    0x18, 0xE4, 0x10, 0xA2, 0x84, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x24, 0xB5, 0x96, 0x29, 0x65,
    0x42, 0x29, 0xCE, 0x7A, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8, 0x52, 0xCB, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x10, 0xA2, 0x21, 0x24, 0xC6, 0x18, 0xAD, 0x55, 0x21, 0x24, 0x42, 0x29, 0xC6, 0x38, 0xB5, 0x96, 0xB5, 0x96, 0xB5, 0xB7, 0xBD, 0xF8, 0xBD, 0xF8,
    0xBD, 0xF8, 0x5A, 0xCB, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x8C, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x24, 0xC6, 0x18, 0xC6, 0x39, 0xA5, 0x14, 0x21, 0x24, 0x21, 0x45,
    0x42, 0x29, 0x39, 0xE7, 0x39, 0xE7, 0x52, 0x8A, 0x9C, 0xF4, 0xBD, 0xF8, 0xBD, 0xF8, 0xAD, 0x76, 0x29, 0x45, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x24,
    0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8, 0x94, 0xB2, 0x21, 0x04, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA3, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x04, 0xA5, 0x55, 0xBD, 0xF8,
    0xBD, 0xD7, 0x5B, 0x0C, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x24, 0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8, 0xA5, 0x35, 0x42, 0x08, 0x10, 0xA3, 0x29, 0x65, 0xD5, 0x34,
    0xE4, 0x0F, 0xE3, 0xEF, 0xBA, 0x89, 0x20, 0xA3, 0x52, 0x8A, 0xC6, 0x39, 0xBD, 0xF8, 0x7B, 0xF0, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x25, 0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8,
    0xA5, 0x35, 0x42, 0x08, 0x10, 0xA3, 0x29, 0x65, 0xD4, 0xF3, 0xDA, 0x28, 0xD9, 0xA6, 0xD9, 0xA6, 0xC1, 0x85, 0x38, 0xC3, 0x29, 0x86, 0xD6, 0x9A, 0xBD, 0xF8,
    0x7B, 0xF0, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x31, 0xFF, 0xFF, 0x84, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xA2, 0x21, 0x25, 0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8, 0xA5, 0x35, 0x42, 0x08, 0x10, 0xA3, 0x29, 0x04, 0xBB, 0x8E, 0xA9, 0xC6, 0xA1, 0x65, 0xA1, 0x65,
    0xA1, 0x65, 0x69, 0x04, 0x18, 0xA2, 0x52, 0x8A, 0xCE, 0x7A, 0xBD, 0xF8, 0x6B, 0x6E, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x84, 0x31,
    0x8C, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x21, 0x25, 0xC6, 0x18, 0xC6, 0x39, 0xBD, 0xF8, 0xAD, 0x55, 0x42, 0x08, 0x10, 0xA3,
    0x10, 0xA2, 0x18, 0xA3, 0x20, 0xA2, 0x18, 0xA2, 0x18, 0xA2, 0x18, 0xA2, 0x18, 0xA2, 0x10, 0xA2, 0x18, 0xE4, 0xBD, 0xF7, 0xC6, 0x18, 0xB5, 0xB7, 0x42, 0x08,
    0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x8C, 0x51, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0xC6, 0x38,
    0xC6, 0x39, 0xBD, 0xF8, 0xBD, 0xF8, 0x9C, 0xD3, 0x63, 0x0C, 0x63, 0x2D, 0x63, 0x2D, 0x63, 0x0C, 0x21, 0x04, 0x29, 0x45, 0x6B, 0x4D, 0x63, 0x4D, 0x63, 0x2D,
    0x7B, 0xCF, 0xC6, 0x39, 0xC6, 0x39, 0xBD, 0xF8, 0x84, 0x31, 0x18, 0xE4, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xA2, 0x10, 0xA2, 0x10, 0xA3, 0xD6, 0xBB, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xC6, 0x39, 0xC6, 0x39, 0xC6, 0x39,
    0xAD, 0x76, 0x21, 0x25, 0x42, 0x49, 0xD6, 0x9A, 0xC6, 0x39, 0xC6, 0x39, 0xC6, 0x39, 0xBE, 0x18, 0xBD, 0xF8, 0x94, 0xB3, 0x29, 0x86, 0x10, 0xA2, 0x10, 0xA2,
    0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa3, 0xD6, 0xBA, 0xBD, 0xF8,
    0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xF8, 0xA5, 0x14, 0x21, 0x24, 0x42, 0x29, 0xCE, 0x59, 0xBD, 0xF8, 0xBD, 0xF8, 0xBD, 0xD7,
    0xAD, 0x75, 0x73, 0xCF, 0x29, 0x65, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa3, 0x7B, 0xCF, 0x5A, 0xCB, 0x5A, 0xCB, 0x5A, 0xCB, 0x5a, 0xcb, 0x63, 0x2C, 0xB5, 0xB7, 0xBD, 0xF8, 0xA5, 0x14,
    0x21, 0x24, 0x31, 0xA6, 0x6B, 0x6E, 0x5A, 0xEB, 0x5a, 0xcb, 0x4A, 0x6A, 0x29, 0x86, 0x18, 0xC3, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0xBD, 0xD7, 0xBD, 0xF8, 0xA5, 0x14, 0x21, 0x24, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0xBD, 0xF7, 0xBD, 0xF8, 0x9C, 0xF4, 0x21, 0x04,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x7B, 0xCF, 0x63, 0x2D, 0x52, 0xAA, 0x18, 0xE3, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51,
    0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2,
    0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8C, 0x51, 0x10, 0xa2, 0x10, 0xa2, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x8C, 0x51, 0x8C, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF} ;
;

