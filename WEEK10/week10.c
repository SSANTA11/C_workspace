#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int arscore[5]; // 5���� ���(����,element)�� ������ int �迭 ����
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d--", i+1);
//		scanf("%d", &arscore[i]);// �̶� i�� �ε���(index) Ȥ�� ÷�ڶ� ��Ī
//		sum += arscore[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d�� %d\n",i+1 ,arscore[i]);
//	}
//	printf("\n����=%d, ���=%.2f���Դϴ�.\n", sum, sum/5.0);// ���� / �Ǽ� => �Ǽ�
//	
//}

//����(global) ����
//�ܺ�(external) ����
//����(local) ����
//
//int main() {
//	int arLocal[10];
//	for (int i = 0; i < 10; i++)
//		arLocal[i] = 1;
//	for (int i = 0; i < 10 ; i++)
//		printf("%d\n",arLocal[i]);
//
//}

//int main() {
//	int ar[5], num, max, min;
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &num);
//		ar[i] = num;
//	}
//
//	max = ar[0];
//	min = ar[0];
//	for (int i = 0; i < 5; i++){
//		printf("%d��° %d\n", i, ar[i]);
//		if (max < ar[i])
//			max = ar[i];
//		if (min > ar[i])
//			min = ar[i];
//}
//
//
//	printf("�ִ�:  %d\n",max);
//	printf("�ּ�:  %d\n",min);
//}

//int main() {
//	int ar[5], maxIndex=0, minIndex=0;
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &ar[i]);
//	}
//
//	for (int i = 1; i < 5; i++)
//		if (ar[i] > ar[maxIndex])
//			maxIndex = i;
//		else if (ar[i]>ar[minIndex])
//			minIndex = i;
//
//	printf("�ִ�:  %d\n", ar[maxIndex]);
//	printf("�ּ�:  %d\n", ar[minIndex]);
//}

# include <stdlib.h> // rand, srand �Լ�
# include <time.h> // time �Լ�

//int main() {
//	srand(time(0));// ���� �߻� �� �ѹ��� ȣ��
//	int faceCount[6] = { 0 };
//	for (int i = 0; i < 10000; i++) {// �ֻ�����
//		int face = rand() % 6;//0~5������
//		faceCount[face]++;
//	}
//
//	for (int i = 0; i < 6; i++)
//		printf("%d\t%d\n", i + 1, faceCount[i]);
//}

//int main() {
//	srand(time(0));// ���� �߻� �� �ѹ��� ȣ��
//	int lotto[45] = { 0 };
//	int count = 0;
//
//	do {
//		int num = rand() % 45; //0~44����
//		if (lotto[num] == 0) { //num�� �̹� ���� ��ȣ�� �ƴϸ�
//			lotto[num] = 1; //�������� ǥ��
//			count++; // ���� ��ȣ ���� ������Ŵ
//		}
//	} while(count<6);
//
//	//1~45 �� ���õ� (lotto[i] ���� 1��) ��ȣ�� ���
//	//(��������� 6�� ��ȣ�� ��µ�)
//	for (int i = 0; i <= 44; i++)
//		if (lotto[i] == 1)
//			printf("%d\n",i+1);
//}

//int main() {
//	srand(time(0));// ���� �߻� �� �ѹ��� ȣ��
//	int faceCount[11] = { 0 };
//	for (int i = 0; i < 1000000; i++) {
//		int face = rand() % 11;//0~10������
//		faceCount[face]++;
//	}
//
//	for (int i = 0; i <= 10; i++)
//		printf("%d\t%d\n", i, faceCount[i]);
//}


//int main() {
//	int arScore[3][4] //2���� �迭 ����, �ʱⰪ ����
//		= { {92,88,76,100},{23,33,44,55},{11,22,335,66} };
//	for (int c = 0; c < 3; c++) {
//		int sum = 0;
//		for (int s = 0; s < 4; s++)
//			sum += arScore[c][s];
//		printf("%d���� : ���� = %d��, ��� = %.2f��\n", c + 1, sum, sum / 4.0);
//	}
//}
//
//

int main() {
	int arScore[3][4] //2���� �迭 ����, �ʱⰪ ����
		= { {92,88,76,100},{23,33,44,55},{11,22,335,66} };
	for (int c = 0; c < 3; c++) {
		int sum = 0;
		for (int s = 0; s < 4; s++)
			sum += arScore[c][s];
		printf("%d���� : ���� = %d��, ��� = %.2f��\n", c + 1, sum, sum / 4.0);
	}
	for (int s = 0; s < 4; s++) {
		int sum = 0;
		for (int c = 0; c < 3; c++)
			sum += arScore[c][s];
		printf("%d�л� : ���� = %d��, ��� = %.2f��\n", s + 1, sum, sum / 3.0);
	}
}
// ������ ������ ���� �� �ϱ� ===> �������� ���ɼ���

// ###########################################�����
//arScore.lotto, facecount�� ��� �迭 -> �迭 �̸��� �ּ�, ����ó
// ������ �迭�� �ּҸ� ������ �Լ��� �Ѱ��� ��