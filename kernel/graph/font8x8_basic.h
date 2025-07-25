#pragma once

#include "types.h"

static const uint8_t font8x8_basic[128][8] = {
    [' '] = {0,0,0,0,0,0,0,0},
    ['!'] = {0x18,0x18,0x18,0x18,0x00,0x18,0x00,0x00},
    ['"'] = {0x6c,0x6c,0x48,0x00,0x00,0x00,0x00,0x00},
    ['#'] = {0x6c,0x6c,0xfe,0x6c,0xfe,0x6c,0x6c,0x00},
    ['$'] = {0x18,0x3e,0x58,0x3c,0x1a,0x7c,0x18,0x00},
    ['%'] = {0x00,0xc6,0xcc,0x18,0x30,0x66,0xc6,0x00},
    ['&'] = {0x38,0x6c,0x38,0x76,0xdc,0xcc,0x76,0x00},
    ['\''] = {0x30,0x30,0x60,0x00,0x00,0x00,0x00,0x00},
    ['('] = {0x0c,0x18,0x30,0x30,0x30,0x18,0x0c,0x00},
    [')'] = {0x30,0x18,0x0c,0x0c,0x0c,0x18,0x30,0x00},
    ['*'] = {0x00,0x66,0x3c,0xff,0x3c,0x66,0x00,0x00},
    ['+'] = {0x00,0x18,0x18,0x7e,0x18,0x18,0x00,0x00},
    [','] = {0x00,0x00,0x00,0x00,0x30,0x30,0x60,0x00},
    ['-'] = {0x00,0x00,0x00,0x7e,0x00,0x00,0x00,0x00},
    ['.'] = {0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x00},
    ['/'] = {0x06,0x0c,0x18,0x30,0x60,0xc0,0x80,0x00},
    ['0'] = {0x7c,0xc6,0xce,0xd6,0xe6,0xc6,0x7c,0x00},
    ['1'] = {0x18,0x38,0x18,0x18,0x18,0x18,0x7e,0x00},
    ['2'] = {0x7c,0xc6,0x0e,0x1c,0x70,0xc0,0xfe,0x00},
    ['3'] = {0x7c,0xc6,0x06,0x3c,0x06,0xc6,0x7c,0x00},
    ['4'] = {0x1c,0x3c,0x6c,0xcc,0xfe,0x0c,0x1e,0x00},
    ['5'] = {0xfe,0xc0,0xfc,0x06,0x06,0xc6,0x7c,0x00},
    ['6'] = {0x38,0x60,0xc0,0xfc,0xc6,0xc6,0x7c,0x00},
    ['7'] = {0xfe,0xc6,0x0c,0x18,0x30,0x30,0x30,0x00},
    ['8'] = {0x7c,0xc6,0xc6,0x7c,0xc6,0xc6,0x7c,0x00},
    ['9'] = {0x7c,0xc6,0xc6,0x7e,0x06,0x0c,0x78,0x00},
    [':'] = {0x00,0x30,0x30,0x00,0x00,0x30,0x30,0x00},
    [';'] = {0x00,0x30,0x30,0x00,0x00,0x30,0x30,0x60},
    ['<'] = {0x0c,0x18,0x30,0x60,0x30,0x18,0x0c,0x00},
    ['='] = {0x00,0x00,0x7e,0x00,0x7e,0x00,0x00,0x00},
    ['>'] = {0x30,0x18,0x0c,0x06,0x0c,0x18,0x30,0x00},
    ['?'] = {0x7c,0xc6,0x0c,0x18,0x18,0x00,0x18,0x00},
    ['@'] = {0x7c,0xc6,0xde,0xde,0xde,0xc0,0x78,0x00},

    ['A'] = {0x38,0x6c,0xc6,0xfe,0xc6,0xc6,0xc6,0x00},
    ['B'] = {0xfc,0x66,0x66,0x7c,0x66,0x66,0xfc,0x00},
    ['C'] = {0x3c,0x66,0xc0,0xc0,0xc0,0x66,0x3c,0x00},
    ['D'] = {0xf8,0x6c,0x66,0x66,0x66,0x6c,0xf8,0x00},
    ['E'] = {0xfe,0x62,0x68,0x78,0x68,0x62,0xfe,0x00},
    ['F'] = {0xfe,0x62,0x68,0x78,0x68,0x60,0xf0,0x00},
    ['G'] = {0x3c,0x66,0xc0,0xde,0xc6,0x66,0x3e,0x00},
    ['H'] = {0xc6,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0x00},
    ['I'] = {0x7e,0x18,0x18,0x18,0x18,0x18,0x7e,0x00},
    ['J'] = {0x1e,0x0c,0x0c,0x0c,0xcc,0xcc,0x78,0x00},
    ['K'] = {0xe6,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x00},
    ['L'] = {0xf0,0x60,0x60,0x60,0x62,0x66,0xfe,0x00},
    ['M'] = {0xc6,0xee,0xfe,0xfe,0xd6,0xc6,0xc6,0x00},
    ['N'] = {0xc6,0xe6,0xf6,0xde,0xce,0xc6,0xc6,0x00},
    ['O'] = {0x7c,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00},
    ['P'] = {0x7C, 0x62, 0x62, 0x7C, 0x60, 0x60, 0x60, 0x00},
    ['Q'] = {0x7C, 0x62, 0x62, 0x62, 0x7C, 0x06, 0x06, 0x00},
    ['R'] = {0x7C, 0x62, 0x62, 0x7C, 0x6C, 0x66, 0x62, 0x00},
    ['S'] = {0x3C, 0x62, 0x60, 0x3C, 0x06, 0x62, 0x3C, 0x00},
    ['T'] = {0x7E, 0x5A, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00},
    ['U'] = {0x62, 0x62, 0x62, 0x62, 0x62, 0x62, 0x3C, 0x00},
    ['V'] = {0x62, 0x62, 0x62, 0x62, 0x62, 0x3C, 0x18, 0x00},
    ['W'] = {0x62, 0x62, 0x62, 0x6A, 0x6A, 0x7E, 0x24, 0x00},
    ['X'] = {0x62, 0x62, 0x34, 0x18, 0x34, 0x62, 0x62, 0x00},
    ['Y'] = {0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x00},
    ['Z'] = {0x7E, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x7E, 0x00},

    ['a'] = {0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00},
    ['b'] = {0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00},
    ['c'] = {0x00, 0x00, 0x3C, 0x66, 0x60, 0x66, 0x3C, 0x00},
    ['d'] = {0x06, 0x06, 0x3E, 0x66, 0x66, 0x66, 0x3E, 0x00},
    ['e'] = {0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00},
    ['f'] = {0x0E, 0x18, 0x3E, 0x18, 0x18, 0x18, 0x18, 0x00},
    ['g'] = {0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x3C},
    ['h'] = {0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00},
    ['i'] = {0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x3C, 0x00},
    ['j'] = {0x0C, 0x00, 0x0C, 0x0C, 0x0C, 0x6C, 0x6C, 0x38},
    ['k'] = {0x60, 0x60, 0x66, 0x6C, 0x78, 0x6C, 0x66, 0x00},
    ['l'] = {0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00},
    ['m'] = {0x00, 0x00, 0x6C, 0x7E, 0x7E, 0x6C, 0x6C, 0x00},
    ['n'] = {0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00},
    ['o'] = {0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00},
    ['p'] = {0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60},
    ['q'] = {0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06},
    ['r'] = {0x00, 0x00, 0x6C, 0x76, 0x60, 0x60, 0x60, 0x00},
    ['s'] = {0x00, 0x00, 0x3E, 0x60, 0x3C, 0x06, 0x7C, 0x00},
    ['t'] = {0x10, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x1C, 0x00},
    ['u'] = {0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00},
    ['v'] = {0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00},
    ['w'] = {0x00, 0x00, 0x6C, 0x6C, 0x7E, 0x7E, 0x24, 0x00},
    ['x'] = {0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00},
    ['y'] = {0x00, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x3C},
    ['z'] = {0x00, 0x00, 0x7E, 0x0C, 0x18, 0x30, 0x7E, 0x00},

    ['['] = {0x1c,0x18,0x18,0x18,0x18,0x18,0x1c,0x00},
    ['\\'] = {0xc0,0x60,0x30,0x18,0x0c,0x06,0x02,0x00},
    [']'] = {0x38,0x18,0x18,0x18,0x18,0x18,0x38,0x00},
    ['^'] = {0x10,0x38,0x6c,0xc6,0x00,0x00,0x00,0x00},
    ['_'] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff},
    ['`'] = {0x30,0x18,0x0c,0x00,0x00,0x00,0x00,0x00},
    ['{'] = {0x0e,0x0c,0x0c,0x38,0x0c,0x0c,0x0e,0x00},
    ['|'] = {0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00},
    ['}'] = {0x70,0x30,0x30,0x1c,0x30,0x30,0x70,0x00},
    ['~'] = {0x76,0xdc,0x00,0x00,0x00,0x00,0x00,0x00},
};
