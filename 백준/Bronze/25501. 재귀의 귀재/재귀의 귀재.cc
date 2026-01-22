#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int recursion(const char* s, int l, int r);
int isPalindrome(const char* s);
int count;

int main(void) {
	int T;
	scanf("%d", &T);

	char buffer[1001];
	char** words = (char**)malloc(sizeof(char**) * T);
	
	//단어 입력 받기
	for (int i = 0; i < T; i++) {
		scanf("%s", buffer);
		words[i] = (char*)malloc(sizeof(char) * (strlen(buffer) + 1));
		strcpy(words[i], buffer);
	}
	//결과 출력
	for (int i = 0; i < T; i++) {
		count = 0;
		printf("%d %d\n", isPalindrome(words[i]), count);
	}
	free(words);
	return 0;
}
int recursion(const char* s, int l, int r) {
	count++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}
int isPalindrome(const char* s) {
	return recursion(s, 0, strlen(s) - 1);
}