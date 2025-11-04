#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int n;
	int result = 0;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	printf("%d", result);
	return 0;
}