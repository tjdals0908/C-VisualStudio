#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//매개변수:없다   반환값:없다
void voidTest() {				//메인에서 호출해야 사용가능
	printf("void함수\n");
}

//매개변수:한개    반환값:없다
void voidTest2(int a) {
	printf("매개변수:%d\n",a);
}

void voidTest3(int a, int b) {
	printf("두수의합:%d\n",a+b);
}

//매개변수: 반지름 입력받아 ,원의 넓이를 출력 해주는 기능 (함수이름 area,매개변수의 이름 :r(double))
// call by value방식
//void area(double r) {	
//	printf("원의지름:%.2f",r*r*3.14);
//}

//매개변수:double , 반환값:double 
//double areaReturn(double r) {	//return 이 있으면 return의 그형을 viod --> double(return형)로 입력
//	double area = r * r * 3.14;
//	return area;
//}


//세 정수를 입력받아서 합을 반환 하는 함수 
//int sum(int a,int b,int c) {
//	int sum = a + b + c;
//	return sum;
//}

//두개의 정수를 매개변수로 받아서 나눈 실수값으로 반환 
//double dTest(int a, int b) {
//	return (double)a / b;
//}

//두수를 배개변수로 받아서 두 수중 큰 수를 반환하는 함수 
//int max(int a,int b) {
//	int max;
//	if (a > b) {
//		max = a;
//	}
//	else if (b > a) {
//		max = b;
//	}
//	else
//		max = 0;
//	return max;
	//간단한 방법--------------------
	//if (a > b) 
	//	return a;
	//else 
	//	return b;
}


//진입점함수 
int main() {
	//함수
	//voidTest();
//	voidTest2(10);	// 호출 하는곳 받는곳( )에 타입과 수는 같아야한다 
	//voidTest3(10,20); //(형과 갯수 일치해야함)

	//double r ;
	//printf("반지름은:");
	//scanf("%lf", &r);		//스캔 입력받을때는 %f 가 아닌 %lf 이다
	//area(r);

	//double r = 3.6;
	//double rValue = areaReturn(r); //areaReturn(r)로만 하면 출력이 안되고 
	//							   //같은형 double 형으로 맞추고 
	//printf("넓이:%.2f\n",rValue);  // printf 해서 출력 

	//int a = 10, b = 20, c = 30;
	//int sum3 = sum(a,b,c);
	//printf("세수의합:%d", sum3);

	//int a = 10, b = 3;
	//double d = dTest(a,b);
	//printf("나눈값은:%.2f",d);
	
	//int a = 30, b = 50;
	//int m = max(a, b);
	//if (m != 0)
	//	printf("큰수는:%d\n", m);
	//else
	//	printf("%d=%d\n",a,b);
	
	return 0; 
}