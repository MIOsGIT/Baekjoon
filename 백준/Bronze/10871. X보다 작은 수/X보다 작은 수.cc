#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[10000], n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (m > arr[i]) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}