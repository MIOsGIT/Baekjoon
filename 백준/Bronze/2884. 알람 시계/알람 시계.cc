#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int h, m;
    scanf("%d %d", &h, &m);

	m -= 45;
	if (m < 0) {
		m += 60;
		h -= 1;

		if (h < 0) {
			h = 23;
		}
	}

	printf("%d %d", h, m);
    return 0;
}