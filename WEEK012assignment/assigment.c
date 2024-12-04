//[����]
//���α׷� ���� ��ü(�Ʒ��� main �Լ��� ����)�� �����Ͽ� �޸��� ����(.txt)�� ���� �� ÷��
//
//[����]
//���� �Լ� 4���� ����
//1. void printArray(const int list[], int size);
//size�� ���Ҹ� ������ �����迭 list�� �� ���Ҹ� ���
//2. void ascendingSort(int list[], int size);
//size�� ���Ҹ� ������ �����迭 list�� ������������ ����(bubble, selection �������)
//3. seqSearch(const int list[], int size, int key);
//size�� ���Ҹ� ������ �����迭 list���� key���� ����Ž���Ͽ�
//key ���� ������ �ش� index��, ������ - 1 ��ȯ
//4. binSearch(const int list[], int size, int key);
//size�� ���Ҹ� ������(�������� ���ĵ�) �����迭 list���� key���� ����Ž���Ͽ�
//key ���� ������ �ش� index��, ������ - 1 ��ȯ
//5. �Ʒ��� main �Լ��� �̿��Ͽ� ������ �Լ��� �׽�Ʈ
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

    printf("���� �� �迭: ");
    printArray(data, SIZE);
    putchar('\n');

    key = 5;
    printf("%d�� �ε��� %d\n", key, seqSearch(data, SIZE, key));
    key = 8;
    printf("%d�� �ε��� %d\n", key, seqSearch(data, SIZE, key));
    key = 1;
    printf("%d�� �ε��� %d\n", key, seqSearch(data, SIZE, key));
    key = 11;
    printf("%d�� �ε��� %d\n", key, seqSearch(data, SIZE, key));

    ascendingSort(data, SIZE);
    printf("���� �� �迭: ");
    printArray(data, SIZE);
    putchar('\n');

    key = 1;
    printf("%d�� �ε��� %d\n", key, binSearch(data, SIZE, key));
    key = 14;
    printf("%d�� �ε��� %d\n", key, binSearch(data, SIZE, key));
    key = 7;
    printf("%d�� �ε��� %d\n", key, binSearch(data, SIZE, key));
    key = 6;
    printf("%d�� �ε��� %d\n", key, binSearch(data, SIZE, key));
}