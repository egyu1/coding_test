#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//원판의 이동과정을 출력하는 재귀함수
void move(int plate, int first, int second, int third) {
	//원판이 한개 남으면 종료
	if (plate == 1) {
		printf("%d %d\n", first, third);
		return;
	}
	//맨 아래에 있는 원판을 옮기기 위해서 그 위에것들을 다른 곳으로 옮겨야 됨
	move(plate - 1, first, third, second);

	//맨 아래 원판을 목적지로 옮김
	printf("%d %d\n", first, third);

	move(plate - 1, second, first, third);
}

int main() {
	int N;

	//원판 갯수 입력
	scanf("%d", &N);
	
	//하노이탑의 원판 옮기는 횟수는 2^(원판개수) - 1 임
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		cnt *= 2;
	}
	printf("%d\n", cnt - 1);

	move(N, 1, 2, 3);
	return 0;
}