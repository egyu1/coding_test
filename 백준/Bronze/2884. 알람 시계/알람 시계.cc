#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int hour, min;
	scanf("%d %d", &hour, &min);

	int time = 60 * hour + min;

	if (time >= 45){
		int alarm = time - 45;

		printf("%d %d", alarm / 60, alarm % 60);
		return 0;
	}
	else {
		printf("%d %d", 23, time + 15);
	}
	
}