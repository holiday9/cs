/*
 * =====================================================================================
 *
 *       Filename:  swap.c
 *
 *    Description:  swap for main.c
 *
 *        Version:  1.0
 *        Created:  2013年06月26日 22时17分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  htyuan (htyuan), htyuan80@gmail.com
 *        Company:  aibang
 *
 * =====================================================================================
 */

#include<stdio.h>

extern int buf[];

int *buf0 = &buf[0];
int *buf1;

void swap() {
    int temp;

    buf1 = &buf[1];
    temp = *buf0;
    *buf0 = *buf1;
    *buf1 = temp;
}
