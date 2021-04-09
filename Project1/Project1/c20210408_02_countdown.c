#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <CoreWindow.h>


//매개변수: 카운트 다운 초
//반환값 없음 
//카운트 다운 출력하는 목적

void countDown(int c) {
	for (int i=c; i>-1; i--) {
		Sleep(1000);
		printf("%d초\n",i);
	}
	printf("---발사---");
}


int main() {
	//카운트 다운
	//5초-1초 
	//printf("카운트시작\n");
	//for(int i = 5; i>-1; i--) {
	//	Sleep(1000);		//밀리세컨드(1/1000단위)    1초가 1000이다
	//	printf("%d초\n", i);
	//}
	//printf("발사");
	int c;
	printf("초입력:");
	scanf("%d", &c);
	countDown(c);

	return 0;

}