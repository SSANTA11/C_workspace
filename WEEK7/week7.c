#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //�ý��ۿ��� Ž��
#include "cursor.h" // �� ������Ʈ �������� Ž�� ��, �ý��� ����

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
//	int r='A';//�ʱ��
//	while (r <= 'Z')//���ǽ�
//	{
//		printf("%c\n", r);//���
//		r++;//������
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
//	printf("1~100������ �� = %d", sum);
//}

int main() {
	/*int num;
	double count=0;
	int sum = 0;
	do {
		printf("���� �Է� (���� ���� 0) : ");
		scanf("%d", &num);
		sum += num;
		count += 1;
	} while (num != 0);
	printf("%lfȸ �Է��Ͻ� ������ ������ %d�̰�, ����� %.lf�Դϴ�",count-1, sum, sum/(count-1));*/
	/*----------------------------------------------------------------------------*/
	/*int sum = 0;
	for (int i = 1; i <= 100; i++)
		if (i % 3 == 0)
			sum += i;
	printf("%d", sum);*/
	/*----------------------------------------------------------------------------*/
	/*int num;

	do{
		printf("���� �Է�: ");
		scanf("%d", &num);

	} while (1>num||num>10);
	printf("%d", num);*/
	/*----------------------------------------------------------------------------*/
	/*int num;
	do {
		printf("���� �Է�: ");
		scanf("%d", &num);
	} while (num<1);
	printf("%d ������ ���: ",num);
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
		printf("���� �Է�: ");
		scanf("%d", &num);
	} while (num < 1);

	printf("%d ������ ���: ", num);
	for (int i = 1; i <= num; i++)
		if (num % i == 0){
			count += 1;
	
		if (count == 2) 
			printf("�Ҽ��ƴ�");
		else
			printf("�Ҽ���");
	
		}
}