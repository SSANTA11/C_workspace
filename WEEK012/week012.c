#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//*******************�迭�̸��� �ּ�********************
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
//�����Ʈ -> ���� ū ���� �� �ε��� ��ġ���� �� �� �ֽ�ȭ�Ͽ� ���Ĺ����� ����
//void selectionSort(int list[], int size) { // list[]�� *list ��� �����ϴ�!
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
/*�����Ǽ�Ʈ->�ε��� 0 ��ġ���� ������ �ε��� ��ġ������ ��� ���ϴµ�, �켱 �ε��� 0�� �������� ���������� �� ��Ҹ� ���Ͽ� ������ �ε������� �ּڰ��� �ֽ�ȭ�ϰ�,
���������� �ּڰ��� �ش�Ǵ� �ε����� �ε��� 0 ��ġ�� ��ҿ� �ٲٰ� ���� �ε����� 1���� �ٽ� �����Ѵ�.*/
//int main() {
//	int i, k, data[10] = { 16,7,9,1,3,0,45,2,7 };
//	//bubbleSort(data, 10);
//	selectionSort(data, 10);
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", data[i]);
//	}
//}


// �Ű������� �μ��� �����Ͽ� ������. 
// �̶� �μ��� �������� ��쿡�� ������ �����Ͽ� ������.
// �׷��� ����Ʈ�� ���, �迭�̸��� �ּҰ��̱� ������, �ּҰ��� �����Ͽ�, �Ű����� �ڸ��� ���μ��� ����ν� �Էµȴ�.
// �ᱹ int main ������ ����Ʈ�� ���� �Լ� ���ǿ��� ����� �ּҰ��� ���� �ٺ�(?)�� ����Ʈ�� ����ȴ�.
// �ᱹ int main�� ����Ʈ ���� ǥ��� �巯�� �Ͱ� �ٸ�, ����� ���� ���ϰ� �ִ�.
// Ŭ�а� û�λ��ξ���, �ּҿ� û�λ��ξ��ڸ� �������!

// �Լ�ȣ���� ��輱���� ������ �ݵ�� Ŭ���� �Ѿ��, ������ ������ ����
// ������ �ּҸ� �ѱ�!!!!
//
//int bs(int *list, int size, int key) {
//	int index = -1;
//	int low = 0, high = size, middle;
//	while (low <= high) {
//		middle = (low + high) / 2;
//		if (key == list[middle]) { //ã��
//			index = middle; //ã�� ��ġ(÷��) ���
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
//	printf("ã�� �� �Է�: ");
//	scanf("%d", &key);
//	int index = bs(list, 10, key);
//
//	if (index != -1) {
//		printf("ã�� ���� �ε��� = %d\n", index);
//	}
//	else {
//		printf("ã�� ���� �����ϴ�.\n");
//	}
//
//}
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------- //
	//*******************�迭�̸��� �ּ�********************//
/* scanf ���� string(���ڿ�)�� & �ʿ���� -> �ֳ��ϸ� �迭�̸��� �ּ�
���ڴ� ���Կ���(=) ����!!
���ڿ��� ���Կ��� �Ұ�, �� ���Ұ��� �����ؾ� �� -> �ֳ��ϸ� �ּҰ������� ���Կ���Ұ�-> �׷��Ƿ� strcpy�� Ȱ���Ѵ�!
//*/
//#include <string.h>
//int main() {
//	// ���ڿ��� char �迭�� ǥ��, �������� '\0'���� ǥ��
//	char str1[100] = "abcd", str2[100];
//	char ch; 
//	ch='a'; 
//	
//	strcpy(str2, str1);
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	// ���ڿ��� ���� ��(�� ���� ����) �� strlen �Լ� ���
//	printf("%s�� ���� �� %d\n", str2, strlen(str2));
//	// ���ڿ� �񱳴� strcmp�Լ� ���(��� ���� str1- str2��� ����)
//	if (strcmp(str1, str2) < 0)
//		printf("% s < % s\n", str1, str2);
//	else if (strcmp(str1, str2)>0)
//		printf("% s > % s\n", str1, str2);
//	else
//		printf("% s == % s\n", str1, str2);
//
//	printf("�迭�� �����ϴ� ����Ʈ �� = %d, �迭 ������ �� =%d", sizeof(str1), sizeof(str1) / sizeof(str1[0]));
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

	struct Shuman Rho = { "hyunsoo", 24, 168.9 }; // ����ü ������ �ʱ�ȭ
	printf("%s %d %.1lf", Rho.name, Rho.age, Rho.height);
	
	struct Shuman fam[] = {{"hyunsoo", 24, 168.9},{"yunsoo", 20, 176.3}}; // ����ü ������ �ʱ�ȭ
	printf("%s %d %.1lf", fam[0].name, fam[0].age, fam[0].height);
	printf("%s %d %.1lf", fam[1].name, fam[1].age, fam[1].height);
}