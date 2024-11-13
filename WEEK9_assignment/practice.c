#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void  countRecursion(int n) {
	if (n > 0) {
		printf("%d ", n);
		countRecursion(n - 1);
	}
	else if (n < 0) {
		printf("%d ", n);
		countRecursion(n + 1);
	}
	printf("%d ", n);
	
}
void countLoop(int n) {
	if (n > 0) {
		for (int i = n; i >= 0; i--) {
			printf("%d ", i);
		}
		for (int i = 1; i <= n; i++) {
			printf("%d ", i);
		}
	}
	else if (n < 0) {
		for (int i = n; i <= 0; i++) {
			printf("%d ", i);
		}
		for (int i = -1; i >= n; i--) {
			printf("%d ", i);
		}
	}
	else
		printf("%d", 0);
}


int main(){
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);
	countRecursion(n);
	putchar('\n');
	countLoop(n);
}
