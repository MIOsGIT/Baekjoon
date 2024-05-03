#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	double result;
	scanf("%d %d", &a, &b);
	result = (double)a / b;
	printf("%.12f", result);

	return 0;
}