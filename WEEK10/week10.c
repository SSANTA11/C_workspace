#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//	int arscore[5]; // 5개의 요소(원소,element)를 가지는 int 배열 선언
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d--", i+1);
//		scanf("%d", &arscore[i]);// 이때 i는 인덱스(index) 혹은 첨자라 지칭
//		sum += arscore[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d번 %d\n",i+1 ,arscore[i]);
//	}
//	printf("\n총점=%d, 평균=%.2f점입니다.\n", sum, sum/5.0);// 정수 / 실수 => 실수
//	
//}

//전역(global) 변수
//외부(external) 변수
//지역(local) 변수
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
//		printf("%d번째 %d\n", i, ar[i]);
//		if (max < ar[i])
//			max = ar[i];
//		if (min > ar[i])
//			min = ar[i];
//}
//
//
//	printf("최대:  %d\n",max);
//	printf("최소:  %d\n",min);
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
//	printf("최대:  %d\n", ar[maxIndex]);
//	printf("최소:  %d\n", ar[minIndex]);
//}

# include <stdlib.h> // rand, srand 함수
# include <time.h> // time 함수

//int main() {
//	srand(time(0));// 난수 발생 전 한번만 호출
//	int faceCount[6] = { 0 };
//	for (int i = 0; i < 10000; i++) {// 주사위를
//		int face = rand() % 6;//0~5난수값
//		faceCount[face]++;
//	}
//
//	for (int i = 0; i < 6; i++)
//		printf("%d\t%d\n", i + 1, faceCount[i]);
//}

//int main() {
//	srand(time(0));// 난수 발생 전 한번만 호출
//	int lotto[45] = { 0 };
//	int count = 0;
//
//	do {
//		int num = rand() % 45; //0~44난수
//		if (lotto[num] == 0) { //num이 이미 뽑힌 번호가 아니면
//			lotto[num] = 1; //뽑혔음을 표시
//			count++; // 뽑힌 번호 개수 증가시킴
//		}
//	} while(count<6);
//
//	//1~45 중 선택된 (lotto[i] 값이 1인) 번호를 출력
//	//(결과적으로 6개 번호가 출력됨)
//	for (int i = 0; i <= 44; i++)
//		if (lotto[i] == 1)
//			printf("%d\n",i+1);
//}

//int main() {
//	srand(time(0));// 난수 발생 전 한번만 호출
//	int faceCount[11] = { 0 };
//	for (int i = 0; i < 1000000; i++) {
//		int face = rand() % 11;//0~10난수값
//		faceCount[face]++;
//	}
//
//	for (int i = 0; i <= 10; i++)
//		printf("%d\t%d\n", i, faceCount[i]);
//}


//int main() {
//	int arScore[3][4] //2차원 배열 선언, 초기값 지정
//		= { {92,88,76,100},{23,33,44,55},{11,22,335,66} };
//	for (int c = 0; c < 3; c++) {
//		int sum = 0;
//		for (int s = 0; s < 4; s++)
//			sum += arScore[c][s];
//		printf("%d과목 : 총점 = %d점, 평균 = %.2f점\n", c + 1, sum, sum / 4.0);
//	}
//}
//
//

int main() {
	int arScore[3][4] //2차원 배열 선언, 초기값 지정
		= { {92,88,76,100},{23,33,44,55},{11,22,335,66} };
	for (int c = 0; c < 3; c++) {
		int sum = 0;
		for (int s = 0; s < 4; s++)
			sum += arScore[c][s];
		printf("%d과목 : 총점 = %d점, 평균 = %.2f점\n", c + 1, sum, sum / 4.0);
	}
	for (int s = 0; s < 4; s++) {
		int sum = 0;
		for (int c = 0; c < 3; c++)
			sum += arScore[c][s];
		printf("%d학생 : 총점 = %d점, 평균 = %.2f점\n", s + 1, sum, sum / 3.0);
	}
}
// 가로합 세로합 이해 및 암기 ===> 시험출제 가능성ㄷ

// ###########################################ㅇ기억
//arScore.lotto, facecount은 모두 배열 -> 배열 이름은 주소, 연락처
// 다음주 배열의 주소를 가지고 함수에 넘겨줄 것