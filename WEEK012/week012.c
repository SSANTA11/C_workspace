#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//*******************배열이름은 주소********************
// 
//void bubbleSort(int list[], int size) {
//	for (int k = 0; k < size - 1; k++) {
//		for (int i = 0; i < size - 1 - k; i++) {
//			if (list[i] > list[i+1]) {
//				int tmp = list[i];
//				list[i] = list[i + 1];
//				list[i + 1] = tmp;
//			}
//		}
//	}
//}
//버블소트 -> 가장 큰 것을 각 인덱스 위치마다 비교 후 최신화하여 최후방으로 끌고감
//void selectionSort(int list[], int size) { // list[]나 *list 모두 가능하다!
//	int index;
//	for (int k = 0; k < size - 1; k++) {
//		index = k;
//		for (int i = k + 1; i < size; i++) {
//			if (list[i] < list[index]) {
//				index = i;
//			}
//			if (k!=index){
//				int tmp = list[k];
//				list[i] = list[index];
//				list[index] = tmp;
//			}
//		}
//	}
//}
/*셀렉션소트->인덱스 0 위치부터 마지막 인덱스 위치까지를 모두 비교하는데, 우선 인덱스 0을 기준으로 순차적으로 각 요소를 비교하여 마지막 인덱스까지 최솟값을 최신화하고,
마지막까지 최솟값에 해당되는 인덱스와 인덱스 0 위치에 요소와 바꾸고 다음 인덱스인 1부터 다시 시작한다.*/
//int main() {
//	int i, k, data[10] = { 16,7,9,1,3,0,45,2,7 };
//	//bubbleSort(data, 10);
//	selectionSort(data, 10);
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", data[i]);
//	}
//}


// 매개변수는 인수를 복사하여 보낸다. 
// 이때 인수가 정수형일 경우에는 정수를 복사하여 보낸다.
// 그러나 리스트의 경우, 배열이름은 주소값이기 때문에, 주소값을 복사하여, 매개변수 자리에 실인수의 복사로써 입력된다.
// 결국 int main 내부의 리스트는 위의 함수 정의에서 복사된 주소값에 의해 근본(?)의 리스트가 변경된다.
// 결국 int main의 리스트 역시 표면상에 드러난 것과 다른, 변경된 값을 지니고 있다.
// 클론과 청부살인업자, 주소와 청부살인업자를 기억하자!

// 함수호출의 경계선에서 변수는 반드시 클론이 넘어가며, 원판은 변하지 않음
// 때문에 주소를 넘김!!!!
//
//int bs(int *list, int size, int key) {
//	int index = -1;
//	int low = 0, high = size, middle;
//	while (low <= high) {
//		middle = (low + high) / 2;
//		if (key == list[middle]) { //찾음
//			index = middle; //찾은 위치(첨자) 기록
//			break;
//		}
//		else if (key > list[middle]) {
//			low = middle + 1;
//		}
//		else {
//			high = middle - 1;
//		}
//	}
//}
//int main(){
//	int key, list[10] = { 1,25,38,39,55,64,97,180,190,200 };
//	printf("찾는 값 입력: ");
//	scanf("%d", &key);
//	int index = bs(list, 10, key);
//
//	if (index != -1) {
//		printf("찾는 값의 인덱스 = %d\n", index);
//	}
//	else {
//		printf("찾는 값이 없습니다.\n");
//	}
//
//}
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------- //
	//*******************배열이름은 주소********************//
/* scanf 에서 string(문자열)은 & 필요없음 -> 왜냐하면 배열이름은 주소
문자는 대입연산(=) 가능!!
문자열은 대입연산 불가, 각 원소값을 복사해야 함 -> 왜냐하면 주소값끼리는 대입연산불가-> 그러므로 strcpy를 활용한다!
//*/
//#include <string.h>
//int main() {
//	// 문자열은 char 배열로 표현, 마지막을 '\0'으로 표시
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


struct Shuman {
	char name[12];
	int age;
	double height;
};
int main() {
	//struct Shuman Rho;
	//strcpy(Rho.name, "hyunsoo");
	//Rho.age = 24;
	//Rho.height = 185.3;

	struct Shuman Rho = { "hyunsoo", 24, 168.9 }; // 구조체 변수의 초기화
	printf("%s %d %.1lf", Rho.name, Rho.age, Rho.height);
	
	struct Shuman fam[] = {{"hyunsoo", 24, 168.9},{"yunsoo", 20, 176.3}}; // 구조체 변수의 초기화
	printf("%s %d %.1lf", fam[0].name, fam[0].age, fam[0].height);
	printf("%s %d %.1lf", fam[1].name, fam[1].age, fam[1].height);
}