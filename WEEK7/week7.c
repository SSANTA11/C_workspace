#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //시스템에서 탐색
#include "cursor.h" // 내 프로젝트 폴더에서 탐색 후, 시스템 폴더

//int main() {
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 2, y, 2 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 3, y, 3 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 4, y, 4 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 5, y, 6 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 7, y, 7 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 8, y, 8 * y);
	//for (int y = 1; y <= 9; y++)
	//	printf("%dx%d=%d\n", 9, y, 9 * y);
	/*----------------------------------------------------------------------------*/

	//for (int x = 19; x >= 1; x--)
	//	for (int y = 19; y >= 1; y--)
	//		printf("%dx%d=%d\n", x, y, x * y);
	/*----------------------------------------------------------------------------*/
	/*int main() {
		gotoxy(34, 1);
		puts("ASCII Table");
		int ch = ' ';
		for (int x = 5; x < 80; x += 15) {
			for (int y = 3; y <= 21; y++) {
				gotoxy(x, y);
				printf("%3d %X %c", ch, ch, ch);
				ch++;
			}
		}
	}*/
	/*----------------------------------------------------------------------------*/
//int main() {
//	for (int i = 'a'; i <= 'z'; i++)
//		printf("%c\n", i);
//	
//	
//	int r='A';//초기식
//	while (r <= 'Z')//조건식
//	{
//		printf("%c\n", r);//명령
//		r++;//증감식
//	}
//}
	/*----------------------------------------------------------------------------*/
//int main() {
//	int sum = 0;
//	int i = 1;
//	//while (i <= 100) {
//	//	sum += i;
//	//	i++;
//	//}
//	for (int i = 1; i <= 100; i++)
//		sum += i;
//	printf("1~100까지의 합 = %d", sum);
//}

int main() {
	/*int num;
	double count=0;
	int sum = 0;
	do {
		printf("정수 입력 (끝날 떄는 0) : ");
		scanf("%d", &num);
		sum += num;
		count += 1;
	} while (num != 0);
	printf("%lf회 입력하신 정수의 총합은 %d이고, 평균은 %.lf입니다",count-1, sum, sum/(count-1));*/
	/*----------------------------------------------------------------------------*/
	/*int sum = 0;
	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			sum += i;
	printf("%d", sum);*/
	/*----------------------------------------------------------------------------*/
	/*int num;

	do{
		printf("정수 입력: ");
		scanf("%d", &num);

	} while (1>num||num>10);
	printf("%d", num);*/
	/*----------------------------------------------------------------------------*/
	/*int num;
	do {
		printf("정수 입력: ");
		scanf("%d", &num);
	} while (num<1);
	printf("%d 정수의 약수: ",num);
	for (int i = 1; i <= num; i++)
		if (num%i==0)
			printf("%d ",i);*/
			/*----------------------------------------------------------------------------*/
			/*for (int a = 10; a >= 1; a--) {
				for (int b = a; b >= 1; b--) {
					printf("%d",b);
				}
				puts("");
			}*/
			/*----------------------------------------------------------------------------*/
	int num, count = 0;

	do {
		printf("정수 입력: ");
		scanf("%d", &num);
	} while (num < 1);

	printf("%d 정수의 약수: ", num);
	for (int i = 1; i <= num; i++)
		if (num % i == 0){
			count += 1;
	
		if (count == 2) 
			printf("소수아님");
		else
			printf("소수임");
	
		}
}