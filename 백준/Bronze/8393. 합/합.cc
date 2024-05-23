#pragma warning(disable : 4996)
#include<stdio.h>

int main() {

	int n, result=0 ;

	scanf("%d", &n);

	for (int i = 0; n >= i; i++) {
		result = result + i;
	}

	printf("%d", result);

	return 0;
}