#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

struct program {
	char name[21];
	double grade;
};



int main() {
	int num;
	char name[21], max_name[21];
	struct program student[10];
	double max = 0; 
	printf("�л� ��(1~10) : ");
	scanf("%d", &num);
	
	while (1 > num || num > 10) {
		printf("1~10 ���� ���Դϴ�. �ٽ� �Է��Ͻÿ�.\n");
		printf("�л� ��(1~10): ");
		scanf("%d", &num);
	}

	printf("**�л� %d�� �����Է�**\n", num);
	for (int i = 0; i < num; i++) {
		printf("%d��° �л��� �̸� ���� : ", i+1);
		scanf("%s %lf", student[i].name, &student[i].grade);
		if (max < student[i].grade) {
			max = student[i].grade;
			strcpy(max_name, student[i].name);
		}
	}
	
	printf("**�л� %d ���� �̸��� ����**\n", num);
	for (int i = 0; i < num; i++) {
		printf("%s %lf\n", student[i].name, student[i].grade);
	}
	printf("**�̸����� ���� ��ȸ**\n");
	int count = 0;
	
	while (count == 0) {
		printf("�̸� : ");
		scanf("%s", name);

		for (int i = 0; i < num; i++) {
			if (strcmp(name, student[i].name) == 0) {
				printf("%s�� ������ %lf�Դϴ�.\n", student[i].name, student[i].grade);
				count++;
				break;
			}
		}
		if (count == 0) {
			printf("'%s'�̶�� �̸��� ��ܿ� �����ϴ�. �ٽ� �Է��Ͻÿ�.\n", name);
		}
	}
	printf("������ ���� ���� �л��� %s�̰� ������ %lf�Դϴ�.", max_name, max);

}