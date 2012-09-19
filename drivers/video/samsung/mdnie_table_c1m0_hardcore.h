#ifndef __MDNIE_TABLE_HARDCORE__
#define __MDNIE_TABLE_HARDCORE__

#include "mdnie.h"


static const unsigned short hardcore_tune_dynamic_gallery[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1404, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0293, /*CC lut r	16 144*/
	0x0022, 0x1aa5, /*CC lut r	32 160*/
	0x0023, 0x29b7, /*CC lut r	48 176*/
	0x0024, 0x39c8, /*CC lut r	64 192*/
	0x0025, 0x4bd8, /*CC lut r	80 208*/
	0x0026, 0x5de6, /*CC lut r	96 224*/
	0x0027, 0x6ff4, /*CC lut r 112 240*/
	0x0028, 0x81ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_dynamic_ui[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1804, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0293, /*CC lut r	16 144*/
	0x0022, 0x1aa5, /*CC lut r	32 160*/
	0x0023, 0x29b7, /*CC lut r	48 176*/
	0x0024, 0x39c8, /*CC lut r	64 192*/
	0x0025, 0x4bd8, /*CC lut r	80 208*/
	0x0026, 0x5de6, /*CC lut r	96 224*/
	0x0027, 0x6ff4, /*CC lut r 112 240*/
	0x0028, 0x81ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_dynamic_video[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1404, /*CS weight grayTH*/
	0x00e1, 0xff00, /*SCR RrCr*/
	0x00e2, 0x00ff, /*SCR RgCg*/
	0x00e3, 0x00ff, /*SCR RbCb*/
	0x00e4, 0x00ff, /*SCR GrMr*/
	0x00e5, 0xff00, /*SCR GgMg*/
	0x00e6, 0x00ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00ff, /*SCR BgYg*/
	0x00e9, 0xff00, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00ff, /*SCR KgWg*/
	0x00ec, 0x00ff, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0293, /*CC lut r	16 144*/
	0x0022, 0x1aa5, /*CC lut r	32 160*/
	0x0023, 0x29b7, /*CC lut r	48 176*/
	0x0024, 0x39c8, /*CC lut r	64 192*/
	0x0025, 0x4bd8, /*CC lut r	80 208*/
	0x0026, 0x5de6, /*CC lut r	96 224*/
	0x0027, 0x6ff4, /*CC lut r 112 240*/
	0x0028, 0x81ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_dynamic_vtcall[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x008a, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0005, /*FA cs1 | de8 dnr4 hdr2 fa1*/
	0x0039, 0x0080, /*FA dnrWeight*/
	0x0080, 0x0fff, /*DNR dirTh*/
	0x0081, 0x19ff, /*DNR dirnumTh decon7Th*/
	0x0082, 0xff16, /*DNR decon5Th maskTh*/
	0x0083, 0x0000, /*DNR blTh*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1a04, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	0*/
	0x0021, 0x0293, /*CC lut r	16 144*/
	0x0022, 0x1aa5, /*CC lut r	32 160*/
	0x0023, 0x29b7, /*CC lut r	48 176*/
	0x0024, 0x39c8, /*CC lut r	64 192*/
	0x0025, 0x4bd8, /*CC lut r	80 208*/
	0x0026, 0x5de6, /*CC lut r	96 224*/
	0x0027, 0x6ff4, /*CC lut r 112 240*/
	0x0028, 0x81ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_movie_gallery[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x000c, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00f8, /*SCR KgWg*/
	0x00ec, 0x00f1, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_movie_ui[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x000c, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00f8, /*SCR KgWg*/
	0x00ec, 0x00f1, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_movie_video[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x000c, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0040, /*DE pe*/
	0x0093, 0x0040, /*DE pf*/
	0x0094, 0x0040, /*DE pb*/
	0x0095, 0x0040, /*DE ne*/
	0x0096, 0x0040, /*DE nf*/
	0x0097, 0x0040, /*DE nb*/
	0x0098, 0x1000, /*DE max ratio*/
	0x0099, 0x0100, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1604, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00f8, /*SCR KgWg*/
	0x00ec, 0x00f1, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_movie_vtcall[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00aa, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0005, /*FA cs1 | de8 dnr4 hdr2 fa1*/
	0x0039, 0x0080, /*FA dnrWeight*/
	0x0080, 0x0fff, /*DNR dirTh*/
	0x0081, 0x19ff, /*DNR dirnumTh decon7Th*/
	0x0082, 0xff16, /*DNR decon5Th maskTh*/
	0x0083, 0x0000, /*DNR blTh*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00f8, /*SCR KgWg*/
	0x00ec, 0x00f1, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_standard_gallery[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290,	/*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_standard_ui[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290,	/*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_standard_video[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0088, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x00e1, 0xff00, /*SCR RrCr*/
	0x00e2, 0x00ff, /*SCR RgCg*/
	0x00e3, 0x00ff, /*SCR RbCb*/
	0x00e4, 0x00ff, /*SCR GrMr*/
	0x00e5, 0xff00, /*SCR GgMg*/
	0x00e6, 0x00ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00ff, /*SCR BgYg*/
	0x00e9, 0xff00, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00ff, /*SCR KgWg*/
	0x00ec, 0x00ff, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290,	/*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_standard_vtcall[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x008a, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0005, /*FA cs1 | de8 dnr4 hdr2 fa1*/
	0x0039, 0x0080, /*FA dnrWeight*/
	0x0080, 0x0fff, /*DNR dirTh*/
	0x0081, 0x19ff, /*DNR dirnumTh decon7Th*/
	0x0082, 0xff16, /*DNR decon5Th maskTh*/
	0x0083, 0x0000, /*DNR blTh*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1404, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290,	/*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_natural_gallery[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00a8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1804, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00fa, /*SCR KgWg*/
	0x00ec, 0x00f8, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_natural_ui[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00a8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1804, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00fa, /*SCR KgWg*/
	0x00ec, 0x00f8, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_natural_video[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00a8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1804, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00fa, /*SCR KgWg*/
	0x00ec, 0x00f8, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_natural_vtcall[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00aa, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0005, /*FA cs1 | de8 dnr4 hdr2 fa1*/
	0x0039, 0x0080, /*FA dnrWeight*/
	0x0080, 0x0fff, /*DNR dirTh*/
	0x0081, 0x19ff, /*DNR dirnumTh decon7Th*/
	0x0082, 0xff16, /*DNR decon5Th maskTh*/
	0x0083, 0x0000, /*DNR blTh*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1804, /*CS weight grayTH*/
	0x00e1, 0xd6ac, /*SCR RrCr*/
	0x00e2, 0x32ff, /*SCR RgCg*/
	0x00e3, 0x2ef0, /*SCR RbCb*/
	0x00e4, 0xa5fa, /*SCR GrMr*/
	0x00e5, 0xff4d, /*SCR GgMg*/
	0x00e6, 0x59ff, /*SCR GbMb*/
	0x00e7, 0x00ff, /*SCR BrYr*/
	0x00e8, 0x00fb, /*SCR BgYg*/
	0x00e9, 0xff61, /*SCR BbYb*/
	0x00ea, 0x00ff, /*SCR KrWr*/
	0x00eb, 0x00fa, /*SCR KgWg*/
	0x00ec, 0x00f8, /*SCR KbWb*/
	0x0000, 0x0001, /*BANK 1*/
	0x001f, 0x0080, /*CC chsel strength*/
	0x0020, 0x0000, /*CC lut r	 0*/
	0x0021, 0x0290, /*CC lut r	16 144*/
	0x0022, 0x20a0, /*CC lut r	32 160*/
	0x0023, 0x30b0, /*CC lut r	48 176*/
	0x0024, 0x40c0, /*CC lut r	64 192*/
	0x0025, 0x50d0, /*CC lut r	80 208*/
	0x0026, 0x60e0, /*CC lut r	96 224*/
	0x0027, 0x70f0, /*CC lut r 112 240*/
	0x0028, 0x80ff, /*CC lut r 128 255*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_camera[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0008, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_camera_outdoor[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x0408, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0000, /*DE pe*/
	0x0093, 0x0000, /*DE pf*/
	0x0094, 0x0000, /*DE pb*/
	0x0095, 0x0000, /*DE ne*/
	0x0096, 0x0000, /*DE nf*/
	0x0097, 0x0000, /*DE nb*/
	0x0098, 0x0000, /*DE max ratio*/
	0x0099, 0x0000, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg RY*/
	0x00b1, 0x1010, /*CS hg GC*/
	0x00b2, 0x1010, /*CS hg BM*/
	0x00b3, 0x1204, /*CS weight grayTH*/
	0x0000, 0x0001, /*BANK 1*/
	0x00d0, 0x01c0, /*UC y*/
	0x00d1, 0x01ff, /*UC cs*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_cold[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00e8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0000, 0x0001, /*BANK 1*/
	0x0001, 0x0064, /*MCM 10000K*/
	0x0009, 0xa08b, /*MCM 5cb 1cr W*/
	0x000b, 0x7a7a, /*MCM 4cr 5cr W*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_cold_outdoor[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x04e8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0000, 0x0001, /*BANK 1*/
	0x0001, 0x0064, /*MCM 10000K*/
	0x0009, 0xa08b, /*MCM 5cb 1cr W*/
	0x000b, 0x7a7a, /*MCM 4cr 5cr W*/
	0x00d0, 0x01c0, /*UC y*/
	0x00d1, 0x01ff, /*UC cs*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_outdoor[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x04a8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0000, 0x0001, /*BANK 1*/
	0x00d0, 0x01c0, /*UC y*/
	0x00d1, 0x01ff, /*UC cs*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_warm[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x00e8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0000, 0x0001, /*BANK 1*/
	0x0001, 0x0028, /*MCM 4000K*/
	0x0007, 0x7878, /*MCM 1cb 2cb W*/
	0x0009, 0xa08b, /*MCM 5cb 1cr W*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};

static const unsigned short hardcore_tune_warm_outdoor[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x04e8, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0000, 0x0001, /*BANK 1*/
	0x0001, 0x0028, /*MCM 4000K*/
	0x0007, 0x7878, /*MCM 1cb 2cb W*/
	0x0009, 0xa08b, /*MCM 5cb 1cr W*/
	0x00d0, 0x01c0, /*UC y*/
	0x00d1, 0x01ff, /*UC cs*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};
#if defined(CONFIG_FB_MDNIE_CYANOGEN)
static const unsigned short hardcore_tune_cyanogenmod[] = {
	0x0000, 0x0000, /*BANK 0*/
	0x0008, 0x000c, /*Dither8 UC4 ABC2 CP1 | CC8 MCM4 SCR2 SCC1 | CS8 DE4 DNR2 HDR1*/
	0x0030, 0x0000, /*FA cs1 de8 hdr2 fa1*/
	0x0092, 0x0040, /*DE pe*/
	0x0093, 0x0040, /*DE pf*/
	0x0094, 0x0040, /*DE pb*/
	0x0095, 0x0040, /*DE ne*/
	0x0096, 0x0040, /*DE nf*/
	0x0097, 0x0040, /*DE nb*/
	0x0098, 0x1000, /*DE max ratio*/
	0x0099, 0x0100, /*DE min ratio*/
	0x00b0, 0x1010, /*CS hg ry*/
	0x00b1, 0x1010, /*CS hg gc*/
	0x00b2, 0x1010, /*CS hg bm*/
	0x00b3, 0x1604, /*CS weight grayTH*/
	0x00ff, 0x0000, /*Mask Release*/
	END_SEQ, 0x0000,
};
#endif
struct mdnie_tunning_info hardcore_etc_table[CABC_MAX][OUTDOOR_MAX][TONE_MAX] = {
	{
		{
			{"NORMAL",		NULL},
			{"WARM",		hardcore_tune_warm},
			{"COLD",		hardcore_tune_cold},
		},
		{
			{"NORMAL_OUTDOOR",	hardcore_tune_outdoor},
			{"WARM_OUTDOOR",	hardcore_tune_warm_outdoor},
			{"COLD_OUTDOOR",	hardcore_tune_cold_outdoor},
		},
	}
};

struct mdnie_tunning_info hardcore_tunning_table[CABC_MAX][MODE_MAX][SCENARIO_MAX] = {
	{
		{
			{"DYNAMIC_UI",			hardcore_tune_dynamic_ui},
			{"DYNAMIC_VIDEO_NORMAL",	hardcore_tune_dynamic_video},
			{"DYNAMIC_VIDEO_WARM",		hardcore_tune_dynamic_video},
			{"DYNAMIC_VIDEO_COLD",		hardcore_tune_dynamic_video},
			{"CAMERA",			hardcore_tune_camera},
			{"DYNAMIC_UI",			hardcore_tune_dynamic_ui},
			{"DYNAMIC_GALLERY",		hardcore_tune_dynamic_gallery},
			{"DYNAMIC_VT",			hardcore_tune_dynamic_vtcall},
#if defined(CONFIG_FB_MDNIE_CYANOGEN)
			{"CYANOGENMOD",		hardcore_tune_cyanogenmod},
#endif
		}, {
			{"STANDARD_UI",			hardcore_tune_standard_ui},
			{"STANDARD_VIDEO_NORMAL",	hardcore_tune_standard_video},
			{"STANDARD_VIDEO_WARM",		hardcore_tune_standard_video},
			{"STANDARD_VIDEO_COLD",		hardcore_tune_standard_video},
			{"CAMERA",			hardcore_tune_camera},
			{"STANDARD_UI",			hardcore_tune_standard_ui},
			{"STANDARD_GALLERY",		hardcore_tune_standard_gallery},
			{"STANDARD_VT",			hardcore_tune_standard_vtcall},
#if defined(CONFIG_FB_MDNIE_CYANOGEN)
			{"CYANOGENMOD",		hardcore_tune_cyanogenmod},
#endif
		}, {
			{"NATURAL_UI",			hardcore_tune_natural_ui},
			{"NATURAL_VIDEO_NORMAL",	hardcore_tune_natural_video},
			{"NATURAL_VIDEO_WARM",		hardcore_tune_natural_video},
			{"NATURAL_VIDEO_COLD",		hardcore_tune_natural_video},
			{"CAMERA",			hardcore_tune_camera},
			{"NATURAL_UI",			hardcore_tune_natural_ui},
			{"NATURAL_GALLERY",		hardcore_tune_natural_gallery},
			{"NATURAL_VT",			hardcore_tune_natural_vtcall},
#if defined(CONFIG_FB_MDNIE_CYANOGEN)
			{"CYANOGENMOD",		hardcore_tune_cyanogenmod},
#endif
		}, {
			{"MOVIE_UI",			hardcore_tune_movie_ui},
			{"MOVIE_VIDEO_NORMAL",		hardcore_tune_movie_video},
			{"MOVIE_VIDEO_WARM",		hardcore_tune_movie_video},
			{"MOVIE_VIDEO_COLD",		hardcore_tune_movie_video},
			{"CAMERA",			hardcore_tune_camera},
			{"MOVIE_UI",			hardcore_tune_movie_ui},
			{"MOVIE_GALLERY",		hardcore_tune_movie_gallery},
			{"MOVIE_VT",			hardcore_tune_movie_vtcall},
#if defined(CONFIG_FB_MDNIE_CYANOGEN)
			{"CYANOGENMOD",		hardcore_tune_cyanogenmod},
#endif
		},
	}
};

#endif/* __MDNIE_TABLE_HARDCORE__ */
