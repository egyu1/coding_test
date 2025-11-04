#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int N;
	int* numbers;

	scanf("%d", &N);
	numbers = (int*)malloc(sizeof(*numbers) * N);

	if (numbers == NULL)
		return 1;

	for (int i = 0; i < N; i++) {
		scanf("%d", &numbers[i]);
	}

	int max = numbers[0], min = numbers[0];
	for (int i = 0; i < N; i++) {
		if (numbers[i] <= min) {
			min = numbers[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (numbers[i] >= max) {
			max = numbers[i];
		}
	}
	printf("%d %d", min, max);
	free(numbers);

	return 0;
}
