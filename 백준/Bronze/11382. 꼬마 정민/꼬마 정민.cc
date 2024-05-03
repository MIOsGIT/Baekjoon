#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long x;
	long long y;
	long long z;
	long long sum;

	scanf("%lld %lld %lld", &x, &y, &z);

	sum = x + y + z;
	printf("%lld", sum);

	return 0;
}