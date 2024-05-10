#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n = -100, arr[9];
    int mm = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > n) {
            n = arr[i];
            mm = i + 1;
        }
    }
    printf("%d\n%d", n, mm);
    return 0;
}