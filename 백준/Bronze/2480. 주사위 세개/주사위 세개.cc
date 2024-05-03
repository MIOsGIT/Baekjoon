#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int q, w, e, sum;
    scanf("%d %d %d", &q, &w, &e);
    if (q == w && w == e) {
        sum = 10000 + (q * 1000);
    }

    else if (q == w || w == e || q == e) {
        if (q == w) {
            sum = 1000 + (q * 100);
        }
        else if (w == e) {
            sum = 1000 + (w * 100);
        }
        else {
            sum = 1000 + (e * 100);
        }
    }

    else {
        if (q > w && q > e) {
            sum = q * 100;
        }
        else if (w > q && w > e) {
            sum = w * 100;
        }
        else {
            sum = e * 100;
        }
    }
    printf("%d", sum);

    return 0;
}