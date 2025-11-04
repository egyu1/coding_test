#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	int* numbers;
	int find;
	int count = 0;
	scanf("%d", &n);

	numbers = (int*)malloc(sizeof(*numbers) * n);

	if (numbers == NULL) {
		printf("Memory allocation error\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}
	scanf("%d", &find);
	for (int i = 0; i < n; i++) {
		if (numbers[i] == find)
			count++;
	}
	printf("%d", count);

	free(numbers);

	return 0;
}
