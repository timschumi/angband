#ifndef DS_FONT_5X8_H
#define DS_FONT_5X8_H

#define NDS_FONT_WIDTH 5
#define NDS_FONT_HEIGHT 8

#define EMPTY \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0, \
	0, 0, 0, 0, 0

const char ds_subfont[] = {
/* 0x0 - 0xf */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0x10 - 0x1f */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0x20 ( ) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x21 (!) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x22 (") */
0, 0, 0, 0, 0,
0, 1, 0, 1, 0,
0, 1, 0, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x23 (#) */
0, 0, 0, 0, 0,
0, 1, 0, 1, 0,
0, 1, 0, 1, 0,
1, 1, 1, 1, 1,
0, 1, 0, 1, 0,
1, 1, 1, 1, 1,
0, 1, 0, 1, 0,
0, 1, 0, 1, 0,

/* 0x24 ($) */
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,
1, 0, 1, 0, 0,
0, 1, 1, 1, 0,
0, 0, 1, 0, 1,
0, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x25 (%) */
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x26 (&) */
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
1, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 0, 1, 1, 0,
1, 0, 1, 0, 0,
0, 1, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x27 (') */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x28 (() */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x29 ()) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,

/* 0x2a (*) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
1, 1, 1, 1, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x2b (+) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
1, 1, 1, 1, 1,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x2c (,) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

/* 0x2d (-) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x2e (.) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x2f (/) */
0, 0, 0, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x30 (0) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 1, 1, 0,
1, 1, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x31 (1) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x32 (2) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x33 (3) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x34 (4) */
0, 0, 0, 0, 0,
1, 0, 1, 0, 0,
1, 0, 1, 0, 0,
1, 0, 1, 0, 0,
1, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x35 (5) */
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 1, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x36 (6) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x37 (7) */
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x38 (8) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x39 (9) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x3a (:) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x3b (;) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x3c (<) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x3d (=) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x3e (>) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x3f (?) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x40 (@) */
0, 0, 1, 1, 0,
0, 1, 0, 0, 1,
1, 0, 0, 1, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 0, 1, 0,
0, 1, 0, 0, 0,
0, 0, 1, 1, 0,

/* 0x41 (A) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x42 (B) */
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x43 (C) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x44 (D) */
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x45 (E) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x46 (F) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x47 (G) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x48 (H) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x49 (I) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x4a (J) */
0, 0, 0, 0, 0,
0, 0, 1, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x4b (K) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x4c (L) */
0, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x4d (M) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 1, 1, 1, 0,
1, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x4e (N) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 1, 0, 1, 0,
1, 0, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x4f (O) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x50 (P) */
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x51 (Q) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 0, 1, 0,
1, 0, 1, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x52 (R) */
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x53 (S) */
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x54 (T) */
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x55 (U) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x56 (V) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 1, 0, 0,
1, 1, 0, 0, 0,
1, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x57 (W) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 1, 0,
1, 1, 1, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x58 (X) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x59 (Y) */
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x5a (Z) */
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x5b ([) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x5c (\) */
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x5d (]) */
0, 0, 0, 0, 0,
0, 0, 1, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 0, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x5e (^) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x5f (_) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 1,
0, 0, 0, 0, 0,

/* 0x60 (`) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x61 (a) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x62 (b) */
0, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x63 (c) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x64 (d) */
0, 0, 0, 0, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x65 (e) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 1, 1, 0,
1, 1, 0, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x66 (f) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 0, 0,
1, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x67 (g) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,

/* 0x68 (h) */
0, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x69 (i) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x6a (j) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

/* 0x6b (k) */
0, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x6c (l) */
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x6d (m) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
0, 0, 0, 0, 0,

/* 0x6e (n) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x6f (o) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x70 (p) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 0, 0,
1, 0, 0, 1, 0,
1, 1, 1, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,

/* 0x71 (q) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 0, 0, 1, 0,

/* 0x72 (r) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 1, 1, 0,
1, 1, 0, 0, 0,
1, 0, 0, 0, 0,
1, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x73 (s) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 1, 1, 0,
1, 1, 0, 0, 0,
0, 0, 1, 1, 0,
1, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x74 (t) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 1, 1, 1, 0,
0, 1, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x75 (u) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x76 (v) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x77 (w) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
1, 0, 1, 0, 1,
0, 1, 1, 1, 1,
0, 0, 0, 0, 0,

/* 0x78 (x) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
0, 1, 1, 0, 0,
0, 1, 1, 0, 0,
1, 0, 0, 1, 0,
0, 0, 0, 0, 0,

/* 0x79 (y) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 0, 0, 1, 0,
1, 0, 0, 1, 0,
0, 1, 1, 1, 0,
0, 0, 0, 1, 0,
0, 1, 1, 0, 0,

/* 0x7a (z) */
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
1, 1, 1, 1, 0,
0, 0, 0, 0, 0,

/* 0x7b ({) */
0, 0, 0, 0, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,

/* 0x7c (|) */
0, 0, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 0, 0,

/* 0x7d (}) */
0, 0, 0, 0, 0,
0, 1, 0, 0, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 0, 0, 1, 0,
0, 0, 1, 0, 0,
0, 0, 1, 0, 0,
0, 1, 0, 0, 0,

/* 0x7e (~) */
0, 0, 0, 0, 0,
0, 1, 0, 1, 0,
1, 0, 1, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,
0, 0, 0, 0, 0,

/* 0x7f */
EMPTY,

/* 0x80 - 0x8f */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0x90 - 0x9f */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xa0 - 0xaf */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xb0 - 0xbf */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xc0 - 0xcf */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xd0 - 0xdf */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xe0 - 0xef */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,

/* 0xf0 - 0xff */
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
EMPTY, EMPTY, EMPTY, EMPTY,
};

static inline u16 nds_font_pixel(char c, char subX, char subY) {
	u32b char_offset = c * NDS_FONT_HEIGHT * NDS_FONT_WIDTH;
	return ds_subfont[char_offset + subY * NDS_FONT_WIDTH + subX] ? 0xffff : 0x0;
}

#endif