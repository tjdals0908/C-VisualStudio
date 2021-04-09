#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {



	//	while 반복문
	//while (1) {
	//	printf("c!!");
	//}
	//int cnt = 0;
	while (1) { // C언어는 1:true , 0은 false 
		printf("c!!!%d\n",cnt+1);
		cnt++;   //cnt += 1;   // cnt = cnt + 1;    //3가지방법
		if (cnt >= 10)
			break;
		}

	//------------------------------------
		//1~10까지의 합
		//int i = 0, sum = 0;
		//while (i < 1000) {
		//	//printf("%d\n",++i);
		//	sum += ++i;//i=i+1; sum = sum + i;
		//}
		//printf("합계:%d\n", sum);



	//합이 2000넘는 정수와 그합을 구하라
		//int i = 0;
		//int sum = 0;
		//while (sum < 2000) {
		//	printf("%d\n", i);
		//	sum += ++i;
		// }
		//printf("합은%d", sum);
		//---------------------------------

	//int x = 5;
	//for (int i=0; i<10; i++) {

	//	for (int j=10;   j > i;  j--) {
	//		printf(" ");
	//	}

	//	for (int j = 0; j < 2 * i + 1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//실습) 1부터 20까지의 수 중 3의 배수만 출력
	//while문 이용

		int no = 0;
		int sum = 0;
		//while (no < 20) {
			//--1번방법------
			//no++;
			//if (no % 3 == 0) {
			//	printf("%d ", no);
			//---2번방법 프린트가 위에 올라와야함 (숫자가 오버되기때문)---------------
			//printf("%d ", no);
			//no += 3;
			//----3번방법------------------------
			//while (1) {
			//no += 3;
			//	if (no > 20) break;		// 조건에 맞으면 브레이크 
			//	printf("%d", no);
			//}
		//int a = 0;
		//while (a<10) {
		//	a++;
		//	if (a % 2 != 0) continue;		//컨티뉴 는 조건에 만족시키는거 반환 출력이 안됨 
		//	printf("%d", a);
		//}

 }
	





