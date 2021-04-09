#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//매개변수로 정수를 입력받아 누적하는 함수 

//	int sum = 0;	//0은 입력안해도됨 전역변수는 0으로 자동초기화
//int userSum(int a) {
//	static int sum = 0;
//	sum = sum + a;
//	return sum;
//}

//매개변수 : 없다 
//리턴값 : 정수 이함수를 실행한 횟수 
//함수이름: countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//printf("누적:%d\n", userSum(10));
	//printf("누적:%d\n", userSum(20));

	//반복문을 이용해서 10번실행
	for (int i = 1; i < 10 + 1; i++) {
		printf("%d\n",countTest());
	}
}