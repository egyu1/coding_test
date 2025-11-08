#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int num[10];
	int remain[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 10; i++) {
		remain[i] = num[i] % 42;
	}
	
	int check[42] = { 0 };
	int n;
	for (int i = 0; i < 10; i++) {
		n = remain[i];
		check[n] = 1;
	}

	int count = 0;
	for (int i = 0; i < 42; i++) {
		count += check[i];
	}
	printf("%d",count);
	
	return 0;
}