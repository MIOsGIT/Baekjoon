#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        for (int k = 0; k < (2 * n)-(2*i); k++) {
            printf(" ");
        }
        for (int l = 0; l < i; l++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        for (int k = 0; k < (2 * n) - (2 * i); k++) {
            printf(" ");
        }
        for (int l = 0; l < i; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}