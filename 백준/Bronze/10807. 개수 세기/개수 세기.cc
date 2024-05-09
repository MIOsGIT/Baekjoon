#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int v, w = 0;
    scanf("%d", &v);
    for (int i = 0; i < n; i++) {
        if (v == arr[i]) {
            w++;
        }
    }
    printf("%d", w);

    return 0;
}