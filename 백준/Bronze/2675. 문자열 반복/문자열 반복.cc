#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	int t;
	scanf("%d", &t);
	while (t--) {
		int len;
		scanf("%d", &len);
		char s[21];
		scanf("%s", s);
		for (int i = 0; s[i] != 0; i++) {
			for (int j = 0; j < len; j++) {
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}
}