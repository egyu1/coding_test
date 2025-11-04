#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int isGroup(char* word);

int main(void) {
	int num;
	scanf("%d", &num);

	int group_count = 0;

	for (int i = 0; i < num; i++) {
		char word[101];
		scanf("%s", word);
		if (isGroup(word) == 1) {
			group_count++;
		}
	}
	printf("%d\n", group_count);

	return 0;
}

int isGroup(char* word) {
	int a_list[26] = { 0 };
	int len = strlen(word);
	
	char pre_char = '\0';

	for (int i = 0; i < len; i++) {
		char cur_char = word[i];
		if (cur_char != pre_char) {
			int index = cur_char - 'a';

			if (a_list[index] == 1) {
				return 0;
			}
			a_list[index] = 1;
		}
		pre_char = cur_char;
	}
	return 1;
}