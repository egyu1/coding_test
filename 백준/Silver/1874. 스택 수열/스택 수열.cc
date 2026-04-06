//백준 1874번 스택 수열
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct {
	element* data;	//동적할당을 위해서 포인터로 변경
	int top;
}StackType;

//스택을 초기화하고, n만큼의 요소를 가질 수 있게 동적할당
void init_stack(StackType* s, int maxSize) {
	s->top = -1;
	s->data = (element*)malloc(sizeof(element) * maxSize);	//maxSize만큼 동적할당
}

int is_full(StackType* s, int maxSize) {
	return (s->top == maxSize - 1);
}

void push(StackType* s, element item, int maxSize) {
	if (is_full(s, maxSize) == 1) {
		printf("스택 포화에러(overflow error)");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

int is_empty(StackType* s) {
	return (s->top == -1);
}

element pop(StackType* s) {
	if (is_empty(s)) {
		printf("스택 공백에러(underflow error)");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}

element peek(StackType* s) {
	if (is_empty(s)) {
		printf("스택 공백에러(underflow error)");
		exit(1);
	}
	else
		return s->data[(s->top)];
}

int main() {
	int size;			//수열의 항의 개수를 저장하는 변수
	scanf("%d", &size);	//수열의 항의 개수를 입력받음

	StackType s;		//스택 구조체 s 선언함
	init_stack(&s, size);	//스택이 size만큼의 수를 가질 수 있도록 동적 할당하고 초기화

	//(+와 -)를 저장하는 배열이고, 이 배열의 크기는 2 * size임.
	char* result = (char*)malloc(sizeof(char) * size * 2);
	int index = 0;	//결과 배열의 인덱스 변수

	int currentNum = 1;	//스택에 숫자는 1부터 차례대로 들어가야됨
	int canBeSequence = 1;	//불가능한 수열도 있음. 그럴 때는 0으로 변경

	for (int i = 0; i < size; i++) {
		int target;
		scanf("%d", &target);

		if (canBeSequence) {
			while (currentNum <= target) {
				push(&s, currentNum++, size);
				result[index++] = '+';
			}

			//스택이 비어있지 않고, 최상단 값이 현재 목표숫자와 같다면
			if (!is_empty(&s) && peek(&s) == target) {
				pop(&s);	//목표 숫자를 pop해서 제거
				result[index++] = '-';	//결과 리스트에는 -기호 저장함
			}
			else {	//이게 안되면 스택의 최상단 값이 목표숫자와 다르다는 거고, 그러면 목표 숫자를 먼저 빼낼 수 없으므로, 불가능한 수열임
				canBeSequence = 0;
			}
		}
	}
	//가능한 수열이면 기호의 결과 배열을 출력한다
	if (canBeSequence) {
		for (int i = 0; i < index; i++) 
			printf("%c\n", result[i]);
	}
	//불가능한 수열이면 NO를 출력
	else {
		printf("NO\n");
	}

	//동적할당된 메모리들을 반환
	free(s.data);
	free(result);

	return 0;
}