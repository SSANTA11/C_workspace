#include<stdio.h>
int main() {
	for (int i = 1; i <= 5; i++) {
		printf(" ");
		for (int r = 1; r <= i; i++) {
			printf("*");
		}
	}
}