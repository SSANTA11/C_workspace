// ���� 3-2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//typedef enum { sun=1, mon, tue, thu, fri, sat } days;
int main()
{
	//##������ Ÿ�԰� �����÷ο�
	//	unsigned short a = -32767, b = -32768, c =-32769;
	//	printf("a=%d,b=%d,c=%d", a, b, c);

	//##���� ��ȯ
	//int a = 014, b = 12, c = 0xc;
	//printf("a=%o,b=%d,c=x", a, b, c);
	
	//##�Ǽ���
	//float f = 3.1415926535897932384626;
	//printf("%.10f\n", f);//float�� %f, .10�� �Ҽ��� �ڿ� 10�ڸ�
	//double d = 3.1415926535897932384626;
	//printf("%.20lf", d);//double�� %lf, .20 ...

	//char ch = 'A'; // char ch =65; �� ����
	//printf("������ ��=%c\n������ ��=%d\n", ch, ch);
	//int value = ch + 5;
	//printf("value=%d", value);


	//char a;
	//printf("���� �Է�:");
	//scanf("%c", &a);
	//printf("ASCII�ڵ�� ��ȯ�Ѵٸ�... %c = %d", a, a);

	//char a[1000];
	//printf("���ڿ� �Է���!:");
	//scanf("%s", a);
	//printf("�Է��� %s",a);

	//##enumerate
	//days day1 = sun;
	//printf("%d\n", day1);
	//days day2= sat;
	//printf("%d", day2);


	//int score[5];// �迭 ����: Ÿ�� �迭 �̸�[ũ��]
	//			 
	//score[0] = 10;// �迭 ���� ����: �迭 �̸�[÷��]
	//score[1]=20;// ũ�Ⱑ 5�̹Ƿ� ÷�� ���� 0~4
	//score[2]=30;
	//score[3]=40;
	//score[4]=50;
	//printf("%d,%d,%d,%d,%d\n", score[0], score[1], score[2], score[3], score[4]);

	unsigned int a=11;
	printf("%d",a);

}



//###########(����)############
//& (���ۼ�Ʈ)�� �޸� �ּҸ� ��Ÿ����!!
//��ǻ�͸� ����ڸ� ���ϸ��� �ѱ۷� ���� ����!!
//�Ǽ����� double�� ���� float�� ���� �Ϳ� 2�� �� ��Ȯ���� ��Ÿ���� ���� ���...
