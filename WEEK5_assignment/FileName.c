# include <stdio.h>

int main() {

	printf("Ű�� ��������: ");
	char input = getche();

	/* Ȥ��
	   char input;
	   input=getche();
	*/
	if ((input >= 'A') && (input <= 'Z'))
		puts(" �빮��");
	else if ((input >= 'a') && (input <= 'b'))
		puts(" �ҹ���");
	else
		puts(" ��Ÿ����");

}