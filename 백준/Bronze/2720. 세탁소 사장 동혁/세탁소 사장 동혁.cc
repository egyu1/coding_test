#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void cal(int m);

int main(void) {
	int testCase;
	scanf("%d", &testCase);

	int* money;
	money = (int*)malloc(sizeof(int) * testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d", &money[i]);
	}
	for (int i = 0; i < testCase; i++) {
		cal(money[i]);
	}

	return 0;
}
void cal(int m) {
	int qua, dim, nic, pen;

	qua = m / 25;
	m %= 25;

	dim = m / 10;
	m %= 10;

	nic = m / 5;
	m %= 5;

	pen = m / 1;
	m %= 1;

	printf("%d %d %d %d\n", qua, dim, nic, pen);
}
