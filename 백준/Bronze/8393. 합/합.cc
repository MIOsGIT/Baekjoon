#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
        int j = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        j += i;
    }
    printf("%d", j);
    return 0;
}