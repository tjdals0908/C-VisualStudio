#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위해서 
								// 메크로 정의 
#include <stdio.h>

int main(void) {
	//int a; //입력함수
	//printf("정수는?");
	//scanf("%d",&a); //변수 a의 주속  &는 주소를 의미한다 

	//printf("입력한 값:%d 주속:%p \n",a,&a);
	//return 0;
	//-----------------------------------------------------------
	
	//실수형 입력받기 
	//float f;
	//double d;
	//printf("float 실수는?");
	//scanf("%f", &f);

	//printf("double 실수는?");
	//scanf("%lf", &d);

	//	printf("입력한값\n %f 주소는: %p\n %f 주소는: %p\n",f, &f, d, &d);
	
	//문자형 입력받기
		//char c;
		//printf("char(문자) 는?");
		//scanf("%c", &c);

		//printf("입력한값은 %c",c);


		//실습) 두정수를 입력받아서 합계를 추력
	//int a, b;
		
	//printf("첫번째 수를입력하세요");
	//scanf("%d", &a);

	//printf("두번째 수를입력하세요");
	//scanf("%d", &b);
	//printf("두수의합은 %d", a + b);
	//------강사님이 한거----------------------------------------

//	printf("두수를 입력 해주세요");
//	scanf("%d", &a, "%d", &b);*/	//<<이렇게 하지말고
//	scanf("%d%d", &a,&b);		//<< "%d%d로 해야한다 (입력할때 공백을 띄우나 엔터값으로 2번째 입력값으로 받아들인다
//
//	printf("두수의 합은 %d", a+b);

	//실습)오늘의 날짜 (년,월,일) 입력받아서 출력하기

	//int year, month, day;

	//printf("yyyy-mm-dd을 입력해주세요");
	//scanf("%d-%d-%d", &year, &month, &day);

	//printf("%d년%d월%d일 입니다\n", year, month, day);

	//두개의 정수를 입력받아 산술연산을 구해보시오
	//예) 입력 받은 값 20 ,3

	//int a = 20;
	//int b = 3;
	//scanf("두수는 ");
	//scnf("%d %d", &a, &b);
	// 
	//printf("a+b의 값은: %d\n", a + b);
	//printf("a-b의 값은: %d\n", a - b);
	//printf("a*b의 값은: %d\n", a * b);
	//printf("a/b의 값은: %.2f\n", (double)a/b );


	//엔터 처리하기 위한 예제 --------------------
	//int a, b;
	//char sign;
	//printf("frist ?");  //10 + 20;
	//scanf("%d", &a);

	//printf("second ?");
	//scanf("%d", &b);		

	//getchar(); //한문자를 읽어서 반환하는 함수 (엔터를 처리하기위한 목적)

	//printf("sign 은?");
	//scanf("%c", &sign);		// 이전에 엔터값을 실행한게 인식 그래서 엔터값을 없애야함 
	//
	////scanf("%d %c %d", &a, &sing, &b);

	//printf("%d %c %d\n", a, sign, b);
	//-----------------------------------------

	//실습) 물건 구입후 거스름돈을 계산하여 출력하는 프로그램 완성하시오
	// 단, 물건값과 지불한 돈은 입력받는다

	//int pay ;
	//int amount ;

	//printf("지불한 금액을 입력해주세요");
	//scanf("%d",&pay);
	//printf("물건값을 입력해주세요");
	//scanf("%d", &amount);

	//pay > amount  ? printf("거스름돈은 %d",pay-amount) :		
	//amount>pay ? printf("돈이 부족합니다 %d",amount-pay): printf("정산 완료\n");
	//------------------------------------------------------------------------
	
	//국어 영어 수학 점수를 입력받아 합계와 평균을 구하는 프로그램을 완성하시오

/*	int a, b, c;
		a = 90;
		b = 90;
		c = 80;
		int  sum = a + b + c;
		printf("3과목의 합계는 %d",sum);
		printf("3과목의 평균값은 %.2f", (double)sum / 3.);*///(double)추가해도 되고 3. 소숫점 해줘되 된다 

		//---------강사님이 한거--------------------------------------------------
		//int kor, eng, math;
		//printf("3과목 점수 입력");
		//scanf("%d %d %d", &kor, &eng, &math);

		//int sum = kor + eng + math;
		//printf("합계는:%d\n",sum);
		//printf("평균은:%.2f\n", sum/3.);
		//--------------------------------------------------------
	
	//rgb 값 만들기 (unsinged int) , (일반 int +,- 포함하면 ,unsinged int은 +값만 포함 )
	//	int	r, g, b;
	//printf("red?"); scanf("%d",&r);
	//printf("green"); scanf("%d",&g);
	//printf("blue?"); scanf("%d",&b);
	//unsigned int rgb = r<<16 | g<<8 |b;
	//printf("RGB: %0X\n", rgb);	//0x는 16진수로 출력 
	
	//----------------------------------------------------------------





	}
