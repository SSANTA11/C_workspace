#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	char input;

	printf("�����Է�(c,r,s):");
	scanf("%c", &input);
	
	if (input == 'c')
		printf("�����ϴ�.");
	else if (input == 'r')
		printf("�� �ɴϴ�.");
	else if (input == 's')
		printf("���� �ɴϴ�.");
	else
		printf("�Է��� ���ڴ� %c�Դϴ�. c/r/s �� �ϳ��� �Է��ϼ���.", input);
}