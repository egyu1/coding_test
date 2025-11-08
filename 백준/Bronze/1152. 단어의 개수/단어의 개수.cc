#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void) {
	char str[1000001];

	char delim[] = " ";
	int count = 0;
	char* token;

	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}

	str[strcspn(str, "\n")] = '\0';

	token = strtok(str, delim);

	while (token != NULL) {
		count++;
		token = strtok(NULL, delim);
	}
	printf("%d", count);

	return 0;
}
