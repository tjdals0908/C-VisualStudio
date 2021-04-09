#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define Len 5	//Len은 5로 설정
int main() {
	//배열: array
	//arr(변수명)은 값 주소를 갖음 
	//예) 100번지 
	
	//int arr[3];
	//arr[0] = 10, arr[1]=20; arr[2] = 30;
	//printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	//printf("%p\n",arr);
	//printf("%p %d\n", arr, sizeof(arr));
	
	//반복문을 이용해서 초기화

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}

	////반복문을 이용해서 출력
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n",arr[i]);
	//	}

	//return 0;


//실습)-------------------------------
	//double arr[3]={1.1,2.1,3.1};
	//double arr[5];
	////배열의 크기 구하기 
	//int size = sizeof(arr); //24개 나옴 하나값이 8바이트(double형은 8바이트)
	//printf("%d\n",size);

	////반복문을 이용해서 초기화
	//for (int i = 0; i<size; i++) {
	//	arr[i] = i+1.1;
	//}
	////arr[0] = 1.1;
	//	//중 괄호 로 이용한 배열
	//for (int i = 0; i<size; i++) {
	//	printf("%.1f\n",arr[i]);
	//}

	//--------------------------------
	//문자형 배열
	//char arr[6] = { 'p','y','t','h','o','n'}; //[] 바이트수 생략가능 [6]이지만 []생략가능
	//int size = sizeof(arr); //그형에 맞게 /sizeof(char) 나눠주느게 좋다 why?그형이 몇바이트인지 맞게 계산해줌
	//int size = sizeof(arr) / sizeof(char); //추천 

	//for (int i = 0; i < size; i++) {
	//	printf("%c",arr[i]);
	//	}
//-------------------------------

	//배열값 의 합
	//int arr[] = {4,5,9,12,35,25,1,2};
	//int size = sizeof(arr)/sizeof(int);
	//int sum = 0;
	//for (int i = 0; i<size; i++) {
	//	sum += arr[i];
	//}
	//printf("총합은%d\n", sum);
	//-----------------------------------

	//배열의 합 입력받기
	//int input;
	//int arr[] = {input};
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//do {
	//pirntf("숫자를입력해주세요");
	//scanf("%d", &input);
	//for (int i = 0; i < size; i++) {

	//	}
	//} while (input != 0);
	//printf(" 종료 총합계는%d입니다 ",sum);


//------강사님이 한거----------------
		//배열값의 합
	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임시(메모리할당시)

//======참고=========================
	//int a = 5;  
	//define에 정의된 매크로 상수 : 컴파일 되기전에 대체
	//int arr[a];불가능  ---> int arr[Len];하면 가능
	//
	//const int a = 5; //상수 :변경이 불가능 (상수도 런타임시 발생)
   //===================================

	//int arr[5], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//int x = 1;
	////입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	//printf("\n");
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("입력한값[%.0f]=%d, 주소: %p\n",x+1,arr[i],&arr[i]);
	//}
	////입력한 값을 순서대로 입력받아 합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계:%d\n", sum);
	//---------------------------------------------

//실습=========================================  
	//반학생의 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 출력하느 프로그램
	// 예) 1번 점수 90 2번 88
	//1번은 90점 2번은 88점 
	//추가 1합계와 평균 출력
	//원하는 학생번호 입력하면 해당학생 점수출력

	//int arr[5];
	//int size = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//int choise = 1;
	//for (int i = 0; i < size; i++) {
	//	printf("점수를 입력\n");
	//	scanf("%d",&arr[i]);
	//	printf("[%d]번학생의 점수는\n: ", choise++);
	//	printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("합계는%d\n",sum);
	//printf("평균값은%.1f\n",(double)sum/size);


//실습)---강사님이 한거------------------------------
//	int score[3], sum = 0;
//	int size = sizeof(score) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		printf("%d번 점수는?", i + 1);
//		scanf("%d", &score[i]);
//	}
//	printf("----------------\n");
//	for (int i = 0; i < size; i++) {
//		printf("%d번 점수는 %d\n", i + 1, score[i]);
//		sum += score[i];
//	}
//	printf("----------------\n");
//	printf("합계:%d\n", sum);
//	printf("평균:%.2f\n", (double)sum / size);
////-do while로 사용---검색------------------------------------------
//	int no;
//	char quit;
//	do {
//		printf("검색번호?");
//		scanf("%d", &no);
//		getchar(); //엔터처리
//		//잘못된 번호 처리
//		if (no < 1 || no>3) {	// 
//			printf("잘못된 번호입니다\n");
//			continue; //while 로 다시 돌아감 (계속진행)
//		}
//		printf("점수는 %d\n", score[no - 1]);
//		printf("*****************\n");
//		printf("종료(q)");
//		scanf("%c", &quit);
//		if (quit == 'q')break;
//
//	} while (quit != 'q');
//-----------------------------------------------------------

//검색-----while문 사용---------------------
	//int score[3] = { 20,50,30 };
	//int no;
	//char quit;
	//while (1)
	//{
	//	printf("검색번호?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no<1 || no>3) {	// 
	//		printf("잘못된 번호입니다\n");
	//		continue; //while 로 다시 돌아감 (계속진행)
	//	}
	//	printf("점수는 %d\n", score[no - 1]);
	//	printf("*****************\n");
	//	printf("종료(q)");
	//	scanf("%c",&quit);
	//	if (quit == 'q')break;
	//}	
//실습=========================================  
	//반학생의 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 출력하느 프로그램
	// 예) 1번 점수 90 2번 88
	//1번은 90점 2번은 88점 
	//추가 1합계와 평균 출력
	//원하는 학생번호 입력하면 해당학생 점수출력
	//int sum = 0;
	//int score[5];
	//int size = sizeof(score) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]점수를입력:",i+1);
	//	scanf("%d",&score[i]);
	//	printf("%d\n",score[i]);
	//	sum += score[i];
	//}
	//printf("합계:%d이고 평균은%.1f이다\n",sum,(double)sum/size);

	////검색기능

	//int choise;
	//char quit;
	//do {
	//	printf("학생번호입력:\n");
	//	scanf("%d",&choise);
	//	printf("%d점입니다\n", score[choise-1]);

	//	if (choise < 1 || choise>5) {
	//		printf("잘못된 번호입니다\n");
	//		continue; //while 로 다시 돌아감 (계속진행)
	//	}


	//	scanf("%c", &quit);
	//	getchar();

	//} while(quit!='q');


	//피보나치의 수열 구하기 
	// 0 1 	1 2  3 5  8 13	 21
	int fibo[20];
	//int sum= 0;
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		//if (fibo[i] < 20) {
		//	printf("%d\n", fibo[i]);
	}
	for (int j = 0; j < 20; j++) {
			printf("%d\n",fibo[j]);
	}

//---------------------------------------

	//int fibo[20];
	//fibo[0] = 0; fibo[1] = 1;
	//for (int i = 2; i < 20; i++) {
	//	fibo[i] = fibo[i - 2] + fibo[i - 1];
	//}

	////출력
	//for (int i = 0; i < 20; i++) {
	//	printf("%d\n", fibo[i]);
	//}



}


	

	
