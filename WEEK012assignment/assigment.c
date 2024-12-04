//[제출]
//프로그램 내용 전체(아래의 main 함수도 포함)를 복사하여 메모장 파일(.txt)로 만든 후 첨부
//
//[내용]
//다음 함수 4개를 구현
//1. void printArray(const int list[], int size);
//size개 원소를 가지는 정수배열 list의 각 원소를 출력
//2. void ascendingSort(int list[], int size);
//size개 원소를 가지는 정수배열 list를 오름차순으로 정렬(bubble, selection 관계없음)
//3. seqSearch(const int list[], int size, int key);
//size개 원소를 가지는 정수배열 list에서 key값을 순차탐색하여
//key 값이 있으면 해당 index를, 없으면 - 1 반환
//4. binSearch(const int list[], int size, int key);
//size개 원소를 가지는(오름차순 정렬된) 정수배열 list에서 key값을 이진탐색하여
//key 값이 있으면 해당 index를, 없으면 - 1 반환
//5. 아래의 main 함수를 이용하여 구현한 함수를 테스트
#include <stdio.h>
#define SIZE 10
void printArray(const int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
}
void ascendingSort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int r = 0; r < size - 1 - i; r++) {
            if (list[r] > list[r + 1]) {
                int tmp = list[r];
                list[r] = list[r + 1];
                list[r + 1] = tmp;
            }
        }
    }
}
int seqSearch(const int list[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (key == list[i]) {
            return i;
        }
    }
    return -1;
}
int binSearch(const int list[], int size, int key) {
    int left = 0, right = size - 1, mid;
    do {
        mid = (left + right) / 2;
        if (list[mid] == key) {
            return mid;
        }
        else if (list[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    } while (left <= right);
    return -1;
}
int main() {
    int data[SIZE] = { 5, 3, 2, 7, 1, 12, 9, 14, 8, 10 }, key;

    printf("정렬 전 배열: ");
    printArray(data, SIZE);
    putchar('\n');

    key = 5;
    printf("%d의 인덱스 %d\n", key, seqSearch(data, SIZE, key));
    key = 8;
    printf("%d의 인덱스 %d\n", key, seqSearch(data, SIZE, key));
    key = 1;
    printf("%d의 인덱스 %d\n", key, seqSearch(data, SIZE, key));
    key = 11;
    printf("%d의 인덱스 %d\n", key, seqSearch(data, SIZE, key));

    ascendingSort(data, SIZE);
    printf("정렬 후 배열: ");
    printArray(data, SIZE);
    putchar('\n');

    key = 1;
    printf("%d의 인덱스 %d\n", key, binSearch(data, SIZE, key));
    key = 14;
    printf("%d의 인덱스 %d\n", key, binSearch(data, SIZE, key));
    key = 7;
    printf("%d의 인덱스 %d\n", key, binSearch(data, SIZE, key));
    key = 6;
    printf("%d의 인덱스 %d\n", key, binSearch(data, SIZE, key));
}