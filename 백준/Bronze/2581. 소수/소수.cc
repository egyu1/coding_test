#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int n);

int main(void) {
	int min, max;
	scanf("%d", &min);
	scanf("%d", &max);

	int sum = 0;
	int min_prime = 0;

	for (int i = max; i >= min; i--) {
		sum += isPrime(i);
		if (isPrime(i) != 0) {
			min_prime = isPrime(i);
		}
	}

	if (sum == 0) {
		printf("-1");
		return 0;
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", min_prime);
		return 0;
	}
	
}
int isPrime(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
		else
			continue;
	}
	return n;
}

