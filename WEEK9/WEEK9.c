
# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//*******************************************재귀함수 연습 풀이 1**************************************************
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

//*******************************************재귀함수 연습 풀이 2**************************************************
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

//*******************************************재귀함수 연습 풀이 3(피보나치)**************************************************
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

//*******************************************재귀함수 연습 풀이 4**************************************************

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

//*******************************************재귀함수 연습 풀이 5**************************************************~~~~~~~~~~~~~~~~~~~~~~~~~순환호출 시험출제~~~~~~~~~~~~~~~~~~~~
// 순설=대로 나오게 왼쪽에서 오른쪽으로.. 만들기 review



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
//변수 선언과 사용 간의 차이를 인지하자
//변수 선언(지역변수, 형식인수 등) 시 int *x;
//x가 포인터(주소값을 가지는) 변수
//변수 사용 시 *x = *y;
//*x는 x가 가르키는 변수를 의미

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
	printf("정수: "); scanf("%d", &a);
	printf("정수: "); scanf("%d", &b);
	if (divide(a, b, &num))
		printf("%d/%d=%d\n", a, b, num);
	else
		printf("0으로 나눌 수 없음\n");
}