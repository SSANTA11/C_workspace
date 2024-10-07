#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	char input;

	printf("날씨입력(c,r,s):");
	scanf("%c", &input);
	
	if (input == 'c')
		printf("맑습니다.");
	else if (input == 'r')
		printf("비가 옵니다.");
	else if (input == 's')
		printf("눈이 옵니다.");
	else
		printf("입력한 문자는 %c입니다. c/r/s 중 하나를 입력하세요.", input);
}