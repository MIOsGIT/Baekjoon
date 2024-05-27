#pragma warning(disable : 4996)
#include<stdio.h>

int main() {

	int n, stu[30] = { 0 };

	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &n);
		stu[n - 1] = 1;
	}
	for (int i = 0; i < 30; i++)
	{
		if (stu[i] == 0) {
			printf("%d\n", i + 1);
		}
	}
	return 0;
}