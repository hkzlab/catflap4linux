typedef struct tagBITMAPFILEHEADER {
	uint16	bfType;
	uint32	bfSize;
	uint16	bfReserved1;
	uint16	bfReserved2;
	uint32	bfOffBits;
} __attribute__((packed)) __attribute__((aligned(2))) BITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER{
	uint32	biSize;
	uint32	biWidth;
	uint32	biHeight;
	uint16	biPlanes;
	uint16	biBitCount;
	uint32	biCompression;
	uint32	biSizeImage;
	uint32	biXPelsPerMeter;
	uint32	biYPelsPerMeter;
	uint32	biClrUsed;
	uint32	biClrImportant;
} __attribute__((packed)) __attribute__((aligned(2))) BITMAPINFOHEADER;
