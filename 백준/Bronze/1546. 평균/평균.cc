#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int N;
	int* scores;
	int M;

	scanf("%d", &N);
	scores = (int*)malloc(sizeof(*scores) * N);

	if (scores == NULL)
		return 1;

	for (int i = 0; i < N; i++) {
		scanf("%d", &scores[i]);
	}

	M = scores[0];
	for (int i = 0; i < N; i++) {
		if (scores[i] > M)
			M = scores[i];
	}

	double* new_scores = (double*)malloc(sizeof(*new_scores) * N);
	if (new_scores == NULL)
		return 1;


	for (int i = 0; i < N; i++) {
		new_scores[i] = (double)scores[i] / M * 100;
	}
	double sum = 0.0;

	for (int i = 0; i < N; i++) {
		sum += new_scores[i];
	}
	printf("%f", sum / N);
	free(scores);
	free(new_scores);

	return 0;
}