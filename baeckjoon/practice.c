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

//���� �¶��� ������� �� 9506��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, count = 0;
	do {
		scanf("%d", &num);

		for (int i = 1; i < num; i++) {
			if (num % i == 0)
				count += i;
		}
		if (count == num) {
			printf("%d =", num);
			for (int i = 1; i < num; i++) {
				if (num % i == 0)
					printf(" %d", i);
				if (i < num - 1 && num % (i + 1) == 0) // ��� ���̿��� '+' ���
					printf(" +");
			}
			count = 0;
			printf("\n");
		}
		else if (num != -1)
			printf("%d is NOT perfect.\n", num);
		count = 0;
	} while (num !=-1);
}