#include "common.h"
#ifndef OPENSSL_NO_DH
#define DN_new DH_new
#ifndef HEADER_DH_H
#include <openssl/dh.h>
#endif
DH *get_dh2048()
	{
	static unsigned char dh2048_p[]={
		0xBA,0xCE,0x12,0x85,0x38,0x8E,0x66,0x86,0x6C,0x96,0x3B,0x1C,
		0x46,0x13,0x69,0x94,0x44,0x7D,0xD8,0x5E,0x47,0xFE,0x31,0x57,
		0x80,0xE4,0xF0,0xC6,0x25,0x85,0x16,0xB9,0x4C,0x86,0x0F,0x13,
		0x97,0xE1,0x7D,0x33,0xDD,0xFE,0x08,0xC1,0xEE,0x98,0xB3,0x0D,
		0x0F,0x65,0x42,0xA1,0x52,0x87,0x2B,0x6E,0xAD,0x90,0xDE,0x62,
		0xA8,0xC8,0xE5,0x64,0x7B,0xA9,0x93,0xC5,0x46,0x5D,0x20,0x61,
		0x73,0x62,0xE1,0x53,0xCF,0x39,0x6C,0x8C,0xDE,0x42,0x80,0x4F,
		0x96,0xA7,0x1E,0xF0,0x9D,0x9D,0x91,0x39,0xDA,0x0D,0x37,0x06,
		0x53,0xB2,0xA4,0x0D,0x4A,0x24,0x3A,0xB3,0x8E,0x18,0xB4,0x87,
		0xF9,0x9F,0xCF,0xC9,0x41,0xA5,0x39,0xFE,0x43,0x35,0x1D,0x7D,
		0xA0,0x9F,0x14,0xF7,0x13,0xF1,0x44,0xFF,0xB0,0xE6,0x84,0x3C,
		0x13,0x65,0x1A,0x22,0x56,0x10,0x9F,0x27,0xD6,0x2F,0x1D,0x0E,
		0x2E,0x8B,0x01,0x01,0x44,0x9D,0xFD,0xE2,0xEE,0x33,0x8E,0x42,
		0x2D,0xFC,0x2A,0xB4,0x8F,0x38,0x9F,0x9C,0x07,0x9A,0x15,0x57,
		0x97,0x9A,0x9A,0x79,0xBF,0x50,0x7D,0x5A,0xDF,0x62,0xDD,0xA3,
		0xD1,0x0B,0x4B,0xD7,0x69,0x5A,0xCE,0xE5,0x6B,0xB8,0xF0,0x17,
		0x3A,0xD9,0xD7,0xA8,0x3E,0x9C,0xDD,0x79,0xB5,0x2F,0xCC,0x4A,
		0x3B,0x10,0x95,0x08,0x23,0xA6,0x88,0xAD,0xF6,0x70,0xE9,0xEE,
		0x68,0xBC,0x23,0xDC,0x3A,0x56,0x7C,0x93,0x89,0xCE,0x98,0xB6,
		0x9C,0x0C,0xC4,0x3A,0x78,0x3D,0xE9,0x1B,0xDF,0xF9,0x7B,0xA7,
		0xC5,0x22,0xC0,0xBC,0x52,0x8E,0xA0,0x5D,0xCF,0x3B,0x3B,0x6B,
		0x2C,0x70,0xBB,0xE3,
		};
	static unsigned char dh2048_g[]={
		0x02,
		};
	DH *dh;

	if ((dh=DH_new()) == NULL) return(NULL);
	dh->p=BN_bin2bn(dh2048_p,sizeof(dh2048_p),NULL);
	dh->g=BN_bin2bn(dh2048_g,sizeof(dh2048_g),NULL);
	if ((dh->p == NULL) || (dh->g == NULL))
		{ DH_free(dh); return(NULL); }
	return(dh);
	}
#endif /* OPENSSL_NO_DH */