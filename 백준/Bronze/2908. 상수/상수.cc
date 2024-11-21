#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	char n1[4];
	char n2[4];
	char n11[4], n22[4];

	scanf("%s %s", n1, n2);
	for (int i = 2; i >= 0; i--) {
		n11[2-i] = n1[i];
		n22[2-i] = n2[i];
	}
	int num1 = atoi(n11);
	int num2 = atoi(n22);
	int result;
	if (num1 > num2) result = num1;
	else result = num2;
	printf("%d", result);
}