// ���ڿ��� ������ �ּ�
// ���ڿ��� ����� �ּҰ��� �����Ѵ�
	// ��? : ���ڿ��� char�� ����Ʈ���̴�!!!!!!!!!!!-> �迭�� ������ �ּҰ�!!!
//����Ʈ�� ���ä�� ���θ� ����Ʈ�� ù ĭ�� �ΰ����� ä������ �ڴ� ������ ��
// ���ڿ��� �����Ѵٸ� strcopy

//int main() {
//	// ���ڿ��� 'char �迭'�� ǥ��, �������� '\0'���� ǥ�� ****************************************** ���ڿ��� char�� �迭 **********************************************
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
//#include <string.h>
//#include <stdio.h>
//struct Shuman {
//	char name[10];
//	int age;
//	double height;
//};
//void outhuman(struct Shuman some) {
//	printf("%s : %d��, Ű %.2f\n ", some.name, some.age, some.height);
//}
//
//int main() {
//	// ����ü(�±�) ����
//	/* struct Shuman Rho;
//	 strcpy(Rho.name, "hyunsoo");
//	 Rho.age = 24;
//	 Rho.height = 185.3;*/
//
//	struct Shuman Rho = { "hyunsoo", 24, 168.9 }, lee; // ����ü ������ �ʱ�ȭ
//	lee = Rho;
//	printf("%s %d %.1lf\n", Rho.name, Rho.age, Rho.height);
//	printf("%s %d %.1lf\n", lee.name, lee.age, lee.height);// ����ü�� ���ڿ��� �ٸ��� ������ �����ϴ�!
//	outhuman(Rho);
//
////
////	struct Shuman fam[] = { {"hyunsoo", 24, 168.9},{"yunsoo", 20, 176.3} }; // ����ü ������ �ʱ�ȭ
////	printf("%s %d %.1lf", fam[0].name, fam[0].age, fam[0].height);
////	printf("%s %d %.1lf", fam[1].name, fam[1].age, fam[1].height);
//	printf("\n%d", sizeof(struct Shuman));
//}
//�����ʹ� ���ּҸ� �޸𰡴��� Ư�� ����


//C���� ���ڿ��� 100%�� ���� char�� �迭
//437pg ����ü�� ���԰� ��ȯ***************************************************�ֿ� ����**********************************************************
// ����ü�� ������ ���� �����ϴ� -> ����ü�� ������ �����Ѵ�.....! ->  �ּҷ� ����X(�ּҸ� �������� �ʴ´�.)
	// = �����ڷ� �����ϸ� �캯�� ����ü �ɹ� ���� �º��� ����ü�� �����
	// ��, �¿캯�� ����ü�� Ÿ���� ���ƾ� ��
// �μ� ���ް��� ~~ ����ü�� �뤊��~~~

// ���μ� ���� ���� ȣ��****************************************���� �߿�************************************************

//�迭�� �ű�� ������� �ּҰ��� �Ѱ��ش�.

//����ü ���� c�� ����
// �� vector ����ü�� �μ��� �޾� x,y�� �� ��ǥ ���� ���� ����ü�� return�ϴ� addVector() �Լ��� ����


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
//	printf("���۽ð� (��, ��): ");
//	scanf("%d %d", &a.min, &a.min);
//	printf("����ð�(��, ��) : ");
//	scanf("%d %d", &b.min, &b.min);
//	c = difftime(a, b);
//	printf("�ҿ�ð� %d�� %d��", c.min, c.sec);
//}

//�̸�(���ڿ�, ũ��20),����(����) �ɹ��� ������ ����ü person ����
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
		printf("�̸� ����: ");
		scanf("%s %d", &p[i].name, &p[i].age);
	}
	for (int i = 0; i < 3; i++) {
		scanf("%s %d", &p[i].name, &p[i].age);
	}
	char name[20];
	printf("ã�� �̸�: ");
	scanf("%s", name);

	for (int i = 0; i < 3; i++) {
		if (strcmp(p[i].name, name) == 0) {
			printf("%d\n", p[i].age);
		}
	}
}