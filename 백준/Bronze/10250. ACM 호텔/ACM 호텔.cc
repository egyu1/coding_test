#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int T;
	int* height;
	int* width;
	int* n;

	scanf("%d", &T);
	height = (int*)malloc(sizeof(int) * T);
	width = (int*)malloc(sizeof(int) * T);
	n = (int*)malloc(sizeof(int) * T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &height[i], &width[i], &n[i]);
	}

	int* num1, * num2;				//방번호 앞자리, 뒷자리
	num1 = (int*)malloc(sizeof(int) * T);
	num2 = (int*)malloc(sizeof(int) * T);

	//방번호 계산 로직
	for (int i = 0; i < T; i++) {
		if (n[i] % height[i] == 0) {
			num1[i] = height[i];
			num2[i] = n[i] / height[i];
		}
		else {
			num1[i] = n[i] % height[i];
			num2[i] = n[i] / height[i] + 1;
		}
		
	}

	for (int i = 0; i < T; i++) {
		printf("%d%02d\n", num1[i], num2[i]);
	}
	
	free(height);
	free(width);
	free(n);
	free(num1);
	free(num2);

	return 0;
}