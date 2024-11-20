#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	char d;
	int ch = 0;
	int plus = 0;
	int fuck = 0;
	scanf("%c", &d);
	if (d == '\n') {
		printf("0");
		return 0;
	}
	do {
		if (d != ' ' && d != '\n') fuck = 1;
		scanf("%c", &d);
		if (d == ' ') {
			ch = 1;
		}
		else if (ch && d != '\n') {
			plus++;
			ch = 0;
		}
	} while (d != '\n');
	if (fuck == 1) plus++;
	printf("%d", plus);
}