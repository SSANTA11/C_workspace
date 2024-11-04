// 사이드이펙트: 부작용, 부수작용
// 함수의 목적: 여기저기서 많이 사용하기 위해서... 

// ********************************************* 함수 형태와 응용 1 ************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int GetSum(int from, int to) {
//	int sum = 0;
//	for (int i = from; i <= to; i++) {
//		sum += i;
//	}
//	return sum;
//}
//int main(){
//	int from = 1, to = 100;
//	printf("1~10=%d\n",GetSum(1,10));
//	printf("11~20=%d\n",GetSum(11,20));
//	int s = GetSum(from,to);
//	printf("%d\n", s);
//}
//

// ********************************************* 함수 형태와 응용 2 ************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int GetSum(int from, int to) {
//	int sum = 0;
//	if (from > to)
//		return -1;
//	for (int i = from; i <= to; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main(){
//	int from = 1, to = 100;
//	printf("1~10=%d\n", GetSum(1, 10));
//	printf("11~20=%d\n", GetSum(20, 10));
//	int s = GetSum(from, to);
//	printf("%d\n", s);
//}

// ********************************************* 함수 형태와 응용 3 ************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int GetSum(int from, int to) {
//	int sum = 0;
//	if (from <= to){
//		for (int i = from; i <= to; i++) 
//			sum += i;
//	}
//	else {
//		for (int i = to; i <= from; i++) 
//			sum += i;
//
//	}
//
//	return sum;
//}
//
//int main() {
//	int from = 1, to = 100;
//	printf("1~10=%d\n", GetSum(1, 10));
//	printf("11~20=%d\n", GetSum(20, 10));
//	int s = GetSum(from, to);
//	printf("%d\n", s);
//}

// ********************************************* 함수 형태와 응용 4 ************************************
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//
//double dist(double x1, double y1, double x2, double y2) {
//	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//
//}
//
//int main() {
//	printf("%lf\n", dist(0, 0, 1, 1));
//	printf("%lf\n", dist(0, 0, 3, 4));
//}


// ********************************************* 함수 형태와 응용 5 ************************************
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//
//long long factorial(int n) {
//	long long fact = 1;
//	for (int i = 1; i <= n; i++)
//		fact *= i;
//	return fact;
//}
//int main() {
//	printf("%lld\n", factorial(5));
//	printf("%lld\n", factorial(10));
//	printf("%lld\n", factorial(15));
//}

// ********************************************* 함수 형태와 응용 6 ************************************
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//
//double larger(double x, double y){
//	double num;
//	if (x > y)
//		num = x;
//	else
//		num = y;
//	return
//		num;
//}
//// 리턴값은 다수 있어도 상관없다
//double absolute(double x) {
//	double num;
//	if (x >= 0)
//		num = x;
//	else
//		num = x * (-1);
//	return num;
//		
//}
//int main() {
//	
//	double x,y;
//	printf("실수 2개 입력(x y): ");
//	scanf("%lf %lf", &x, &y);
//	
//	printf("둘 중 큰 값은 %.lf\n",larger(x,y));
//	printf("%.lf의 절댓값은 %.lf\n",x, absolute(x));
//	return 0; // 리턴값이 등장하면 main함수의 동작은 마무리된다.
//}

// ********************************************* 함수 형태와 응용 7 ************************************
#/*define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>


int isPrime(int num){
	int count = 0;
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			count++;
	if (count > 0)
		return 0;
	return 1;
}
int main() {
	int num;
	printf("정수: ");
	scanf("%d", &num);
	if(isPrime(num)==0)
		printf("소수아님");
	else
		printf("소수임");
}*/

// ********************************************* 함수 형태와 응용 8 ************************************
// ## !!!!!!!!!!!!!!!!!!!!!!!!!!!! 오류 수정하기!!!!!!!!!!!!!!!!!!!!!!!!!!! ##
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//int isLeapYear(int year) {
//	int num;
//	if (year % 4 == 0)
//		if (year % 100 != 0)
//			if (year % 400 == 0)
//				num = 1;
//			else
//				num = 0;
//		else
//			num = 1;
//	else
//		num = 0;
//}
//
//int main() {
//	int year,n;
//	printf("년도: ");
//	scanf("%d", &year);
//	n = isLeapYear(year);
//	if (n == 1)
//		printf("윤년");
//	else
//		printf("윤년 아님");
//}

// ********************************************* 함수 형태와 응용 9 ************************************
// 나쁜 함수와 좋은 함수는 의도한 결과물만이 나오는가에 달려있다!!

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//// void는 반환값이 없음을 의미
//// 단 return을 사용 가능하다.
//	// return은 break와 같이 활용가능하다.
//void PrintSum(int from, int to);
//void PrintSum(int from, int to) {
//	int sum = 0;
//	for (int i = from; i <= to; i++)
//		sum += i;
//	printf("%d~%d=%d\n", from, to, sum);
//	return;
//}
//
//int main() {
//	PrintSum(1, 100);
//	PrintSum(5, 10);
//}
//


// ********************************************* voidnoarg ************************************
//void func() {
//	printf("hi");
//}

// ********************************************* 함수의 원형(prototype) ************************************
	// 원형 선언(function prototype): 함수의 몸체 대신에 ;을 사용하며, 선언부; 형식을 가지는 것이 원형 선언!!
		// 매개변수 의 변수 명을 생략하고 type만 써줘도 된다
	
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>


long long facto(int n) {
	if (n == 0)
		return 1;
	else
		return n * facto(n - 1);
}
int main() {
	printf("%lld\n", facto(5));
	printf("%lld\n", facto(10));
	printf("%lld\n", facto(15));
}
	