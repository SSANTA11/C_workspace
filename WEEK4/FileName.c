//4���� (�迭�̸��� �ּ�)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int value = 38, value2 = 40;
	//int *pi; //pi�� ����Ű�� ����
	//int *pi2; // pointer����

	//pi = &value; //&�� ������ �ּ�
	//printf("%d %d %lu\n",value, *pi, pi); //*pi�� pi�� ����Ű�� ����
	//
	////pi�� value2�� ����Ű���϶�
	//
	///*pi = &value2;
	//printf("%d %d %lu\n",value2, *pi, pi);
	//*/

	////pi2�� pi�� ���� �ּҸ�(���� ������ ����Ű��) ����Ű��...
	//
	//pi2 = pi; //pointer ���� ������ ���� ������ ����Ű�� ��
	//printf("%d %d %lu\n",value, *pi2, pi2);

	//int value1 = 38, value2;
	//int* pi;

	//pi = &value1;// pi�� value1�� ����Ű�� ��, ���� �ÿ��� *�� �����ȴ�
	//value2 = *pi;//(*pi�� pi�� ����Ű�� ����(value1)
	//*pi = 40;//value1=40;
	//printf("value1=%d, value2=%d\n", value1, value2);

	//����� ������, ������-> ���� ����

	/*double pie = 3.14;
	printf("1234567890\n");
	printf("###%f###\n",pie);
	printf("###%10f###\n",pie);
	printf("###%.2f###\n",pie);
	printf("###%0.2f###\n",pie);
	return 0;*/

	//int age;
	//float height;
	//char name[32];//���ڿ��� char�迭�� ǥ��
	////printf("���� : ");
	////scanf("%d", &age);
	////printf("Ű : ");
	////scanf("%f", &height);
	////printf("�̸� : ");
	////scanf("%s", name);
	//printf("���� Ű �̸� : ");
	//scanf("%d %f %s", &age, &height, name);

	//printf("%d %.2fcm %s\n", age, height, name);


	// 5�� ��� pass

	// 6�� ����
	// ���� 6-1
	/*int input;

	printf("2+3=");
	scanf("%d", &input);
	if (input == 5)
		puts("�����Դϴ�!\n�����մϴ�");
	else if (input == 6)
		puts("������ �ƴϰ� �����Դϴ�\n�ٽ� ����!!");
	else {
		printf("�����̳׿�...");
		printf("�ٺ� �츮����츮");
		}*/
	//puts�� printf�� �ٹٲޱ��� ���ִ� ����� �Ѵ�
	//�������� &&, ||, ! (and, or, not)
	char sex;
	printf("����(m/f):");
	scanf("%c", &sex);
	printf("%c", sex=='f');
	if ((sex == 'm') || (sex == 'M'))
		printf("����");
	else if ((sex == 'f') || (sex == 'F'))
		printf("����");

	/*else if (sex == 'M')
		printf("����");*/
	else
		printf("�������� ������ �����ϼ���!");
}