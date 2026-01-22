#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int T;
	int K;
	scanf("%d %d", &T, &K);
	//동적할당으로 동전 단위 입력받기
	int* coin = (int*)malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &coin[i]);
	}
	int count = 0;	//필요한 동전의 갯수

	for (int i = T - 1; i >= 0; i--) {
		if (coin[i] <= K) {
			count += (K / coin[i]);
			K %= coin[i];
		}
	}

	printf("%d", count);
	free(coin);
	return 0;
}