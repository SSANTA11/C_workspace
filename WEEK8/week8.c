// ���̵�����Ʈ: ���ۿ�, �μ��ۿ�
// �Լ��� ����: �������⼭ ���� ����ϱ� ���ؼ�... 

// ********************************************* �Լ� ���¿� ���� 1 ************************************
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

// ********************************************* �Լ� ���¿� ���� 2 ************************************
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

// ********************************************* �Լ� ���¿� ���� 3 ************************************
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

// ********************************************* �Լ� ���¿� ���� 4 ************************************
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


// ********************************************* �Լ� ���¿� ���� 5 ************************************
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

// ********************************************* �Լ� ���¿� ���� 6 ************************************
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
//// ���ϰ��� �ټ� �־ �������
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
//	printf("�Ǽ� 2�� �Է�(x y): ");
//	scanf("%lf %lf", &x, &y);
//	
//	printf("�� �� ū ���� %.lf\n",larger(x,y));
//	printf("%.lf�� ������ %.lf\n",x, absolute(x));
//	return 0; // ���ϰ��� �����ϸ� main�Լ��� ������ �������ȴ�.
//}

// ********************************************* �Լ� ���¿� ���� 7 ************************************
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
	printf("����: ");
	scanf("%d", &num);
	if(isPrime(num)==0)
		printf("�Ҽ��ƴ�");
	else
		printf("�Ҽ���");
}*/

// ********************************************* �Լ� ���¿� ���� 8 ************************************
// ## !!!!!!!!!!!!!!!!!!!!!!!!!!!! ���� �����ϱ�!!!!!!!!!!!!!!!!!!!!!!!!!!! ##
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
//	printf("�⵵: ");
//	scanf("%d", &year);
//	n = isLeapYear(year);
//	if (n == 1)
//		printf("����");
//	else
//		printf("���� �ƴ�");
//}

// ********************************************* �Լ� ���¿� ���� 9 ************************************
// ���� �Լ��� ���� �Լ��� �ǵ��� ��������� �����°��� �޷��ִ�!!

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<math.h>
//
//// void�� ��ȯ���� ������ �ǹ�
//// �� return�� ��� �����ϴ�.
//	// return�� break�� ���� Ȱ�밡���ϴ�.
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

// ********************************************* �Լ��� ����(prototype) ************************************
	// ���� ����(function prototype): �Լ��� ��ü ��ſ� ;�� ����ϸ�, �����; ������ ������ ���� ���� ����!!
		// �Ű����� �� ���� ���� �����ϰ� type�� ���൵ �ȴ�
	
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
	