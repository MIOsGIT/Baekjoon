#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

        int num1, num2;
        scanf("%d", &num1);
        scanf("%d", &num2);

        int result1 = num1 * (num2 % 10);
        int result2 = num1 * ((num2 / 10) % 10);
        int result3 = num1 * (num2 / 100);
        int total = num1 * num2;

        printf("%d\n", result1);
        printf("%d\n", result2);
        printf("%d\n", result3);
        printf("%d\n", total);

        return 0;
    }