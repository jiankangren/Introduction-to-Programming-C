/*
 * L12_ex1.c
 *
 *  Created on: 4 ���. 2017 �.
 *      Author: Sunny
 */

#include <stdio.h>

void getnewref(int val, int *ptr) {
    int x = val;
    ptr = &x;
}

int main() {

    int a = 33;
    int *ptr = NULL;

    getnewref(a, ptr);

    printf("%i", *ptr);

    return 0;
}
