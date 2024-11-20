#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main(void) {
	char alpa[] = "abcdefghijklmnopqrstuvwxyz";

	char input[100];
	scanf("%s", &input);

	int out[26];
	for (int i = 0; i < 26; i++) out[i] = -1;

	int len = strlen(input);
	int num = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 26; j++) {
			if (alpa[j] == input[i] && out[j]==-1) {
				out[j] = num;
				num++;
			}
			else if(alpa[j] == input[i]) num++;
			else continue;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", out[i]);
	}
}