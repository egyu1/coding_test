#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int city;
	long long* road;
	long long* gas_price;
	long long total_price = 0;
	long long min;


	//정보 입력 받기
	scanf("%d", &city);
	road = (long long*)malloc(sizeof(long long) * (city - 1));
	gas_price = (long long*)malloc(sizeof(long long) * city);
	for (int i = 0; i < city - 1; i++) {
		scanf("%lld", &road[i]);
	}
	for (int i = 0; i < city; i++) {
		scanf("%lld", &gas_price[i]);
	}


	min = gas_price[0];
	for (int i = 0; i < city - 1; i++) {
		if (min <= gas_price[i]) {
			total_price += min * road[i];
		}
		else {
			min = gas_price[i];
			total_price += min * road[i];
		}
	}

	printf("%lld", total_price);

	free(road);
	free(gas_price);
	return 0;
}