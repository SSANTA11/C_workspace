//10월 7일 시험
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//문제1
	// 삼각형의 세 변의 길이인 실수(float)를 입력받아 유효한 삼각형인지 검사
	// 1.0 2.0 3.0
	// 유효한 삼각형이 아니다
//문제2
	// 정수, 문자, 정수를 입력받아 연산 결과를 출력, 유효한 연산자 아니면 
	//수식 입력 : 1+2
	// 3
int main() {
	// 문제 1
		//double a, b, c;
		//printf("세 변의 길이 입력:");
		//scanf("%lf %lf %lf", &a, &b, &c);
		//if ((a + b > c) && (b + c > a) && (a + c > b))
		//	printf("유효");
		//else
		//	printf("유효하지 않은 삼각형");

		//float a, b, c;
		//printf("세 변의 길이 입력:");
		//scanf("%f %f %f", &a, &b, &c);
		//if ((a + b > c) && (b + c > a) && (a + c > b))
		//	printf("유효");
		//else
		//	printf("유효하지 않은 삼각형");
		/*int a, c;
		char b;

		printf("정수 연산자 정수를 입력: ");
		scanf("%d %c %d", &a, &b, &c);
		switch (b) {
			case '+':
				printf("%d", a+c);
				break;
			case'-':
				printf("%d", a - c);
				break;
			case'*':
				printf("%d", a * c);
				break;
			case'/':
				printf("%d", a / c);
				break;
			case'%':
				printf("%d", a % c);
				break;
			default:
				printf("유효한 연산자가 아님\n");


		}*/

		/*int a,b;

		printf("키 입력");
		scanf("%d",&a);

			if (a < 140){
			{
				printf("나이 입력: ");
				scanf("%d", &b);
			}
			if (b >= 10)
				printf("가능");
			else
				printf("불가");
		}
		else
			printf("가능");
		*/

		/*int hour;
		printf("시간입력: ");
		scanf("%d", &hour);

		if (0!=hour&&hour<12)
			printf("오전 %d시", hour);
		else if (hour == 0)
			printf("오전 12시");
		else if (hour == 12)
			printf("오후 12시");
		else
			printf("오후 %d시", hour-12);*/
			/*int value = 386;
			int h = value / 100;
			int b = (value - h * 100)/10;
			int n = (value - h * 100 - b * 10);
			printf("%d백%d십%d", h, b, n);
		*/
		//int cash;
		//printf("금액: ");
		//scanf("%d",&cash);// 나머지 풀어쓰기
		//int _1000 = cash/1000;
		//int _500 = (cash - _1000*1000)/500;
		//int _100 = (cash - _1000 * 1000 - _500 * 500)/100;
		//int _10 = (cash - _1000 * 1000 - _500 * 500 - _100 * 100);
		//printf("1000원: %d장\n500원: %d개\n100원: %d개\n10원: %d개", _1000, _500, _100,_10);

		// **************캐스트 연산자(127pg) 중요-> 이론문제&프로그램밍 문제 출제***************
		// 증감 연산자도 시험 출제 예상
		/*
		int sum=427;
		int num = 5;*/

		//printf("평균=%d\n", sum / num);
		//printf("평균=%lf\n", sum / (double)num);
		//printf("평균=%lf\n", (double)sum / num);
		//printf("평균=%f\n", sum / (float)num);

		// for 반복문(for(초기식;조건식;증감식)명량ㅇㅇ
	long long fact=1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <=n; i++)
		fact *= i;
	printf("%d!=%d", n,fact);
}