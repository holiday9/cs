/*
 * =====================================================================================
 *
 *       Filename:  show_bytes.c
 *
 *    Description:  show_bytes.c
 *
 *        Version:  1.0
 *        Created:  2013年12月26日 14时28分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include<stdio.h>
#include"show_bytes.h"

void show_bytes(byte_pointer start, int len) {
	int i ;
	for (i = 0;i < len;i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof (float));
}

void show_point(void *x) {
	show_bytes((byte_pointer) &x, sizeof( void * ));
}







































