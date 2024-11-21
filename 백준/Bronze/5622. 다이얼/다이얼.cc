#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	char input[16];
	scanf("%s", input);
	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int out = 0;
	for (int i = 0; i < strlen(input); i++) {
		out += time[input[i] - 'A'];
	}
	printf("%d", out);
}