#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int sum;

	scanf("%d", &x);
	scanf("%d", &y);

	sum = x - y;
	printf("%d", sum);

	return 0;
}