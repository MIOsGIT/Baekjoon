#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int q, w, e;
    scanf("%d %d", &q, &w);
    scanf("%d", &e);

    int hour = e / 60;
    int minute = e % 60;

    q += hour;
    w += minute;

    if (w >= 60) {
        q += w / 60;
        w %= 60;
    }

    q %= 24;

    printf("%d %d", q, w);

    return 0;
}