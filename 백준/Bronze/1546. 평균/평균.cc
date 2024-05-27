#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n, nn[1000], m = 0;
	double mm[1000] = { 0 }, s = 0.0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &nn[i]);
		if (nn[i] > m) {
			m = nn[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		mm[i] = (double)nn[i] / m * 100.0;
		s += mm[i];
	}
	printf("%lf", s / n);
	return 0;
}