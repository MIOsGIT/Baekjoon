#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    char num[100];
    scanf("%s", num);
    for (int i = 0; i < n; i++) sum += num[i] - '0';
    printf("%d", sum);
}