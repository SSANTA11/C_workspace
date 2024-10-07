//4주차 (배열이름은 주소)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int value = 38, value2 = 40;
	//int *pi; //pi가 가르키는 변수
	//int *pi2; // pointer변수

	//pi = &value; //&는 변수의 주소
	//printf("%d %d %lu\n",value, *pi, pi); //*pi는 pi가 가르키는 변수
	//
	////pi가 value2를 가르키게하라
	//
	///*pi = &value2;
	//printf("%d %d %lu\n",value2, *pi, pi);
	//*/

	////pi2가 pi와 같은 주소를(같은 변수를 가르키게) 가르키게...
	//
	//pi2 = pi; //pointer 변수 대입은 같은 변수를 가르키게 함
	//printf("%d %d %lu\n",value, *pi2, pi2);

	//int value1 = 38, value2;
	//int* pi;

	//pi = &value1;// pi가 value1을 가르키게 함, 선언 시에는 *가 생략된다
	//value2 = *pi;//(*pi는 pi가 가르키는 변수(value1)
	//*pi = 40;//value1=40;
	//printf("value1=%d, value2=%d\n", value1, value2);

	//사용자 정의형, 진위형-> 교재 참조

	/*double pie = 3.14;
	printf("1234567890\n");
	printf("###%f###\n",pie);
	printf("###%10f###\n",pie);
	printf("###%.2f###\n",pie);
	printf("###%0.2f###\n",pie);
	return 0;*/

	//int age;
	//float height;
	//char name[32];//문자열은 char배열로 표현
	////printf("나이 : ");
	////scanf("%d", &age);
	////printf("키 : ");
	////scanf("%f", &height);
	////printf("이름 : ");
	////scanf("%s", name);
	//printf("나이 키 이름 : ");
	//scanf("%d %f %s", &age, &height, name);

	//printf("%d %.2fcm %s\n", age, height, name);


	// 5장 잠시 pass

	// 6장 시작
	// 예제 6-1
	/*int input;

	printf("2+3=");
	scanf("%d", &input);
	if (input == 5)
		puts("정답입니다!\n축하합니다");
	else if (input == 6)
		puts("곱샘이 아니고 덧샘입니다\n다시 도전!!");
	else {
		printf("오답이네요...");
		printf("바보 띠리리띠띠리");
		}*/
	//puts은 printf의 줄바꿈까지 해주는 기능을 한다
	//논리연산자 &&, ||, ! (and, or, not)
	char sex;
	printf("성별(m/f):");
	scanf("%c", &sex);
	printf("%c", sex=='f');
	if ((sex == 'm') || (sex == 'M'))
		printf("남성");
	else if ((sex == 'f') || (sex == 'F'))
		printf("여성");

	/*else if (sex == 'M')
		printf("남성");*/
	else
		printf("생물학적 성별을 말씀하세요!");
}