# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {




	//int blood;
	//printf("혈당: ");
	//scanf("%d", &blood);

	//if (70 <= blood && blood <= 109)
	//	puts("정상");
	//else
	//	puts("관리필요");
	/*int score;
	printf("점수: ");
	scanf("%d", &score);
	if (score >= 90)
		puts("A");
	else if (score >= 80)
		puts("B");
	else if (score >= 70)
		puts("C");
	else if (score >= 60)
		puts("D");
	else
		puts("F");*/

		//int year;
		//printf("금년: ");
		//scanf("%d", &year);

		//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		//	printf("윤년");
		//else
		//	printf("윤년아님");


		//int a;
		//printf("정수: ");
		//scanf("%d", &a);

		//if (a % 2 == 0)
		//	printf("짝수");
		//else
		//	printf("홀수");
												/*왜 짝수 홀수 순서가 바뀌면 다른 정보가 나오는가?*/


					// 문자도 정수이다
					// 스위치 문에는 정수만 올 수 있다
					// continue는 통과, break는 나가!!!



		//###############스위치문###############
		// break는 연속된다
		// case는 연속될수 있다
		// default는 없어도 된다
		/*int a;
		printf("정수: ");
		scanf("%d", &a);
		switch (a) {
		case 1:
			puts("one");
			break;

		case 2:
			puts("two");
			break;

		case 3:
			puts("three");
			break;

		default:
			puts("others");
		}*/
/*	printf("토정비결보실?: ");
	int a = getche();
	puts("")*/;//getch는 프롬프트가 뜰 때 엔터를 생략하는 기능
	/*puts("");

	switch (a) {
	case 'y':
	case 'Y':
		puts("Yes");
		break;
	case'n':
	case'N':
		puts("No");
		break;}*/


	//if ((a == 'y') || (a == 'Y'))
	//	printf("yes");
	//else if ((a == 'n') || (a == 'N'))
	//	printf("no");

			// 윤년 생각 마시고 월1~12를 입력받아 해당월으리 날 수를 입력
	int month, year, days;
	printf("금년과, 1~12月 中 하나를 각각 입력: ");
	scanf("%d %d", &year, &month);
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
			//printf("%d", 31);
			days = 30;
			break;
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			//printf("%d", 30);
			days = 31;
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				//printf("%d", 29);
				days = 29;
			else
				//printf("%d", 28);
				days = 28;
			break;
		default:
			printf("월 단위 입력입니다!");

	}
	printf("%d년 %d월은 %d일 입니다", year, month, days);
	}

	