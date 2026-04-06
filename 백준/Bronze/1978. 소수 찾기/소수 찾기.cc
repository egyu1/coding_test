#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	//동적할당으로 원하는 수만큼 숫자들을 저장함
	int n;
	scanf("%d", &n);
	int* num = (int*)malloc(sizeof(int) * n);

	if (num == NULL) {
		printf("메모리할당 오류\n");
		return 1;
	}

	//배열에 숫자들을 입력받음
	for (int i = 0; i < n; i++) 
		scanf("%d", &num[i]);

	int sosu = 0;	//배열에 있는 총 소수의 개수를 저장하는 변수
	for (int i = 0; i < n; i++) {
		//1은 소수가 아니니까 제외한다
		if (num[i] <= 1) continue;	

		//일단 소수라고 가정한다
		int isPrime = 1;
		//수를 2부터 자기자신보다 1작은 수까지 나눈다
		for (int j = 2; j < num[i]; j++) {
		//만약 한번이라도 나눠 떨어지면 얘는 소수가 아닌거임
			if (num[i] % j == 0) {
				isPrime = 0;
				break;
			}
		}
		//소수일 경우(isPrime == 1), 소수의 총 개수를 저장하는 변수를 증가
		if (isPrime)
			sosu++;
	}

	//결과를 출력
	printf("%d\n", sosu);
	//메모리 반환
	free(num);

	return 0;
}
