# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {




	//int blood;
	//printf("����: ");
	//scanf("%d", &blood);

	//if (70 <= blood && blood <= 109)
	//	puts("����");
	//else
	//	puts("�����ʿ�");
	/*int score;
	printf("����: ");
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
		//printf("�ݳ�: ");
		//scanf("%d", &year);

		//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		//	printf("����");
		//else
		//	printf("����ƴ�");


		//int a;
		//printf("����: ");
		//scanf("%d", &a);

		//if (a % 2 == 0)
		//	printf("¦��");
		//else
		//	printf("Ȧ��");
												/*�� ¦�� Ȧ�� ������ �ٲ�� �ٸ� ������ �����°�?*/


					// ���ڵ� �����̴�
					// ����ġ ������ ������ �� �� �ִ�
					// continue�� ���, break�� ����!!!



		//###############����ġ��###############
		// break�� ���ӵȴ�
		// case�� ���ӵɼ� �ִ�
		// default�� ��� �ȴ�
		/*int a;
		printf("����: ");
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
/*	printf("������Ẹ��?: ");
	int a = getche();
	puts("")*/;//getch�� ������Ʈ�� �� �� ���͸� �����ϴ� ���
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

			// ���� ���� ���ð� ��1~12�� �Է¹޾� �ش������ �� ���� �Է�
	int month, year, days;
	printf("�ݳ��, 1~12�� �� �ϳ��� ���� �Է�: ");
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
			printf("�� ���� �Է��Դϴ�!");

	}
	printf("%d�� %d���� %d�� �Դϴ�", year, month, days);
	}

	