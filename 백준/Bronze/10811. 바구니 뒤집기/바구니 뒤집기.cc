#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, m, b[100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		b[i] = i + 1;
	}
	for (int k = 0; k < m; k++)
	{
		int i, j;
		scanf("%d %d", &i, &j);
		while (i - 1 < j - 1) {
			int t = b[i - 1];
			b[i - 1] = b[j - 1];
			b[j - 1] = t;
			i++;
			j--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}