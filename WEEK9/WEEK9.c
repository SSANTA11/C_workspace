
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//*******************************************����Լ� ���� Ǯ�� 1**************************************************
//int sum(int n) {
//	if (n > 1)
//		return sum(n - 1) + n ;
//	else
//		return 1;
//
//}
//
//int main() {
//	printf("%d\n", sum(10));
//}

//*******************************************����Լ� ���� Ǯ�� 2**************************************************
//void counter(int n) {
//	printf("%d\n", n);
//	if (n > 0)
//		counter(n - 1);
//}
//
//void counter_reverse(int n) {
//	if (n < 0)
//		counter();
//	printf("%d\n", n);
//}
//
//int main() {
//	counter(5);
//	counter_reverse(5);
//}

//*******************************************����Լ� ���� Ǯ�� 3(�Ǻ���ġ)**************************************************
//int fibo(int n) {
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else if (n > 1)
//		return fibo(n - 2) + fibo(n - 1);
//}
//int main() {
//	printf("%d\n", fibo(0));
//	printf("%d\n", fibo(1));
//	printf("%d\n", fibo(10));
//}

//*******************************************����Լ� ���� Ǯ�� 4**************************************************

//void pr(int num) {
//	printf("%d ", num % 10);
//	if (num / 10 > 0) {
//		pr(num / 10);
//	}
//	
//}
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	pr(num);
//
//}

//*******************************************����Լ� ���� Ǯ�� 5**************************************************~~~~~~~~~~~~~~~~~~~~~~~~~��ȯȣ�� ��������~~~~~~~~~~~~~~~~~~~~
// ����=��� ������ ���ʿ��� ����������.. ����� review



//*********************************************************************************************
//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//
//}
//int main() {
//	int a = 1, b = 2, temp;
//	printf("a=%d,b=%d\n", a, b);
//	swap(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	
//}
//
////*********************************************************************************************
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//int main() {
//	int a = 1, b = 2, temp;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//}
//
//���� ����� ��� ���� ���̸� ��������
//���� ����(��������, �����μ� ��) �� int *x;
//x�� ������(�ּҰ��� ������) ����
//���� ��� �� *x = *y;
//*x�� x�� ����Ű�� ������ �ǹ�

//
////*********************************************************************************************
//
//void add_multiply(int x, int y, int* padd, int* pmul) {
//	*padd = x + y;
//	*pmul = x * y;
//}
//
//int main() {
//	int a = 1, b = 2, add, mul;
//	add_multiply(a, b, &add, &mul);
//	printf("%d %d\n",add,mul);
//}


//*********************************************************************************************

int divide(int x, int y, int* num) {
	if (y == 0 )
		return 0;
	else
		*num = x / y;
		return 1;
}
int main() {
	int a, b, num;
	printf("����: "); scanf("%d", &a);
	printf("����: "); scanf("%d", &b);
	if (divide(a, b, &num))
		printf("%d/%d=%d\n", a, b, num);
	else
		printf("0���� ���� �� ����\n");
}