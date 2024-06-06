#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	long long int mm = n - m;
	if ((n - m) < 0) mm = m - n;
	printf("%lld", mm);
}