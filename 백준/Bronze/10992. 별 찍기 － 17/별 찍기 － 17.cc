#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i + 1; j--) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k < i * 2 && k >= 2 * i - (i*2-1) && i != n - 1) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}