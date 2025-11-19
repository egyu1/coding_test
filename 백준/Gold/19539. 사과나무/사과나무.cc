#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int N;
	int* height;
	scanf("%d", &N);

	height = (int*)malloc(sizeof(int) * N);

	if (height == NULL) {
		printf("메모리 부족으로 할당할 수 없음\n");
		return 1;
	}

	for (int i = 0; i < N; i++) {
		scanf("%d", &height[i]);
	}

	int sum = 0;
	int count;		//총 횟수를 저장하는 변수
	int count_2 = 0;	//2씩 물주기 가능 횟수를 저장하는 변수

	for (int i = 0; i < N; i++) {
		sum += height[i];
	}

	if (sum % 3 == 0) {
		count = sum / 3;
		for (int i = 0; i < N; i++) {
			count_2 += height[i] / 2;
		}
		//2번씩 물주기 가능한 횟수가 전체 횟수 이상이면 가능
		if (count_2 >= count) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	else {
		printf("NO\n");
	}

	free(height);

	return 0;
}
