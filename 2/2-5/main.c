/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main.c for exercise 2.5
 *    				大端、小端exercise
 *
 *        Version:  1.0
 *        Created:  2013年12月26日 14时37分13秒
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

int main() {
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;

	printf("expcted 1 small: 21\n");
	printf("expcted 1 big: 21\n"); 
	show_bytes(valp, 1);
	printf("expcted 2 small: 21 43\n");
	printf("expcted 2 big: 21 43\n"); 
	show_bytes(valp, 2);
	printf("expcted 3 small: 21 43 65\n");
	printf("expcted 3 big: 21 43, 65\n"); 
	show_bytes(valp, 3);
}
