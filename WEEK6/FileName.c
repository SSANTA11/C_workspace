//10�� 7�� ����
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//����1
	// �ﰢ���� �� ���� ������ �Ǽ�(float)�� �Է¹޾� ��ȿ�� �ﰢ������ �˻�
	// 1.0 2.0 3.0
	// ��ȿ�� �ﰢ���� �ƴϴ�
//����2
	// ����, ����, ������ �Է¹޾� ���� ����� ���, ��ȿ�� ������ �ƴϸ� 
	//���� �Է� : 1+2
	// 3
int main() {
	// ���� 1
		//double a, b, c;
		//printf("�� ���� ���� �Է�:");
		//scanf("%lf %lf %lf", &a, &b, &c);
		//if ((a + b > c) && (b + c > a) && (a + c > b))
		//	printf("��ȿ");
		//else
		//	printf("��ȿ���� ���� �ﰢ��");

		//float a, b, c;
		//printf("�� ���� ���� �Է�:");
		//scanf("%f %f %f", &a, &b, &c);
		//if ((a + b > c) && (b + c > a) && (a + c > b))
		//	printf("��ȿ");
		//else
		//	printf("��ȿ���� ���� �ﰢ��");
		/*int a, c;
		char b;

		printf("���� ������ ������ �Է�: ");
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
				printf("��ȿ�� �����ڰ� �ƴ�\n");


		}*/

		/*int a,b;

		printf("Ű �Է�");
		scanf("%d",&a);

			if (a < 140){
			{
				printf("���� �Է�: ");
				scanf("%d", &b);
			}
			if (b >= 10)
				printf("����");
			else
				printf("�Ұ�");
		}
		else
			printf("����");
		*/

		/*int hour;
		printf("�ð��Է�: ");
		scanf("%d", &hour);

		if (0!=hour&&hour<12)
			printf("���� %d��", hour);
		else if (hour == 0)
			printf("���� 12��");
		else if (hour == 12)
			printf("���� 12��");
		else
			printf("���� %d��", hour-12);*/
			/*int value = 386;
			int h = value / 100;
			int b = (value - h * 100)/10;
			int n = (value - h * 100 - b * 10);
			printf("%d��%d��%d", h, b, n);
		*/
		//int cash;
		//printf("�ݾ�: ");
		//scanf("%d",&cash);// ������ Ǯ���
		//int _1000 = cash/1000;
		//int _500 = (cash - _1000*1000)/500;
		//int _100 = (cash - _1000 * 1000 - _500 * 500)/100;
		//int _10 = (cash - _1000 * 1000 - _500 * 500 - _100 * 100);
		//printf("1000��: %d��\n500��: %d��\n100��: %d��\n10��: %d��", _1000, _500, _100,_10);

		// **************ĳ��Ʈ ������(127pg) �߿�-> �̷й���&���α׷��� ���� ����***************
		// ���� �����ڵ� ���� ���� ����
		/*
		int sum=427;
		int num = 5;*/

		//printf("���=%d\n", sum / num);
		//printf("���=%lf\n", sum / (double)num);
		//printf("���=%lf\n", (double)sum / num);
		//printf("���=%f\n", sum / (float)num);

		// for �ݺ���(for(�ʱ��;���ǽ�;������)������
	long long fact=1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <=n; i++)
		fact *= i;
	printf("%d!=%d", n,fact);
}