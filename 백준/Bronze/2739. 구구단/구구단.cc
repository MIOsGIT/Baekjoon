#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
        int q = 0;

    for (int i = 0; i < 9; i++) {
        q+=1;
        printf("%d * %d = %d\n", n, q, n * q);
    }
    return 0;
}