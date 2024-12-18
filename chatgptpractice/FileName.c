//다음 C 언어 문제를 제시할게요.주어진 설명을 바탕으로 해결해 보세요.
//
//문제:
//1. 정수형 변수 number를 선언하고, 사용자로부터 number 값을 입력받으세요.
//2. number가 0보다 크면 "양수입니다."라는 메시지를 출력하고, number가 0보다 작으면 "음수입니다."라는 메시지를 출력하세요.만약 number가 0이라면 "0입니다."라는 메시지를 출력하세요.
//3. 사용자로부터 정수형 변수 month 값을 입력받고, 해당 월이 30일인지 31일인지 판단하는 코드를 작성하세요. (단, 2월은 28일로 간주)
//30일인 월 : 4, 6, 9, 11
//31일인 월 : 1, 3, 5, 7, 8, 10, 12
//조건 :
//	printf와 scanf 함수를 사용하여 입력과 출력을 수행하세요.
//	if, else if, else 문을 적절히 사용하여 조건을 검사하세요.
//		예시 실행 :
//코드 복사
//정수를 입력하세요 : 5
//양수입니다.
//
//월을 입력하세요 : 9
//30일인 달입니다.
//힌트 : 숫자에 대한 조건을 검사할 때, 중복되는 코드를 줄일 수 있도록 주의하세요.

//# define _CRT_SECURE_NO_WARNINGS
//# include<stdio.h>
//int main()
//{
//	int month;
//	printf("月을 입력하세요: ");
//	scanf("%d", &month);
//	if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
//		if (month == 2)
//			printf("28일 입니다.");
//		else
//			printf("30일 입니다");
//	else
//		if (month <= 12)
//			printf("31일 입니다!");
//		else
//			printf("12월 중 1가지를 선택하세요!");
//
//}
//---------------------------------------------------------------------------


/*getchar() 함수를 설명하면서 문제를 내드리겠습니다.

getchar() 함수란?
getchar() 함수는 한 문자를 입력받을 때 사용하는 함수입니다. 이 함수는 입력된 문자 하나를 받아들이고, 그 문자의 ASCII 값을 반환합니다.

문제:
사용자로부터 여러 문자를 입력받아, 그 중에서 대문자, 소문자, 숫자의 개수를 각각 세는 프로그램을 작성하세요. 입력이 끝났다는 신호로 사용자가 Enter 키를 누르면 프로그램은 결과를 출력합니다.

getchar() 함수를 사용하여 문자를 하나씩 입력받고 처리하세요.
대문자, 소문자, 숫자를 각각 세어 출력하세요.
조건:
대문자는 'A'부터 'Z', 소문자는 'a'부터 'z', 숫자는 '0'부터 '9'로 구분합니다.
getchar() 함수로 한 글자씩 입력받고, \n(엔터)을 입력하면 입력이 종료됩니다.
다른 문자는 무시해도 됩니다.
예시 실행:
makefile
코드 복사
문자를 입력하세요 (엔터로 종료): Hello123
대문자: 1개
소문자: 4개
숫자: 3개
이 문제를 해결해보시고, 궁금한 점이 있으면 언제든지 물어보세요!*/


//# define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//int main() 
//{
//	char input;
//		int count_uppercase = 0, count_lowercase = 0, count_degits = 0;
//		printf("문자를 입력하세요: ");
//		while (1) {
//			input = getchar();
//			if (input == '\n') {
//				break;
//			}
//			else
//				if (input >= 'A' && input <= 'Z')
//					count_uppercase++;
//				else if ('a' <= input && input <= 'z')
//					count_lowercase++;
//				else if ('0' <= input && input <= '9')
//					count_degits++;
//		}
//		printf("대문자 %d개\n", count_uppercase);
//		printf("소문자 %d개\n", count_lowercase);
//		printf("숫자 %d개", count_degits);
//		
//		return 0;
//
//}

/*다음은 C 언어 관련 문제를 더 내드리겠습니다. 반복문과 조건문을 결합한 문제를 내보겠습니다.

문제 1:
사용자로부터 정수를 입력받아, 그 정수가 소수인지 아닌지를 판별하는 프로그램을 작성하세요. 소수란 1과 자기 자신으로만 나누어 떨어지는 숫자를 말합니다. (예: 2, 3, 5, 7, 11, 13 등)

조건:
입력받은 정수가 1보다 큰 정수여야 합니다.
소수일 경우 "소수입니다."를 출력하고, 소수가 아닐 경우 "소수가 아닙니다."를 출력하세요.
반복문을 사용하여 2부터 입력받은 숫자 전까지 나누어 떨어지는지 확인하세요.
예시 실행:
코드 복사
정수를 입력하세요: 29
소수입니다.
코드 복사
정수를 입력하세요: 28
소수가 아닙니다.
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//	if (n == 1)
//		printf("소수가 아닙니다.");
//	else if (n == 2)
//		printf("소수입니다.");
//	else if (3<=n)
//		for (int i = 2; i < n; i++) {
//			if (n % i == 0)
//			{
//				printf("소수가 아닙니다.");
//				break;
//			}
//			else if (i == n - 1)
//				printf("소수입니다.");
//		}
//	else
//		printf("소수는 2이상의 정수만 해당됩니다.");
//		}

/*문제 2:
사용자로부터 숫자를 입력받아, 그 숫자가 완전수인지 판별하는 프로그램을 작성하세요. 완전수란 자신을 제외한 약수들의 합이 자기 자신과 같은 수를 말합니다. (예: 6 → 1 + 2 + 3 = 6, 28 → 1 + 2 + 4 + 7 + 14 = 28)

조건:
입력받은 숫자가 완전수일 경우 "완전수입니다."를 출력하고, 그렇지 않으면 "완전수가 아닙니다."를 출력하세요.
1부터 입력받은 숫자 전까지 나누어 떨어지는 모든 약수의 합을 구해야 합니다.
예시 실행:
코드 복사
정수를 입력하세요: 6
완전수입니다.
코드 복사
정수를 입력하세요: 10
완전수가 아닙니다.
*/
//# define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	int n;
//	int count = 0;
//	printf("정수를 입력하세요: ");
//	scanf("%d",&n);
//	for (int i = 1; i < n; i++)
//		if (n % i == 0)
//			count+=i;
//	if (count == n)
//		printf("완전수입니다.");
//	else
//		printf("완전수가 아닙니다.");
//
//}

//문제 3:
//사용자로부터 두 정수를 입력받고, 그 범위 내에서 모든 소수를 출력하는 프로그램을 작성하세요.
//
//조건:
//두 정수는 크기와 상관없이 입력받고, 작은 숫자부터 큰 숫자까지의 범위를 정합니다.
//해당 범위 내에서 소수를 모두 출력하세요.
//예시 실행 :
//makefile
//코드 복사
//첫 번째 정수를 입력하세요 : 10
//두 번째 정수를 입력하세요 : 30
//소수 : 11 13 17 19 23 29
//이 문제들을 풀어보세요.만약 어려운 부분이 있거나 추가 설명이 필요하시면 언제든지 질문해주세요!

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	printf("첫번째 정수를 입력하시오: ");
//	scanf("%d", &a);
//	printf("첫번째 정수를 입력하시오: ");
//	scanf("%d", &b);
//	printf("소수: ");
//	for (int i = a; i <= b; i++)
//		for (int r = 2; r < i; r++)
//			if (i % r != 0)
//				if (r == i - 1)
//				{
//					printf("%d ", i);
//					break;
//				}
//				else
//					continue;
//			else
//				break;
//
//
//}
//
//문제:
//사용자로부터 정수 n을 입력받아, 1부터 n까지의 숫자 중 3의 배수이면서 5의 배수인 숫자를 모두 출력하는 프로그램을 작성하세요.
//
//조건 :
//	입력된 정수 n까지의 숫자 중에서 3의 배수이면서 5의 배수인 숫자를 찾아 출력하세요.
//	각 숫자는 띄어쓰기로 구분해 출력합니다.
//	예시 실행 :
//코드 복사
//정수를 입력하세요 : 50
//15 30 45
//이 문제를 해결해 보시고, 필요하면 언제든지 질문해 주세요!

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n;
//	printf("정수를 입력하세요 : ");
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//		if (i % 15 == 0)
//			printf("%d ", i);


/*문제:
사용자로부터 문자열을 입력받아, 그 문자열에 포함된 **모음(A, E, I, O, U, a, e, i, o, u)**의 개수를 세는 프로그램을 작성하세요.

조건:
사용자로부터 문자열을 입력받습니다.
입력된 문자열에서 **모음(A, E, I, O, U, a, e, i, o, u)**의 개수를 세고, 그 결과를 출력하세요.
대문자와 소문자를 구분하지 않으며, 특수 문자나 숫자는 무시합니다.
예시 실행:
코드 복사
문자열을 입력하세요: Hello World
모음의 개수: 3
이 문제를 해결해 보시고, 궁금한 점이나 추가적인 설명이 필요하면 언제든지 질문해 주세요! ??*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str[100];
//	int count=0;
//	printf("문자열을 입력하세요: ");
//	scanf("%s", &str);
//	
//	for (int i = 0; i <= strlen(str); i++)
//		if (str[i] == 'A' 
//			|| str[i] == 'a' 
//			|| str[i] == 'E' 
//			|| str[i] == 'e' 
//			|| str[i] == 'I' 
//			|| str[i] == 'i' 
//			|| str[i] == 'O' 
//			|| str[i] == 'o' 
//			|| str[i] == 'U' 
//			|| str[i] == 'u')
//			;
//}

//문제:
//사용자로부터 문자열을 입력받고, 그 문자열에서** 모음(A, E, I, O, U, a, e, i, o, u)** 의 개수를 세는 프로그램을 작성하세요.단, 다음 조건을 만족해야 합니다.
//
//조건 :
//	문자열 길이 제한 : 사용자로부터 입력받은 문자열의 길이는 최대 100자로 제한됩니다.
//	문자 검사 : 입력된 문자열에서 모음의 개수를 세고, 대소문자 구분 없이 처리합니다.
//	특수 문자와 공백은 무시하며, 숫자는 개수에 포함하지 않습니다.
//	문자열이 비어있을 경우 "유효한 문자열을 입력하세요."라는 메시지를 출력합니다.
//	모음의 개수가 5개 이상일 경우, "모음이 많습니다."를 추가로 출력합니다.
//	strlen 함수를 사용하지 않고, 반복문을 이용하여 문자열 끝을 확인합니다. ('\0' 문자를 사용)
//	예시 실행 1 :
//	문자열을 입력하세요 : Programming is fun!
//	모음의 개수 : 5
//	모음이 많습니다.
//	예시 실행 2 :
//	문자열을 입력하세요 : hello
//	모음의 개수 : 2

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	char str[100];
//	int i=0, count= 0;
//	printf("문자열을 입력하세요 : ");
//	scanf("%s",&str);
//	do {
//		if (str[i] == 'A'
//			|| str[i] == 'a'
//			|| str[i] == 'E'
//			|| str[i] == 'e'
//			|| str[i] == 'I'
//			|| str[i] == 'i'
//			|| str[i] == 'O'
//			|| str[i] == 'o'
//			|| str[i] == 'U'
//			|| str[i] == 'u')
//			count++;
//		i++;
//	} while(str[i]!='\0');
//	printf("%d", count);
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num, i=2;
//	printf("2 이상의 정수: ");
//	scanf("%d",&num);
//	if (num > i) {
//		do {
//			if (num % i == 0) {
//				printf("%d, ", i);
//				num /= i;
//			}
//			else
//				i++;
//		} while (num!=1);
//	}
//	else
//		printf("정수는 2이상이어야 합니다.");
//	return 0;
//}


// 소수 찾기 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("정수 입력");
//	scanf("%d", &num);
//	if (num != 2) {
//		printf("2 ");
//		for (int i = 2; i <= num; i++)
//			for (int r = 2; r <= i - 1; r++)
//				if (i % r == 0)
//					break;
//				else
//					if (r == i - 1)
//						printf("%d ", i);
//	}
//
//	else
//		printf("%d", num);
//}

//삼각형의 유효성 및 분류
//삼각형의 유효성뿐만 아니라 삼각형을 정삼각형 이등변 일반으로 나누어 분류하세요

//
//# define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//
//int main() {
//	int a, b, c, st;
//	printf("삼각형의 세변을 각각 입력하세요(예: 1 2 3):");
//	do {
//		scanf("%d %d %d", &a, &b, &c);
//		st = (b + c > a) && (a + c > b) && (a + b > c);
//		if (!st) {
//			printf("유효한 삼각형이 아닙니다. 다시 입력하세요!\n");
//			printf("삼각형의 세변을 각각 입력하세요(예: 1 2 3):");
//		}
//	} while (!st);
//	if (a == b && b == c && a == c)
//		printf("정삼각형");
//	else if (a == b || b == c || a == c)
//		printf("이등변삼각형");
//	else
//		printf("일반 삼각형");
//}


//// 문자열 및 배열 연습
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char ch[100];
//	printf("문자열을 입력하세요: ");
//	scanf("%s", &ch);
//	printf("%d", ch[0]);
//}


//문제:
//사용자로부터 세 개의 정수를 입력받아 이들 중 가장 큰 값과 가장 작은 값을 찾는 프로그램을 작성하세요.
//
//조건 :
//	세 개의 정수는 모두 서로 다른 값을 가집니다.
//	가장 큰 값과 가장 작은 값을 각각 출력하세요.
//	예시 실행 :
//코드 복사
//정수 3개를 입력하세요 : 15 22 8
//가장 큰 값 : 22
//가장 작은 값 : 8
//힌트 :
//	if 문을 사용하여 세 개의 정수를 비교합니다.
//		필요에 따라 중첩 조건문을 활용해도 좋습니다.
////		이 문제를 풀어보시고, 필요하면 추가 힌트를 드리겠습니다!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

//int main() {
//	int a, b, c;
//
//	printf("정수 3개를 입력하세요 :");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a > b || b > c) {
//		printf("가장 큰 값: %d\n", a);
//		printf("가장 작은 값: %d", b);
//	}
//	else if (a > c || c > b) {
//		printf("가장 큰 값: %d\n", a);
//		printf("가장 작은 값: %d", c);
//	}
//	else if (b > a || a > c) {
//		printf("가장 큰 값: %d\n", b);
//		printf("가장 작은 값: %d", c);
//	}
//	else if (b > c || c > a){
//		printf("가장 큰 값: %d\n", b);
//		printf("가장 작은 값: %d", a);
//	}
//	else if (c > a || a > b) {
//		printf("가장 큰 값: %d\n", c);
//		printf("가장 작은 값: %d", b);
//	}
//	else if (c > b || b > a) {
//		printf("가장 큰 값: %d\n", c);
//		printf("가장 작은 값: %d", a);
//	}
//}
//

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, num;
//	int count_1 = 0, count_2 = 0;
//	printf("입력할 정수의 개수(n): ");
//	scanf("%d", &n);
//	if (n >= 1) {
//		printf("정수 %d개를 입력하세요: ", n);
//		for (int i = 1; i <= n; i++) {
//			scanf("%d", &num);
//			if (num % 2 == 0)
//				count_1++;
//			else
//				count_2++;
//		}
//		printf("짝수 개수: %d\n", count_1);
//		printf("홀수 개수: %d", count_2);
//	}
//	else
//		printf("유효한 정수 개수를 입력하세요");
//}

//문제 1:
//사용자로부터 정수 n을 입력받고, 1부터 n까지의 숫자 중 4의 배수만 출력하는 프로그램을 작성하세요.
//
//조건 :
//	n은 1 이상의 정수입니다.
//	1부터 n까지 숫자 중에서 4의 배수만 출력합니다.
//	만약 4의 배수가 없으면, "4의 배수가 없습니다."를 출력합니다.
//	예시 실행 :
//코드 복사
//정수를 입력하세요 : 20
//4 8 12 16 20

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, count = 0;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n;i++) {
//		if (i % 4 == 0) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//		if (count == 0)
//			printf("4의 배수가 없습니다!");
//}

/*문제 2:
사용자로부터 양의 정수 n을 입력받아, 그 수가 소수인지 판별하는 프로그램을 작성하세요.

조건 :
	소수란 1과 자기 자신만을 약수로 갖는 수입니다. (예 : 2, 3, 5, 7 등)
	n이 1이면 "1은 소수가 아닙니다."를 출력합니다.
	n이 소수이면 "소수입니다.", 소수가 아니면 "소수가 아닙니다."를 출력합니다.
	예시 실행 :
코드 복사
정수를 입력하세요 : 13
소수입니다.*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, count = 0;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &n);
//	if (n != 2) {
//		for (int i = 2; i < n; i++)
//			if (n % i == 0)
//				count++;
//		if (count == 0)
//			printf("소수입니다");
//		else
//			printf("소수가 아닙니다");
//	}
//	else
//		printf("소수입니다");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////
//int main() {
//	int n, count = 0;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &n);
//
//	while (n > 0){
//		count += n % 10;
//		n /= 10;
//	}
//	printf("각 자리수의 합: %d", count);
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, count_1 = 0, count_2 = 0;
//	printf("정수를 입력하세요: ");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//		if (i % 2 == 0)
//			count_1 += i;
//		else
//			count_2 += i;
//printf("짝수의 합: %d\n홀수의 합: %d", count_1, count_2);
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, count = 0;
//	printf("정수를 입력하세요");
//	scanf("%d", &n);
//	if (n > 0) {
//		for (int i = 1; i <= n; i++)
//			if (i % 3 == 0)
//				if (i % 5 != 0)
//					count++;
//		printf("결과 %d", count);
//	}
//	else
//		printf("n은 양의 정수입니다");
//
//
//		
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//// 팩토리얼을 계산하는 재귀 함수
//int factorial(int n) {
//    if (n <= 1)  // 기저 조건: n이 1 또는 0일 때 1을 반환
//        return 1;
//    else
//        return n * factorial(n - 1);  // n * (n-1)! 을 계산
//}
//
//int main() {
//    int number;
//    printf("정수를 입력하세요: ");
//    scanf("%d", &number);
//
//    printf("%d! = %d\n", number, factorial(number));
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int multi(int a, int b) {
//	if (a == b)
//		return a;
//	else
//		return a*multi(a + 1, b);
//}
//
//
//int main() {
//	printf("%d", multi(1,3) );
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int count(int n) {
//	int c = 0;
//	if (n == 0)
//		return c;
//	else
//		count(n / 10);
//}
//int main() {
//
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//배열 개념문제
//
//int main() {
//    int ar[5];  // 크기가 5인 배열 선언
//
//    // 사용자 입력받기
//    printf("5개의 정수를 입력하세요:\n");
//    for (int i = 0; i < 5; i++) {
//        printf("%d번째 정수 입력: ", i + 1);
//        scanf("%d", &ar[i]);
//    }
//
//    // 배열 요소 출력
//    printf("입력한 정수: ");
//    for (int i = 0; i < 5; i++) {
//        printf("%d ", ar[i]);
//    }
//
//    return 0;
//}

// 배열 선언과 사용
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int arr[10], s = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		s += arr[i];
//	}
//	printf("배열 요소의 총합: %d", s);
//}
// 
// 
// 다차원 배열 문제
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int arr[3][3],sum=0;
//	for (int r = 0; r < 3; r++) {
//		for (int c = 0; c < 3; c++) {
//			scanf("%d", &arr[r][c]);
//		}
//	}
//	for (int r = 0; r < 3; r++) {
//		for (int c = 0; c < 3; c++) {
//			sum += arr[r][c];
//		}
//		printf("%d행의 합: %d\n", r+1, sum);
//		sum = 0;
//	}
//}

// 배열의 최대 최소 찾기
//int main() {
//	int arr[5],min,max;
//	
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	min = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (min > arr[i])
//			min = arr[i];
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("최대값: %d\n최소값: %d", max, min);
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//	int arr[6] = { 0 };
//
//	srand(time(0));
//	for (int i = 0; i < 100; i++) {
//		arr[rand() % 6]++;
//	}
//	for (int i = 0; i < 6; i++)
//		printf("%d: %d번\n", i + 1, arr[i]);
//}

#include <stdlib.h>
#include <time.h>
//int main() {
//	srand(time(0));
//	int num, count = 0, arr[45] = { 0 };
//	do {
//		num = rand() % 45;
//		if (arr[num]==0) {
//			arr[num]=1;
//			count++;
//		}
//	} while (count<6);
//	printf("로또번호: ");
//	for (int i = 0; i < 45; i++) {
//		if (arr[i] == 1)
//			printf("%d ", i + 1);
//	}
//}

//void selection(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		int minIndex = i;
//		for (int j = i + 1; j < n; j++) {
//			if (arr[j] < arr[minIndex]) {
//				minIndex = j;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[minIndex];
//		arr[minIndex] = tmp;
//	}
//
//void bubble(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j	+ 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}

struct Student {
	char name[50];
	int student_id;
	int score;
};

int main() {
	int max = 0;
	struct Student student[3];
	for (int i = 0; i < 3;i++) {
		printf("학생 %d 정보 입력:\n",i+1);
		printf("이름: ");
		scanf("%d",student[i].name);
		printf("\n학번: ");
		scanf("%d",student[i].student_id);
		printf("\n점수: ");
		scanf("%d",student[i].score);
		if (max > student[i].score) {
			max = i;
		}
	}
	printf("평균 점수: %lf", (student[0].score + student[1].score + student[2].score) / 3);
	printf("최고 점수 학생: %s", student[max].name);
}