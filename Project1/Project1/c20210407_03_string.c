#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> //문자열 관련 함수
int main() {
	//문자
	//char c;
	//scanf("%c", &c);
	//printf("문자:%c\n", c);

	//에코기능이 있다 
	//char c = getchar(); //문자입력 전용함수 
	//printf("입력문자:");
	//putchar(c); //문자 출력 전용함수

	//getch()함수 : 에코기능이 없다 엔터를 치면 바로 그대로 입력됨 입력된값은 출력이안됨
	//char c = getch();		
	//printf("입력문자:");
	//putchar(c);

	//char pw[5];
	//printf("password?(4자리)");
	////입력하고 별모양처리
	//for (int i=0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	////출력할때
	//for (int i = 0; i < 4; i++) {
	//	printf("%c",pw[i]);
	//}
	//pw[4] = '\0';  // 마지막 인덱스에 \0을 입력하겠다는 뜻
	//printf("\n비밀번호%s\n", pw);  //pw를 출력하면 마지막 문자열을 만나면 출력하게 되어있다

//////////문자열////////

	//char s[6] ="hello";
	//char s[6]; //배열의 이름은 주소이다
	//scanf("%s",s); // 기본형 변수면 & 주소값을 해줘야 하지만 배열은 자체가 주소이기때문 필요없다
	//printf("%s\n", s);

	//문자열 전용함수:공백처리가능
	//char name[20];
	//printf("이름은?");
	//gets(name);
	//printf("당신의 이름은 "); puts(name);

	//문자열 전용함수
	char name[10] = "hong";
	//name = "kim";
	strcpy(name, "kim");
	puts(name);
	//==============================

	//실습
	//문자열을 입력 받고 그 문자열의 값과 길이와
	//	주소값을 출력해 보시오
	//	예) 문자열을 입력하세요 : call by reference
	//	값 : call by reference
	//	길이 : 17
	//	주소 : 13630056

	char name1[];




	return 0;

}
