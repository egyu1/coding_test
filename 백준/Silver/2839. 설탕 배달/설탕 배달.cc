#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int sugar;
	int condition = 0;
	scanf("%d", &sugar);

	int _5kg;
	_5kg = sugar / 5;

	for (int i = _5kg; i >= 0; i--) {
		int remain = sugar - (5 * i);
		if (remain % 3 == 0) {
			int bag = i + remain / 3;
			condition = 1;
			printf("%d\n", bag);
			break;
		}

	}
	if (condition == 0)
		printf("-1\n");


	return 0;
}
