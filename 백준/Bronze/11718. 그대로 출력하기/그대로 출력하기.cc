#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main(void) {
	char c;

	while (scanf("%c", &c) != EOF) {
		printf("%c", c);
	}

}