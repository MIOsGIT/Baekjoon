#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * n) - (2 * i)-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-2; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * n) - (2 * i) - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}