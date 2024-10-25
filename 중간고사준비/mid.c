#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char ch[100];
	printf("문자열을 입력하세요: ");
	scanf("%s",&ch);
	printf("%c", ch[0]);
}
