# include <stdio.h>

int main() {

	printf("키를 누르세요: ");
	char input = getche();

	/* 혹은
	   char input;
	   input=getche();
	*/
	if ((input >= 'A') && (input <= 'Z'))
		puts(" 대문자");
	else if ((input >= 'a') && (input <= 'b'))
		puts(" 소문자");
	else
		puts(" 기타문자");

}