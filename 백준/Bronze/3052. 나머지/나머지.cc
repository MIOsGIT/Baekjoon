#pragma warning(disable : 4996)
#include<stdio.h>

int main() {

	int num[10], r[42] = { 0 }, c = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		r[num[i] % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (r[i] > 0) {
			c++;
		}
	}
			printf("%d\n", c);
	return 0;
}