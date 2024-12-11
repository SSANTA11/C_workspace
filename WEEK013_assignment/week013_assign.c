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
	printf("학생 수(1~10) : ");
	scanf("%d", &num);
	
	while (1 > num || num > 10) {
		printf("1~10 범주 밖입니다. 다시 입력하시오.\n");
		printf("학생 수(1~10): ");
		scanf("%d", &num);
	}

	printf("**학생 %d명 정보입력**\n", num);
	for (int i = 0; i < num; i++) {
		printf("%d번째 학생의 이름 평점 : ", i+1);
		scanf("%s %lf", student[i].name, &student[i].grade);
		if (max < student[i].grade) {
			max = student[i].grade;
			strcpy(max_name, student[i].name);
		}
	}
	
	printf("**학생 %d 명의 이름과 평점**\n", num);
	for (int i = 0; i < num; i++) {
		printf("%s %lf\n", student[i].name, student[i].grade);
	}
	printf("**이름으로 평점 조회**\n");
	int count = 0;
	
	while (count == 0) {
		printf("이름 : ");
		scanf("%s", name);

		for (int i = 0; i < num; i++) {
			if (strcmp(name, student[i].name) == 0) {
				printf("%s의 평점은 %lf입니다.\n", student[i].name, student[i].grade);
				count++;
				break;
			}
		}
		if (count == 0) {
			printf("'%s'이라는 이름은 명단에 없습니다. 다시 입력하시오.\n", name);
		}
	}
	printf("평점이 가장 높은 학생은 %s이고 평점은 %lf입니다.", max_name, max);

}