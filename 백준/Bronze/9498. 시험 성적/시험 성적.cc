#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long int a;
    scanf("%ld", &a);

    if (a>=90 && a<=100){
        printf("A");
    }
    if (a >= 80 && a <= 89) {
        printf("B");
    }
    if (a >= 70 && a <= 79) {
        printf("C");
    }
    if (a >= 60 && a <= 69) {
        printf("D");
    }
    if (a>=0 && a<60) {
        printf("F");
    }
    return 0;
    }