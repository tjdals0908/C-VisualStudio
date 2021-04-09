#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//전역변수:프로그램이 시작시 생성, 프로그램 종료시 소멸
//전역변수의 무분별한 선언은 신중, 프로그램 복잡도 증가 된다 
//전역변수는 
int g ;
int a;
//int r = 10;

void test() {
	printf("%d %d",a,g);
	int r = 20;
	printf("%d",r*r);
}

int main() {
	//전역변수와 지역변수 
	//지역변수: 함수가 시작될때 생성,함수가 종료되면 소멸 
	//int a ;
	
	//printf("%d", a);
	//printf("%d",g);
	test();

}