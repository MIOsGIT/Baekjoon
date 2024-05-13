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
        for (int k = 1; k < 2 * i + 2; k++) {
            if (i > 0 && k % 2 == 0 && k > 0) {
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