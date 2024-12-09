// 문자열의 변수는 주소
// 문자열의 복사는 주소값을 전달한다
	// 왜? : 문자열은 char의 리스트형이다!!!!!!!!!!!-> 배열의 변수는 주소값!!!
//리스트를 비운채로 놔두면 리스트의 첫 칸은 널값으로 채워지고 뒤는 가라지 값
// 문자열을 복사한다면 strcopy

//int main() {
//	// 문자열은 'char 배열'로 표현, 마지막을 '\0'으로 표시 ****************************************** 문자열은 char의 배열 **********************************************
//	char str1[100] = "abcd", str2[100];
//	char ch; 
//	ch='a'; 
//	
//	strcpy(str2, str1);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	// 문자열의 글자 수(널 문자 제외) 는 strlen 함수 사용
//	printf("%s의 글자 수 %d\n", str2, strlen(str2));
//	// 문자열 비교는 strcmp함수 사용(결과 값은 str1- str2라고 생각)
//	if (strcmp(str1, str2) < 0)
//		printf("% s < % s\n", str1, str2);
//	else if (strcmp(str1, str2)>0)
//		printf("% s > % s\n", str1, str2);
//	else
//		printf("% s == % s\n", str1, str2);
//
//	printf("배열이 차지하는 바이트 수 = %d, 배열 원소의 수 =%d", sizeof(str1), sizeof(str1) / sizeof(str1[0]));
//
//
//}
//#include <string.h>
//#include <stdio.h>
//struct Shuman {
//	char name[10];
//	int age;
//	double height;
//};
//void outhuman(struct Shuman some) {
//	printf("%s : %d세, 키 %.2f\n ", some.name, some.age, some.height);
//}
//
//int main() {
//	// 구조체(태그) 선언
//	/* struct Shuman Rho;
//	 strcpy(Rho.name, "hyunsoo");
//	 Rho.age = 24;
//	 Rho.height = 185.3;*/
//
//	struct Shuman Rho = { "hyunsoo", 24, 168.9 }, lee; // 구조체 변수의 초기화
//	lee = Rho;
//	printf("%s %d %.1lf\n", Rho.name, Rho.age, Rho.height);
//	printf("%s %d %.1lf\n", lee.name, lee.age, lee.height);// 구조체는 문자열과 다르게 대입이 가능하다!
//	outhuman(Rho);
//
////
////	struct Shuman fam[] = { {"hyunsoo", 24, 168.9},{"yunsoo", 20, 176.3} }; // 구조체 변수의 초기화
////	printf("%s %d %.1lf", fam[0].name, fam[0].age, fam[0].height);
////	printf("%s %d %.1lf", fam[1].name, fam[1].age, fam[1].height);
//	printf("\n%d", sizeof(struct Shuman));
//}
//포인터는 집주소를 메모가능한 특수 변수


//C에서 문자열은 100%는 문자 char의 배열
//437pg 구조체의 대입과 반환***************************************************주요 개념**********************************************************
// 구조체는 변끼리 대입 가능하다 -> 구조체는 값으로 전달한다.....! ->  주소로 전달X(주소를 전달하지 않는다.)
	// = 연산자로 대입하면 우변의 구조체 맴버 값이 좌변의 구조체로 복사됨
	// 단, 좌우변의 구조체는 타입이 같아야 함
// 인수 전달과정 ~~ 구조체를 통쨰로~~~

// 실인수 값에 의한 호출****************************************가장 중요************************************************

//배열은 옮기기 어려워서 주소값을 넘겨준다.

//구조체 변수 c를 선언
// 두 vector 구조체를 인수로 받아 x,y를 각 좌표 끼리 더한 구조체를 return하는 addVector() 함수를 정의


//
//struct location{
//	int x, y;
//};
//
//struct location add_vector(struct location v1, struct location v2) {
//	struct location sum;
//	sum.x = v1.x + v2.x;
//	sum.y = v1.y + v2.y;
//	return (sum.x, sum.y);
//};
//
//int addVector(int a, int b) {
//	int sum = a + b;
//	return sum;
//}
//
//int main() {
//	struct location a = { 4,0 }, b = { 0,3 };
//	printf("(%d %d)", a.x,a.y);
//	printf("(%d %d)", b.x,b.y);
//	struct location c = { addVector(a.x,b.x), addVector(a.y,b.y) };
//	printf("(%d %d)", c.x,c.y);
//}
//


//struct mytime {
//	int min, sec;
//};
//struct mytime difftime(struct mytime start, struct mytime end){
//	struct mytime diff;
//	int diffinsec = (end.min - start.min) * 60 + (end.sec - start.sec);
//	diff.min = diffinsec / 60;
//	diff.sec = diffinsec % 60;
//	return diff;
//}
//
//int main() {
//	struct mytime  a, b, c;
//	printf("시작시간 (분, 초): ");
//	scanf("%d %d", &a.min, &a.min);
//	printf("종료시간(분, 초) : ");
//	scanf("%d %d", &b.min, &b.min);
//	c = difftime(a, b);
//	printf("소요시간 %d분 %d초", c.min, c.sec);
//}

//이름(문자열, 크기20),나이(정수) 맴버를 가지는 구조체 person 선언
# define _CRT_SECURE_NO_WARNINGS
# include <string.h>
# include <stdio.h>

struct person {
	char name[20];
	int age;
};

int main() {
	/*struct person h ={ "hyunsoo", 24};
	struct person j ={ "jonghyun", 20};
	struct person m ={ "minho", 23};*/
	struct person p[3];
	for (int i = 0; i < 3; i++) {
		printf("이름 나이: ");
		scanf("%s %d", &p[i].name, &p[i].age);
	}
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", &p[i].name, &p[i].age);
	}
	char name[20];
	printf("찾는 이름: ");
	scanf("%s", name);

	for (int i = 0; i < 3; i++) {
		if (strcmp(p[i].name, name) == 0) {
			printf("%d\n", p[i].age);
		}
	}
}