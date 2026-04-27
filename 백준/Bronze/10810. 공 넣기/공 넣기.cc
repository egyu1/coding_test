#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int N, M;
	//바구니 최대 개수가 100개니까 101크기 배열 선언
	int basket[101] = { 0 };

	scanf("%d %d", &N, &M);

	for (int idx = 0; idx < M; idx++) {
		int i, j, k;
		scanf("%d %d %d", &i, &j, &k);

		for (int range = i; range <= j; range++) {
			basket[range] = k;
		}
	}

	for (int idx = 1; idx <= N; idx++)
		printf("%d ", basket[idx]);
	return 0;
}