/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  main.c for exercise
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

char *  getBinaryShow(int val, char *);

int main() {
	int int_val = 0x00359141;
	float float_val = 0x4A564504;
	
	printf("0x00359141 expcted binary desc: 1101011001000101000001\n");
	char bytes[128];
	printf("0x00359141 actual  binary desc: %s \n", getBinaryShow(int_val, bytes));
	printf("0x4A564504 expcted binary desc: 1001010010101100100010100000100\n");
	printf("0x4A564504 actual  binary desc: %s \n", getBinaryShow(float_val, bytes));
	printf("%lf = ", float_val);
}

char *  getBinaryShow(int val, char * bytes) {
	char f[2] = {'0','1'};

	// 获取除以2的所有余数
	int tmp = val;
	int index = 0;
	do{
		bytes[index] = f[tmp % 2];
	    tmp = tmp / 2;
		index++;	
	} while(tmp != 0);

	bytes[index] = 0;

	
	//exchange 
	int i;
	for (i = 0;i < index / 2;i++) {
		char t = bytes[i];
		bytes[i] = bytes[index - i -1];
		bytes[index - i - 1] = t;
	}

	return bytes;
}































