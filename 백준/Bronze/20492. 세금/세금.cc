#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n, a, b;
    scanf("%d", &n);

    a = n * 0.78;
    b = n - (n * 0.2 * 0.22);

    printf("%d %d", a, b);
}