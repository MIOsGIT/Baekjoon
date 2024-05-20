#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m, arr[101] = { 0 };
	int i, j, k, b = 0;
	scanf("%d %d", &n, &m);
	for (int a = 0; a < m; a++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for (int b = i; b <= j; b++)
		{
			arr[b] = k;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}
}