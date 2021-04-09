#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
	//다차원배열
	//int arr[2][3];
	//arr[0][0] = 1; 	arr[0][1] = 2;	arr[0][2] = 3;
	//arr[1][0] = 4;	arr[1][1] = 5;	arr[1][2] = 6;

	//int rsize = sizeof(arr)/sizeof(arr[0]);	//arr 총 24의 한행의 [0]12 나누면 2행이나옴
	//int csize = sizeof(arr[0]) / sizeof(int);  //arr[0] 한행12의 int의 4바이트 나누면 3이나옴
	//printf("사이즈:%d\n", rsize);
	//for (int i = 0; i <rsize; i++) { //행
	//	for (int j = 0; j < 3; j++) { //열
	//		arr[i][j] = (3 * i) + j + 1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

//실습 반 학생의 국어, 영어, 수학 점수를 입력 받아 번호대로 배열에 저장하고 반 번호 순서대로 
// 총점과 평균을 출력하는 프로그램을 작성하시오
//예시)1번 국어, 영어, 수학 : 85 76 90
//		2번 국어, 영어, 수학 : 90 75 88

//1번 합계 : 251점 평균 : 83.67
//2번 합계 : 253점 평균 : 84.33

//국어 / 수학 / 영어의 평균도 구해봅시다
	int x, y, j;
	int arr[2][3];
	int sum = 0;
	int size = sizeof(arr[0]) / sizeof(int);
	for (int i = 0; i < 2; i++) {
		printf("[%d]국어 영어 수학?:\n", i + 1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			printf("%d\n", arr[i][j]);
			sum += arr[i][j];
			printf("-------------------\n");
			printf("합계는:%d\n", sum);
			printf("평균값은: %.1f\n", (double)sum / size);
			printf("-------------------\n");

		//------------과목별 합계-------------------------------------------------
		for (int i = 0; i <2; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d",arr[j][i]);
			}
		}



		sum = 0;

		}




	}
}


	









