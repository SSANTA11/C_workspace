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


# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
int main() 
{
	char input;
		int count_uppercase = 0, count_lowercase = 0, count_degits = 0;
		printf("문자를 입력하세요: ");
		while (1) {
			input = getchar();
			if (input == '\n') {
				break;
			}
			else
				if (input >= 'A' && input <= 'Z')
					count_uppercase++;
				else if ('a' <= input && input <= 'z')
					count_lowercase++;
				else if ('0' <= input && input <= '9')
					count_degits++;
		}
		printf("대문자 %d개\n", count_uppercase);
		printf("소문자 %d개\n", count_lowercase);
		printf("숫자 %d개", count_degits);
		
		return 0;

}