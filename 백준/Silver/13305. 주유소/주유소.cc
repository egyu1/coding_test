#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int city;
	int* road;
	int* gas_price;
	int total_price = 0;
	int min;


	//정보 입력 받기
	scanf("%d", &city);
	road = (int*)malloc(sizeof(int) * (city - 1));
	gas_price = (int*)malloc(sizeof(int) * city);
	for (int i = 0; i < city - 1; i++) {
		scanf("%d", &road[i]);
	}
	for (int i = 0; i < city; i++) {
		scanf("%d", &gas_price[i]);
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

	printf("%d", total_price);
	
	free(road);
	free(gas_price);
	return 0;
}
