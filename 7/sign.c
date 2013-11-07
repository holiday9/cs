/*
 * =====================================================================================
 *
 *       Filename:  sign.c
 *
 *    Description:  描述符号和符号表
 *
 *        Version:  1.0
 *        Created:  2013年07月01日 21时52分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

int f() {
	static long x = 0;
	return x;
}

int g() {
	static long x = 1;
	return x;
}
