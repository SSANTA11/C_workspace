#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, input_1, count=0;
	char ch, input_2;
	printf("1.����2.�ҹ��� ����: ");
	scanf("%d", &num);
	if (num == 1)
		for (int i = 1; i <= 9; i++) {
			printf("%d��° %d\n", i + 1, i);
			do {
				printf("�� ��° ���ڸ� ����ұ��?(1~10):");
				scanf("%d", &input_1);
			} while (1 > input_1 || input_1 > 9);
			printf("%d��° ���ڴ� %d", input_1, input_2 - 1);
		}
	else if (num==2)
		for (int i = 'a'; i <= 'z'; i++) {
			printf("%d��° %d\n", count, i);
			count += 1;
			do {

			}
		}



}