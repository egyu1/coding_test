#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void triangle(int num1, int num2, int num3);

int main(void) {
	while (1) {
		int tri[3] = { 0 };

		for (int i = 0; i < 3; i++) {
			scanf("%d", &tri[i]);
		}

		if (tri[0] == 0 && tri[1] == 0 && tri[2] == 0) {
			break;
		}
		//받은 선의 길이를 정렬함
		int n1, n2, n3;
		if (tri[0] <= tri[1] && tri[0] <= tri[2]) {
			n1 = tri[0];
			if (tri[1] <= tri[2]) {
				n2 = tri[1];
				n3 = tri[2];
			}
			else {
				n2 = tri[2];
				n3 = tri[1];
			}
		}
		else if (tri[1] <= tri[0] && tri[1] <= tri[2]) {
			n1 = tri[1];
			if (tri[0] <= tri[2]) {
				n2 = tri[0];
				n3 = tri[2];
			}
			else {
				n2 = tri[2];
				n3 = tri[0];
			}
		}
		else {
			n1 = tri[2];
			if (tri[0] <= tri[1]) {
				n2 = tri[0];
				n3 = tri[1];
			}
			else {
				n2 = tri[1];
				n3 = tri[0];
			}
		}
		triangle(n1, n2, n3);
	}


	return 0;
}
void triangle(int num1, int num2, int num3) {

	if (num1 + num2 <= num3) {
		printf("Invalid\n");
	}
	else if (num1 == num2 && num1 == num3) {
		printf("Equilateral\n");
	}
	else if (num1 == num2 || num1 == num3 || num2 == num3) {
		printf("Isosceles\n");
	}
	else {
		printf("Scalene\n");
	}


}