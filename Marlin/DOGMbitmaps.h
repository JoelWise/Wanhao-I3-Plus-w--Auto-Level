#define START_BMPWIDTH 	128	//Width in pixels
#define START_BMPHEIGHT 	64	//Height in pixels
#define START_BMPBYTEWIDTH 	16	//Width in bytes
const unsigned char start_bmp[] PROGMEM = { //AVR-GCC, WinAVR
/*0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xE0,0x7F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xC0,0x3F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x80,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x0F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFE,0x00,0x07,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF8,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x00,0xFF,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x01,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xF8,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x03,0xFF,0xF0,
0xFF,0xFC,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x07,0xFF,0xF0,
0xFF,0xFE,0x00,0x00,0x00,0x0F,0xFF,0xF0,
0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0x80,0x00,0x00,0x1F,0xFF,0xF0,
0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF0,
0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,
0xFF,0xFF,0xF0,0x00,0x01,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFC,0x00,0x03,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0x00,0x1F,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,
0x83,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xF0,
0x80,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xF0,
0x88,0x7F,0xFF,0xFE,0x23,0xFF,0xFF,0xF0,
0x8C,0x70,0x38,0x0E,0x71,0x81,0xC0,0x70,
0x8C,0x60,0x38,0x0E,0x63,0x80,0xC0,0x30,
0x80,0xE3,0x19,0xC6,0x07,0xF8,0xC7,0x30,
0x80,0xE0,0x19,0xC6,0x03,0x80,0xC7,0x10,
0x8C,0x62,0x79,0xC6,0x63,0x9C,0xC7,0x30,
0x8C,0x63,0xF8,0xC6,0x71,0x18,0xC6,0x30,
0x8E,0x30,0x18,0x0E,0x71,0x80,0xC0,0x30,
0x9E,0x38,0x39,0x1E,0x79,0xC4,0xC4,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xC7,0xF0,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0*/
	

//���տƼ�
	/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
0x00,0x00,0x70,0x00,0x00,0x0E,0x0E,0x00,0x03,0x80,0xE0,0x0E,0x03,0x80,0x00,0x00,
0x00,0x00,0x71,0xE7,0x00,0x03,0x8C,0x00,0x0F,0x80,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x00,0x61,0xC6,0x00,0x03,0x98,0x60,0xFC,0x00,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x00,0xC1,0xC6,0x00,0xFF,0xFF,0xF0,0x0C,0x1C,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x00,0xCF,0xC6,0x00,0x03,0x1B,0x00,0x0C,0x0C,0xC0,0x0E,0xC3,0x1C,0x00,0x00,
0x00,0x01,0x8D,0xC6,0x00,0x63,0x19,0xC0,0x0C,0x0C,0xC0,0x7F,0xFF,0xF0,0x00,0x00,
0x00,0x01,0x9D,0xC6,0x00,0x33,0x1B,0x80,0x0C,0xC0,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x03,0xF9,0xC6,0x00,0x1B,0x1B,0x00,0xFF,0x80,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x03,0xB1,0xC6,0x00,0x1B,0x1E,0x00,0x0C,0x30,0xC0,0x0E,0x03,0x00,0x00,0x00,
0x00,0x00,0x61,0xC7,0x00,0x03,0x1C,0x70,0x1C,0x18,0xC0,0x0F,0xFF,0xF8,0x00,0x00,
0x00,0x00,0x61,0xFF,0x03,0xFF,0xFF,0xC0,0x1F,0x8C,0xC0,0x0F,0x18,0x30,0x00,0x00,
0x00,0x00,0xC1,0xBF,0x00,0x00,0x00,0x00,0x3F,0xCC,0xD8,0x7E,0x18,0x70,0x00,0x00,
0x00,0x01,0xBD,0xBF,0x00,0x1F,0xFF,0x00,0x3E,0xC0,0xFC,0x6E,0x0C,0x60,0x00,0x00,
0x00,0x03,0xE3,0x8F,0x00,0x18,0x03,0x00,0x6E,0x07,0xE0,0x0E,0x0C,0xE0,0x00,0x00,
0x00,0x00,0x03,0x1D,0x80,0x18,0x03,0x00,0xCE,0xFC,0xC0,0x0E,0x06,0xC0,0x00,0x00,
0x00,0x00,0x1B,0x19,0x80,0x18,0x03,0x00,0xCE,0x00,0xC0,0x0E,0x07,0xC0,0x00,0x00,
0x00,0x00,0xF6,0x31,0x80,0x1F,0xFF,0x01,0x8E,0x00,0xC0,0x0E,0x03,0x80,0x00,0x00,
0x00,0x07,0x8C,0x30,0xC0,0x18,0x03,0x00,0x0E,0x00,0xC0,0x0E,0x07,0x80,0x00,0x00,
0x00,0x03,0x0C,0x60,0xE0,0x18,0x03,0x00,0x0E,0x00,0xC0,0x0E,0x0C,0xE0,0x00,0x00,
0x00,0x00,0x18,0xC0,0xF0,0x1F,0xFF,0x00,0x0E,0x00,0xC0,0x3E,0x38,0x7C,0x00,0x00,
0x00,0x00,0x33,0x80,0x00,0x18,0x03,0x00,0x0E,0x00,0xC0,0x1D,0xE0,0x1C,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
*/
//����logoͼƬ ����
/*0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0x00,0x03,0x03,0xC0,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x0E,0x00,0x1F,0x81,0x80,0x38,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x60,0x03,0x9C,0x01,0xFF,0x01,0x80,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x3F,0xFF,0xF0,0x01,0xF8,0x01,0xFC,0x71,0x80,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x3F,0xFF,0xF0,0x01,0x9C,0x00,0x1C,0x39,0x80,0x30,0x1C,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0x0E,0x00,0x1C,0x1D,0x83,0xFD,0xFF,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0x9F,0xC0,0x1D,0x99,0x80,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x31,0x98,0xC1,0xFF,0xC1,0x80,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x1B,0x0D,0x81,0x1C,0x61,0x80,0x30,0x1C,0x80,0x00,0x00,
0x00,0x00,0x00,0x01,0x80,0x0E,0x07,0x00,0x3C,0x31,0x80,0x3D,0xFF,0xC0,0x00,0x00,
0x00,0x00,0x1F,0xFF,0xC0,0x3B,0x9D,0xC0,0x3F,0x39,0x80,0xFD,0xFF,0xC0,0x00,0x00,
0x00,0x00,0x1F,0xFF,0xC0,0x7F,0xFF,0xF0,0x7F,0x99,0xA3,0xF0,0xC3,0x80,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x30,0x7F,0x91,0xF3,0xF0,0x63,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC7,0xFE,0x60,0xFD,0x3F,0xF3,0x30,0x67,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xC6,0x06,0x00,0xDD,0xFF,0x80,0x30,0x76,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x07,0xFE,0x01,0x9D,0xC1,0x80,0x30,0x3E,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x01,0x1C,0x01,0x80,0x30,0x1C,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x38,0x07,0xFE,0x00,0x1C,0x01,0x80,0x30,0x7E,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFC,0x06,0x06,0x30,0x1C,0x01,0x83,0xF0,0xFF,0x80,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFC,0xFF,0xFF,0xF8,0x1C,0x01,0x81,0xF3,0xC3,0xF0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF8,0x1C,0x03,0x80,0xF7,0x01,0xE0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x03,0x80,0x40,0x00,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,*/

//3D printer
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFC,0x03,0xFC,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x03,0xFE,0x03,0xFF,0x00,0x00,0xFF,0x80,0x01,0x80,0x00,0x03,0x00,0x00,0x00,0x00,
0x03,0x07,0x06,0x07,0x80,0x01,0x81,0xC0,0x01,0x80,0x00,0x03,0x00,0x00,0x00,0x00,
0x00,0x03,0x06,0x01,0x80,0x01,0x80,0xC0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,
0x00,0x03,0x06,0x01,0xC0,0x01,0x80,0xC0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,
0x00,0x06,0x06,0x00,0xC0,0x01,0x80,0xC6,0x71,0x83,0x7E,0x0F,0xE0,0xF8,0x0C,0xE0,
0x00,0x0E,0x06,0x00,0xC0,0x01,0x80,0xC7,0xF1,0x83,0xFF,0x1F,0xE3,0xFC,0x0F,0xE0,
0x00,0xF8,0x0C,0x00,0xC0,0x03,0x01,0x8F,0x03,0x07,0x87,0x06,0x07,0x0E,0x1E,0x00,
0x00,0xF8,0x0C,0x00,0xC0,0x03,0x07,0x0C,0x03,0x06,0x03,0x0C,0x0C,0x06,0x18,0x00,
0x00,0x0C,0x0C,0x00,0xC0,0x03,0xFE,0x0C,0x03,0x06,0x03,0x0C,0x0C,0x06,0x18,0x00,
0x00,0x06,0x0C,0x01,0x80,0x03,0xF8,0x0C,0x03,0x06,0x03,0x0C,0x1F,0xFE,0x18,0x00,
0x00,0x06,0x18,0x01,0x80,0x06,0x00,0x18,0x06,0x0C,0x06,0x0C,0x1F,0xFE,0x30,0x00,
0x00,0x06,0x18,0x01,0x80,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x00,0x06,0x18,0x03,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x00,0x0C,0x18,0x06,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x18,0x00,0x30,0x00,
0x18,0x1C,0x18,0x1C,0x00,0x06,0x00,0x18,0x06,0x0C,0x06,0x18,0x1C,0x0C,0x30,0x00,
0x1F,0xF8,0x3F,0xF8,0x00,0x0C,0x00,0x30,0x0C,0x18,0x0C,0x1F,0x8F,0xFC,0x60,0x00,
0x0F,0xE0,0x3F,0xE0,0x00,0x0C,0x00,0x30,0x0C,0x18,0x0C,0x0F,0x83,0xF0,0x60,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,



};

#define STATUS_SCREENWIDTH 		125	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	16	//Width in bytes
const unsigned char status_screen0_bmp[] PROGMEM = { //AVR-GCC, WinAVR
/*0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x0C,0x60,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x47,0x0E,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4F,0x0F,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5F,0x0F,0xA0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x5E,0x07,0xA0,
0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x40,0xF0,0x20,
0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x40,0x60,0x20,
0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x5E,0x07,0xA0,
0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x5F,0x0F,0xA0,
0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x4F,0x0F,0x20,
0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x47,0x0E,0x20,
0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x63,0x0C,0x60,
0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00*/


//����
	/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x02,0x48,0x04,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x02,0x48,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x05,0x48,0x12,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0x09,0x48,0x0A,0xA0,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x0E,0x48,0x3F,0xF8,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x04,0x48,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x0B,0x68,0x0F,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x0C,0x94,0x08,0x20,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x02,0x94,0x0F,0xE0,0x00,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0x0D,0x22,0x08,0x20,0x00,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x02,0x42,0x08,0x20,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x04,0x41,0x0F,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/
	// ����/���ȶ��� ��һ��ͼ  ����
/*0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x00,0x08,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x07,0xFC,0x02,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0x00,0x00,0x1E,0xF0,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x00,0x0C,0x60,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x00,0x00,0x12,0x90,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x03,0xF8,0x3F,0xFC,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x00,0x27,0xE4,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x00,0x00,0x04,0x20,0x00,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0x00,0x02,0x07,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x0F,0xFF,0x04,0x20,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x3F,0xFC,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,*/

	//3D logo
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFC,0x10,
0x00,0x3E,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x78,0x10,
0x00,0xC1,0x86,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x30,0x10,
0x00,0xC1,0x86,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x00,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x00,0x1F,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x2F,0x7B,0xD0,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x2E,0x31,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2C,0x00,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x1F,0xE0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x30,0x10,
0x00,0xC1,0x86,0x18,0x00,0x3F,0xF0,0x00,0x00,0x41,0x04,0x00,0x00,0x20,0x78,0x10,
0x00,0x3E,0x0F,0xF0,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x20,0xFC,0x10,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x30,0xFC,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,

};

#define STATUS_SCREENWIDTH 		125	//Width in pixels
#define STATUS_SCREENHEIGHT 	19	//Height in pixels
#define STATUS_SCREENBYTEWIDTH 	16	//Width in bytes
const unsigned char status_screen1_bmp[] PROGMEM = { //AVR-GCC, WinAVR
/*0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x61,0xF8,0x60,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xF8,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xF0,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x60,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x58,0x01,0xA0,
0x7F,0x80,0x00,0x3F,0xC0,0x00,0x3F,0xC0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
0xFB,0xC0,0x00,0x79,0xE0,0x00,0x79,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
0xF3,0xC0,0x00,0x76,0xE0,0x00,0x76,0xE0,0x00,0x20,0x82,0x00,0x5E,0xF7,0xA0,
0xEB,0xC0,0x00,0x7E,0xE0,0x00,0x7E,0xE0,0x00,0x41,0x04,0x00,0x5C,0x63,0xA0,
0x7B,0x80,0x00,0x3D,0xC0,0x00,0x39,0xC0,0x00,0x82,0x08,0x00,0x58,0x01,0xA0,
0x7B,0x80,0x00,0x3B,0xC0,0x00,0x3E,0xC0,0x01,0x04,0x10,0x00,0x40,0x60,0x20,
0xFB,0xC0,0x00,0x77,0xE0,0x00,0x76,0xE0,0x01,0x04,0x10,0x00,0x40,0xF0,0x20,
0xFB,0xC0,0x00,0x70,0xE0,0x00,0x79,0xE0,0x00,0x82,0x08,0x00,0x41,0xF8,0x20,
0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x7F,0xE0,0x00,0x41,0x04,0x00,0x61,0xF8,0x60,
0x3F,0x00,0x00,0x1F,0x80,0x00,0x1F,0x80,0x00,0x00,0x00,0x00,0x70,0x00,0xE0,
0x1E,0x00,0x00,0x0F,0x00,0x00,0x0F,0x00,0x01,0xFF,0xFF,0x80,0x7F,0xFF,0xE0,
0x0C,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x01,0xFF,0xFF,0x80,0x00,0x00,0x00*/



//����
	/*
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x02,0x48,0x04,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x02,0x48,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x05,0x48,0x12,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0x09,0x48,0x0A,0xA0,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x0E,0x48,0x3F,0xF8,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x04,0x48,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x0B,0x68,0x0F,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x0C,0x94,0x08,0x20,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x02,0x94,0x0F,0xE0,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x0D,0x22,0x08,0x20,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x02,0x42,0x08,0x20,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x04,0x41,0x0F,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
*/
	// ����/���ȶ��� �ڶ���ͼ ����
	
/*0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x08,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x07,0xFC,0x02,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0x00,0x00,0x1E,0xF0,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x00,0x0C,0x60,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x00,0x00,0x12,0x90,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x03,0xF8,0x3F,0xFC,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x00,0x27,0xE4,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x00,0x00,0x04,0x20,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x02,0x07,0xE0,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x0F,0xFF,0x04,0x20,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x3F,0xFC,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,*/

	//3D logo
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x87,0x90,
0x00,0x3E,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2F,0x03,0xD0,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x00,0x1F,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x04,0x10,0x40,0x00,0x20,0x78,0x10,
0x00,0x03,0x06,0x04,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x20,0x30,0x10,
0x00,0x01,0x86,0x04,0x00,0x1F,0xE0,0x00,0x00,0x10,0x41,0x00,0x00,0x2F,0x03,0xD0,
0x00,0xC1,0x86,0x0C,0x00,0x1F,0xE0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0xC1,0x86,0x18,0x00,0x3F,0xF0,0x00,0x00,0x20,0x82,0x00,0x00,0x2F,0x87,0xD0,
0x00,0x3E,0x0F,0xF0,0x00,0x3F,0xF0,0x00,0x00,0x10,0x41,0x00,0x00,0x27,0x87,0x90,
0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x08,0x20,0x80,0x00,0x33,0x87,0x30,
0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,


};

