#include<stdio.h>

int main() {
	////정수형 변수명을 선언
	//int a;
	////초기화 
	//a = 10;
	//printf("%d\n",a);
	
	//실수형 변수명 선언
	//float f;	// 4byte
	//double d;	// 8byte

	//f = 3.144141411414; // 초기화 
	//d = 3.141141441414; // 초기화
	//printf("%.15f\n",f);
	//printf("%.15f\n", d);


	//문자형 

	//char c ='A'; //선언과 동시에 초기화 
	//
	//printf("문자는 %c\n",c,c);


	//데이터형의 바이트수 
	
	//int a = 100;
	//printf("정수형:%d\n", sizeof(a));


	//float f = 3.14;
	//double d = 3.14;

	//printf("float사이즈는 %d\n", sizeof(f));
	//printf("double사이즈는 %d\n", sizeof(d));

	//char c = 'a';
	//printf("char사이즈는 %d\n", sizeof(c));

	
	
	//문자열
	//배열의 이름은 주소를 가지고 있다
	//배열의 크기는 문자열의 크기 +1 
	//선언과 동시에 초기화 시에는 배열의 크기 생략 가능
	


	char c[6]="hello";	//hello 는 5숫자이지만 c[6]은 +1를 해줘야 한다 마지막은 끝에 0이라믄 문자열의 끝을 입력해줘야되기때문
						// null문자를 마지막에 추가가된다 
	//c = "hello"; //상수기때문에 불가

	//printf("문자열:%s 크기 %d\n", c,sizeof(c));	

	//printf("%c\n",c[0]);

	//printf("%c\n",c[5]); //5번은 null로 찍힘 


	for (int x=1;x<sizeof(c);x++) {
		printf(x);
	}
	

	return 0;
}