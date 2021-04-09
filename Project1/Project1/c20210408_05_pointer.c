#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	////포인터변수
	//int a = 10;
	//int *p = &a;	// p의주소는 a의주소값을 저장 -> a값과 p의값 주소와 값이 같다
	//printf("a:%d, %p\n", a, &a);
	//printf("p:%p, %d\n", p, *p);
	//printf("------------\n");

	//char c = '%';
	//char *p2 = &c;
	//printf("c:%c, %p2\n",c,&c);
	//printf("p2:%p, %d\n",p2,*p2);
	//printf("------------\n");

	//double d = 3.14;
	//double *p3 = &d;
	//printf("d:%f, %p\n", d, &d);
	//printf("p3:%p, %d\n", p3, *p3);
	//printf("------------\n");

	//float f = 5.55f; //f는 숫자 뒤에 f붙여줌 더블인지 float 구분하기위해서
	//float *p4 = &f;
	//printf("f:%f, %p\n",f,&f);
	//printf("p4:");

	//포인터 변수 p를 이용해서 a의값과 b의값을 출력
	//int a = 10, b = 20;  
	//int* p;	//*p는 주소이다 값이 아님 
	//p = &a;
	//printf("a:%d\n",*p);
	//p = &b;
	//printf("b:%d",*p);

	//a=10, b=20 c=30 일때 
	//base = 100을 각 변수해 더하시오 e단 
	//int a = 10, b = 20, c = 30, base = 100;
	//int *p;
	//p = &a;
	//*p += base;
	//printf("a:%d\n",*p);
	//p = &b;
	//*p += base;
	//printf("b:%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("c:%d\n", *p);

	//배열의 포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n",*p);			//배열 첫번재
	//printf("%d\n", *(p + 1));	//배열 두번째
	//printf("%d\n", *(p + 2));	//배열 세번재 

	//----------------------------

//	int arr[3] = { 10,20,30 };
//	int* p = arr;
//	//for (int i = 0; i < 3; i++) {
//	//	printf("%d %d %d %d\n", *(p + i),*(arr+i),arr[i]),p[i]);	//4 방법이있음
//	//}
//	for (int i = 0; i < 3;i++) {
//		printf("%d %d\n",*p,*arr);
//		p++;	// 위 4가지 방법보다 p++ 방법이 좋다 (p번지가 이동)
////		arr++; //arr++ 은 안된다 배열은 상수 
//	}
	//-------------------------
	//------------------------------
	//int arr[10] ;
	//int* p = arr;
	//for (int i = 0; i>10; i++) {
	//	
	//	arr[i] = i;
	//	printf("%d",arr[i]);
	//}
	//--------------------------------

//실습) 문자형 배열에 'p' 'y' 't' 'h' 'o' 'n' 을 저장하고 
//포인터변수를 이용하여 한글자식 화면에 출력
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n",*p);
	//	//printf("%c\n", p[i]);
	//	p++;
	//}

//피보나치 수열 포인터로 이용해서 출력 
	int fibo[20];
	fibo[0] = 0, fibo[1] = 1;	int* p = fibo;

	for (int i = 2; i<20; i++) {
		p[i] = p[i - 1] + p[i - 2];
		if (p[i]<20) {
			printf("%d\n",p[i]);
		}
	}
	return 0;
}