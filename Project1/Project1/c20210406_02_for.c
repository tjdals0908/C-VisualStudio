#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {

	//	int dan ;
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	for (int x = 1; x <= 9; x++) {
	//		printf("%d %d =%d\n",dan,x,dan*x);
	//	}
	//}

	//-----------------------------------
	//int dan;
	//do {
	//	printf("단수입력? (종료:0번)");
	//	scanf("%d", & dan);
	//	for (int x = 1; x <= 9; x++) {
	//		printf("%d %d =%d\n",dan,x,dan*x);
	//	}
	//} while (dan!=0);
	//	printf("종료");
	//}
	// 
//---------강사님이 한거-----------------------------
	//int dan;
	//while (1) {
	//	printf("단수는?");
	//	scanf("%d", &dan);
	//	if (dan == 0) break;
	//	for (int i = 1; i < 10; i++) {
	//		printf("%d * %d = %d\n", dan, i, dan * i);
	//	}
	//}
	//--------------------------------------------

	//이중 for
	//for (int i = 2; i < 10; i++) {
	//	printf("-[%d단]-\n",i);
	//	for (int j = 2; j < 10; j++) {
	//		printf("%d*%d=%d\n",i,j,i*j);
	//	}
	//}

	//3중 반복문-----------------------
	//for (int i=0; i<10; i++) {
	//	for (int j=0; j<10;j++) {
	//		for (int k=0; k<10; k++) {
	//			printf("%d %d %d \n",i,j,k);
	//		}
	//	}
	//}
	//-------------------------------------

	//실습1) 1부터 100까지 합
	//int sum = 0;
	//for (int i = 1; i <= 100; i++) {
	//	sum += i;
	//}
	//printf("1부터 100까지합은%d\n", sum);

	//실습2 1부터 n까지 합
	//int sum1 = 0;
	//int input;
	//printf("n 숫자를입력");
	//scanf("%d", &input);
	//for (int i = 1; i <= input; i++) {	//i는 for의 지역변수
	//	sum1 += i;
	//}
	//printf("1부터%d까지 합은%d\n", input, sum1);


	//실습3) 큰수에서 작은수 빼기-------------
	// 최대 반복 횟수는10
	//int x ,y ;
	//for (int i = 1; i <= 10; i++) {
	//	//두수입력받기
	//	//큰수에서 작은수 빼기
	//	printf("두수를 입력(0입력시 종료)");
	//	scanf("%d",&x);
	//	scanf("%d",&y);

	//	if (x > y) {
	//		printf("%d-%d=%d\n",x,y,x - y);
	//	}
	//	else if (x == 0 || y == 0) {
	//		printf("종료");
	//		break;
	//	}
	//	else
	//		printf("%d-%d=%d\n",y,x,y-x);
	//}
	// 
	//-실습3)------강사님이 한거-----------------------------------------
		//실습)큰수에서 작은수 빼기
	//int a, b;
	//for (int i = 0; i < 10; i++) {
	//	//두수를 입력받기
	//	printf("두수는?");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	//큰수에서 작은수 빼고 출력
	//	if (a > b) printf("절대값:%d\n", a - b);
	//	else printf("절대값:%d\n", b - a);
	//}
	//---------------------------
	//별모양1
	//printf("---[별찍기1]---\n\n");
	//for (int i = 1; i<=7; i++) {
	//	for (int j = 1; j<=i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//
	////별모양2
	//printf("---[별찍기2]---\n\n");
	//for (int i = 1; i<=7; i++) {
	//	for (int j = 7; j>=i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//
	//printf("---[별찍기3]---\n\n");

	////별모양3
	//for (int x = 1; x <= 7; x++) {
	//	for (int j = 7; j >= x; j--) {
	//		printf(" ");
	//	}
	//	for (int i = 1; i <= x; i++) {
	//		printf("*");
	//	}
	//	for (int i = 2; i <= x; i++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 1; i <=8; i++) {
	//	for (int j = 1; j < 16; j++) {
	//		printf("*");
	//	}
	//	for (int j = 11; j > i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//for (int i = 1; i <= 8; i++) {
	//	for (int j = 9; j>i; j--) {
	//		printf("*");
	//	}
	//	for (int j = 0; j < i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 2; j <= i; j++) {
	//		printf(" ");
	//	}
	//	for (int j = 9; j >= i; j--) {
	//		printf("*");
	//	}
	//	for (int j=1; j<i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//실습1)----------------------------------------
	//두 개의 숫자를 입력 받아서 두 수 사이의 정수
	//의 합을 계산하는 프로그램을 작성하시오
	// 예시) //시작 정수, 마지막 정수 ? 5 10
	//5부터 10까지의 합계는 45

	//int x,y;
	//do { 
	//int sum = 0;
	//	printf("정수를 입력해주세요(0입력시 종료)");
	//	scanf("%d %d", &x,&y);
	//
	//	if (x > y) {
	//		for (y; y<=x; y++)
	//		sum += y;
	//		printf("n에서n까지 합은 %d \n",sum);
	//	}
	//	else if (y > x) {
	//		for (x; x<= y; x++)
	//		sum += x;
	//		printf("n에서n까지 합은 %d \n",sum);
	//	}
	//	else
	//		printf("");

	//} while (x != 0 || y!=0); {
	//	printf("종료");
	//}


//실습-------------------------------------------------------
//n!(factorial:팩토리얼) 구하기
//n!= 1 * 2 * ….*n;
//예시)
//정수를 입력하세요 : 7
//1부터 7까지 곱한 값은 5040

//int no=7;
//int sum = 1;	//곱한값 누적변수 0이아니고 1로 해야된다 
//	for (int i=1; i<=no; i++) {
//		sum *= i;
//	}
//	printf("%d",sum);
//-----------------------------------------------

//실습) 1부터 10까지의 정수에서 두 수를 골라 두
//수의 합이 10이 되는 두수를 구하는 프로그램
//예시) (1, 9) (2, 8) (3, 7) (4, 6) (5, 5)

//printf("합이 10 이 되는 두수:\n");
//	for (int i=1; i<10; i++) {
//		for (int j=1; j<=i; j++) {
//			if (i+j==10) {
//				printf("%d,%d입니다\n",i,j);
//			}
//		}
//	}

//----------------강사님이한거--------------------------
	//char no;
	//scanf("%c", &no);
	//printf("%d\n", no);
	//if (no == 10) { //엔터를 입력했다면 
	//	printf("ok");
	//}
//----------------------------------

//실습)메뉴고르기-----------------------------------
//char a;
//do {
//	printf("메뉴를 고르세요.\n");
//	printf("1.짜장\n2.탕수육\n3.뚝불\n4.제육\n5.연어초밥\n6.모둠초밥\nq:종료\n음식번호:");
//	scanf("%c", &a);
//	//printf("%c %d\n",a, a);
//	getchar(); //엔터처리
//
//	switch (a) {	// switch(a)값은 스캔 값이다 
//	case '1':		// 숫자를 char값으로 1 > '1'로 입력
//	case '2':
//		printf("중식코너\n\n"); break;
//	case '3':
//	case '4':
//		printf("한식코너\n\n"); break;
//	case '5':
//	case '6':
//		printf("일식코너\n\n"); break;
//	case 'q':
//		printf("프로그램을 종료\n\n"); break;
//	default:
//		printf("잘못입력하셨습니다.\n\n"); break;
//	}
//} while (a != 'q');
//------------------------------------------------------------













return 0;
}







