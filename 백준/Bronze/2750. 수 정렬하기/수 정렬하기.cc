#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int N;
	int number[1000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &number[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (number[i] > number[j]) {
				int temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", number[i]);
	}

	return 0;
}