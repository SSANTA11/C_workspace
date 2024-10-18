#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, input;

	printf("1.숫자2.소문자 선택: ");
	scanf("%d", &num);
	if (num == 1){
		for (int i = 1; i <= 10; i++)
			printf("%d번째 %d\n", i, i-1);
			do {
				printf("몇 번째 숫자를 출력할까요?(1~10):");
				scanf("%d", &input);
			} while (1 > input || input > 9);
			printf("%d번째 숫자는 %d", input, input - 1);
		}
	else if (num==2){
		for (int i = 1; i <= 26; i++)
			printf("%d번째 %c\n", i, i-1+'a');
			do {
				printf("몇 번째 문자를 출력할까요?(1~26):");
				scanf("%d", &input);
			} while (1 > input || input > 26);
			printf("%d번째 문자는 %c", input, input - 1 + 'a');
		}
}
