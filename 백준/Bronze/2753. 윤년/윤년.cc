#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long int a;
    scanf("%ld", &a);

    if (a % 4 == 0 && a % 100 != 0 || a % 400 ==0 ) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
    }