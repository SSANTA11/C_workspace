#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//printf와 scanf에 대한 명세, Standard Input Output Headfile

int main(void)
{
	//printf("Hello\n안녕");

	
	
	
	//double pay = 6500.2;
	//int bonus = 300;
	//int salary;//쓰래기 값이 들어 있다!
	//
	//salary = pay + bonus;
	//printf("pay=%.3lf\nbonus=%d\nsalary: %d원",pay,bonus,salary)
	
	
	
	
	/*int w = 25, h = 12, area;
	area = w * h;
	printf("넓이: %d\n둘레: %d", area, (w+h)*2);*/




	//int h;
	//int w;
	//printf("높이 입력: ");
	//scanf("%d", &h);
	//
	//printf("너비 입력: ");
	//scanf("%d", &w);/*&(앱퍼센드)는 주소이다. 음료수의 내용물을 바꿀 수 있는 오프너 같은 역할*/
	//
	//printf("높이=%d\n너비=%d\n면적=%d", h, w, h*w);





	int h,w;
	printf("높이와 너비를 콤마로 구분해서 모두 입력하세요!: ");
	scanf("%d %d", &h,&w);//공백=띄어쓰기로 구분, 콤마=콤마로 구분...
	printf("높이=%d\n너비=%d\n면적=%d", h, w, h * w);
	return 0;
}
/*
main+중괄호는 반드시 들어가야한다!!
*/

"","a","aaasassdf"-> 모두 가능