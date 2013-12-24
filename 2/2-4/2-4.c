/*
 * =====================================================================================
 *
 *       Filename:  2-4.c
 *
 *    Description:  exercese 2.4
 *
 *        Version:  1.0
 *        Created:  2013年12月24日 17时59分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include<stdio.h>

int main() {
	int b1 = ((0x503c + 0x8) == 0x5044);
	int b2 = ((0x503c - 0x40) == 0x4ffc);

	int b3 = ((0x503c + 0x64) == 0x50a0);
	int b4 = ((0x50ea - 0x503c) == 0xae);


	printf("b1 = %d, b2 = %d, b3 = %d, b4 = %d\n", b1,b2,b3,b4);
	return 0;
}
