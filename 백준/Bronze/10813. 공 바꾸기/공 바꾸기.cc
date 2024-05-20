#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m;
	int b[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) b[i] = i + 1;
	for (int M = 0; M < m; M++)
	{
		int i, j, c;
		scanf("%d %d", &i, &j);
		c = b[i-1];
		b[i-1] = b[j-1];
		b[j-1] = c;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
}