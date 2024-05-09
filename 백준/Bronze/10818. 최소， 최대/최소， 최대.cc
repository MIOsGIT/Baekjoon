#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    int arr[1000000];
int main(void)
{
    int n, nn = 1000000, mm = -1000000;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < nn) {
            nn = arr[i];
        }
        if (arr[i] > mm) {
            mm = arr[i];
        }
    }
    printf("%d %d\n", nn, mm);
    return 0;
}