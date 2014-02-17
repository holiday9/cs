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
	float float_val = 0x4a564504;
	/*
 	  问题A的答案
   		00000000001 1010110010 00101000001
 	  0100101001100 1010110010 100000100 
	*/

}

char *  getBinaryShow(int val, char * bytes) {
	char f[2] = {'0','1'};
	show_int(val);

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































