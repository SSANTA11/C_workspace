// 예제 3-2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef enum { sun=1, mon, tue, thu, fri, sat } days;
int main()
{
	//##정수형 타입과 오버플로우
	//	unsigned short a = -32767, b = -32768, c =-32769;
	//	printf("a=%d,b=%d,c=%d", a, b, c);

	//##진수 변환
	//int a = 014, b = 12, c = 0xc;
	//printf("a=%o,b=%d,c=x", a, b, c);
	
	//##실수형
	//float f = 3.1415926535897932384626;
	//printf("%.10f\n", f);//float은 %f, .10은 소수점 뒤에 10자리
	//double d = 3.1415926535897932384626;
	//printf("%.20lf", d);//double은 %lf, .20 ...

	//char ch = 'A'; // char ch =65; 와 동일
	//printf("문자일 때=%c\n정수일 때=%d\n", ch, ch);
	//int value = ch + 5;
	//printf("value=%d", value);


	//char a;
	//printf("문자 입력:");
	//scanf("%c", &a);
	//printf("ASCII코드로 변환한다면... %c = %d", a, a);

	//char a[1000];
	//printf("문자열 입력해!:");
	//scanf("%s", a);
	//printf("입력한 %s",a);

	//##enumerate
	//days day1 = sun;
	//printf("%d\n", day1);
	//days day2= sat;
	//printf("%d", day2);


	//int score[5];// 배열 선언: 타입 배열 이름[크기]
	//			 
	//score[0] = 10;// 배열 원소 지정: 배열 이름[첨자]
	//score[1]=20;// 크기가 5이므로 첨자 범위 0~4
	//score[2]=30;
	//score[3]=40;
	//score[4]=50;
	//printf("%d,%d,%d,%d,%d\n", score[0], score[1], score[2], score[3], score[4]);

	unsigned int a=11;
	printf("%d",a);

}



//###########(참고)############
//& (앰퍼센트)는 메모리 주소르 나타낸다!!
//컴퓨터명 사용자명 파일명은 한글로 쓰지 마라!!
//실수형의 double은 기존 float를 쓰는 것에 2배 더 정확함을 나타내기 위해 기록...
