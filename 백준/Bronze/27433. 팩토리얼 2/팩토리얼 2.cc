#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long factorial(int n);

int main() {
	int N;
	scanf("%d", &N);
	printf("%lld", factorial(N));

	return 0;
}
long long factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	}
	else
		return 1;
}