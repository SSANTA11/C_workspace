#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, input;

	printf("1.����2.�ҹ��� ����: ");
	scanf("%d", &num);
	if (num == 1){
		for (int i = 1; i <= 10; i++)
			printf("%d��° %d\n", i, i-1);
			do {
				printf("�� ��° ���ڸ� ����ұ��?(1~10):");
				scanf("%d", &input);
			} while (1 > input || input > 9);
			printf("%d��° ���ڴ� %d", input, input - 1);
		}
	else if (num==2){
		for (int i = 1; i <= 26; i++)
			printf("%d��° %c\n", i, i-1+'a');
			do {
				printf("�� ��° ���ڸ� ����ұ��?(1~26):");
				scanf("%d", &input);
			} while (1 > input || input > 26);
			printf("%d��° ���ڴ� %c", input, input - 1 + 'a');
		}
}
