#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//�Ű�����:����   ��ȯ��:����
void voidTest() {				//���ο��� ȣ���ؾ� ��밡��
	printf("void�Լ�\n");
}

//�Ű�����:�Ѱ�    ��ȯ��:����
void voidTest2(int a) {
	printf("�Ű�����:%d\n",a);
}

void voidTest3(int a, int b) {
	printf("�μ�����:%d\n",a+b);
}

//�Ű�����: ������ �Է¹޾� ,���� ���̸� ��� ���ִ� ��� (�Լ��̸� area,�Ű������� �̸� :r(double))
// call by value���
//void area(double r) {	
//	printf("��������:%.2f",r*r*3.14);
//}

//�Ű�����:double , ��ȯ��:double 
//double areaReturn(double r) {	//return �� ������ return�� ������ viod --> double(return��)�� �Է�
//	double area = r * r * 3.14;
//	return area;
//}


//�� ������ �Է¹޾Ƽ� ���� ��ȯ �ϴ� �Լ� 
//int sum(int a,int b,int c) {
//	int sum = a + b + c;
//	return sum;
//}

//�ΰ��� ������ �Ű������� �޾Ƽ� ���� �Ǽ������� ��ȯ 
//double dTest(int a, int b) {
//	return (double)a / b;
//}

//�μ��� �谳������ �޾Ƽ� �� ���� ū ���� ��ȯ�ϴ� �Լ� 
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
	//������ ���--------------------
	//if (a > b) 
	//	return a;
	//else 
	//	return b;
}


//�������Լ� 
int main() {
	//�Լ�
	//voidTest();
//	voidTest2(10);	// ȣ�� �ϴ°� �޴°�( )�� Ÿ�԰� ���� ���ƾ��Ѵ� 
	//voidTest3(10,20); //(���� ���� ��ġ�ؾ���)

	//double r ;
	//printf("��������:");
	//scanf("%lf", &r);		//��ĵ �Է¹������� %f �� �ƴ� %lf �̴�
	//area(r);

	//double r = 3.6;
	//double rValue = areaReturn(r); //areaReturn(r)�θ� �ϸ� ����� �ȵǰ� 
	//							   //������ double ������ ���߰� 
	//printf("����:%.2f\n",rValue);  // printf �ؼ� ��� 

	//int a = 10, b = 20, c = 30;
	//int sum3 = sum(a,b,c);
	//printf("��������:%d", sum3);

	//int a = 10, b = 3;
	//double d = dTest(a,b);
	//printf("��������:%.2f",d);
	
	//int a = 30, b = 50;
	//int m = max(a, b);
	//if (m != 0)
	//	printf("ū����:%d\n", m);
	//else
	//	printf("%d=%d\n",a,b);
	
	return 0; 
}