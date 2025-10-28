#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, min;
	scanf("%d %d", &hour, &min);
	int c_time;
	scanf("%d", &c_time);

	int total_min = 60 * hour + min;

	total_min = total_min + c_time;

	int final_hour = (total_min / 60) % 24;

	int final_min = total_min % 60;

	printf("%d %d\n", final_hour, final_min);

	return 0;
}