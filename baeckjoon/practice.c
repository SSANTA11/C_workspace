//# define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//
//int main(){
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d\n",a+b);
//    printf("%d\n",a-b);
//    printf("%d\n",a*b);
//    printf("%d\n",a/b);
//    printf("%d\n",a%b);
//}

////백준 온라인 약수들의 합 9506번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num, count = 0;
//	do {
//		scanf("%d", &num);
//
//		for (int i = 1; i < num; i++) {
//			if (num % i == 0)
//				count += i;
//		}
//		if (count == num) {
//			printf("%d =", num);
//			for (int i = 1; i < num; i++) {
//				if (num % i == 0)
//					printf(" %d", i);
//				if (i < num - 1 && num % (i + 1) == 0) // 약수 사이에만 '+' 출력
//					printf(" +");
//			}
//			count = 0;
//			printf("\n");
//		}
//		else if (num != -1)
//			printf("%d is NOT perfect.\n", num);
//		count = 0;
//
//	} while (num !=-1);
//}

//소수찾기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num, arr[1000], count=0;
//	scanf("%d", &num);
//	for (int i = 0; i < num; i++)
//		scanf("%d", &arr[i]);
//
//	
//		for (int i = 0; i < num; i++){
//			int pri = 1;
//				if (arr[i] < 2){
//					pri = 0;
//			}
//
//			else{
//				for (int r = 2; r <= arr[i] / 2; r++)
//					if (arr[i] % r == 0) {
//						pri = 0;
//						break;
//					}
//			}
//			if (pri == 1)
//				count++;
//	}
//		printf("%d", count);
//		return 0;
//}

//소수
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int M, N, sum = 0, st;
//	scanf("%d", &M);
//	scanf("%d", &N);
//	for (int i = M; i <= N; i++) {
//		int  isPrime = 1;
//		if (i < 2) {
//			isPrime=0;
//		}
//		else {
//			for (int r = 2; r < i; r++) {
//				if (i % r == 0) {
//					isPrime = 0;
//				}
//			}
//		}
//		if (isPrime == 1) {
//			if (sum == 0) {
//				st = i;
//			}
//			sum += i;
//		}
//	}
//	if (sum == 0) {
//		printf("%d", -1);
//	}
//	else
//		printf("%d\n%d", sum, st);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void dist(int n) {
//	if (n == 1) {
//	}
//	else {
//		for (int i = 2; i * i <= n; i++) {
//			while (n % i == 0) {
//				printf("%d\n", i);
//				n /= i;
//			}
//		}
//		if (n != 1) {
//			printf("%d",n);
//		}
//	}
//	return;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	dist(n);
//}

// 백준온라인 27323번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int A, B;
//	scanf("%d", &A);
//	scanf("%d", &B);
//	printf("%d", A * B);
//}


//직사각형에서 탈출 1085번
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int x, y, w, h, right, left, up, down;
//	int list[4] = { 0 },min=1001;
//	scanf("%d %d %d %d", &x, &y, &w, &h);
//	right = x;
//	left = w - x;
//	down = y;
//	up = h - y;
//	list[0] = right;
//	list[1] = left;
//	list[2] = down;
//	list[3] = up;
//
//	for (int i = 0; i < 4; i++) {
//		if (list[i] < min) {
//			min = list[i];
//		}
//	}
//	printf("%d", min);
//}

//3009번 네 번째 점
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int a_1, b_1, a_2, b_2, a_3, b_3, x, y;
//	scanf("%d %d", &a_1, &b_1);
//	scanf("%d %d", &a_2, &b_2);
//	scanf("%d %d", &a_3, &b_3);
//		if (a_1 == a_2) {
//			x = a_3;
//		}
//		else if (a_2 == a_3) {
//			x = a_1;
//		}
//		else if (a_3 == a_1) {
//			x = a_2;
//		}
//
//		if (b_1 == b_2) {
//			y = b_3;
//		}
//		else if (b_2 == b_3) {
//			y = b_1;
//		}
//		else if (b_3 == b_1) {
//			y = b_2;
//		}
//		printf("%d %d", x, y);
//}

