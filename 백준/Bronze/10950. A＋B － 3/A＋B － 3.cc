#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int T;
	int A, B;
	int* result;

	scanf("%d", &T);
	result = (int*)malloc(sizeof(int) * T);

	if (result == NULL) {
		printf("error\n");
		return 1;
	}

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		result[i] = A + B;
	}
	
	for (int i = 0; i < T; i++) {
		printf("%d\n", result[i]);
	}

	free(result);

	return 0;
}