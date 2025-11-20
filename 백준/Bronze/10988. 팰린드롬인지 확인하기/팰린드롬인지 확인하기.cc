#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int isFelin(char* w, int s);

int main(void) {
	char word[101];

	scanf("%s", word);
	int size = strlen(word);
	
	printf("%d", isFelin(word, size));
	return 0;
}
int isFelin(char* w, int s) {
	for (int i = 0; i < s / 2; i++) {
		if (w[i] == w[s - 1 - i]) {
			continue;
		}
		else {
			return 0;
		}
	}
	return 1;
}
