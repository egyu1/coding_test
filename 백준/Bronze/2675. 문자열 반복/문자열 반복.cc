#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);

	int R;
	char S[21];

	for (int i = 0; i < T; i++) {
		scanf("%d %s", &R, &S);
		int len = strlen(S);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
			
		}
		printf("\n");
	}

}