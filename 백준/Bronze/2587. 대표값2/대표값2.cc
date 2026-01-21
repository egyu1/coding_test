#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//배열 선언 및 값 입력받음
	int num[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	
	//배열 정렬
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (num[i] > num[j]) {
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	//평균구하기
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	int avg = sum / 5;

	//중앙값 구하기
	int jung_index = 5 / 2;
	int jung = num[jung_index];

	//결과 출력
	printf("%d\n", avg);
	printf("%d\n", jung);

	return 0;
}