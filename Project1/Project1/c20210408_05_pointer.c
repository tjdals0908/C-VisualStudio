#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	////�����ͺ���
	//int a = 10;
	//int *p = &a;	// p���ּҴ� a���ּҰ��� ���� -> a���� p�ǰ� �ּҿ� ���� ����
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

	//float f = 5.55f; //f�� ���� �ڿ� f�ٿ��� �������� float �����ϱ����ؼ�
	//float *p4 = &f;
	//printf("f:%f, %p\n",f,&f);
	//printf("p4:");

	//������ ���� p�� �̿��ؼ� a�ǰ��� b�ǰ��� ���
	//int a = 10, b = 20;  
	//int* p;	//*p�� �ּ��̴� ���� �ƴ� 
	//p = &a;
	//printf("a:%d\n",*p);
	//p = &b;
	//printf("b:%d",*p);

	//a=10, b=20 c=30 �϶� 
	//base = 100�� �� ������ ���Ͻÿ� e�� 
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

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n",*p);			//�迭 ù����
	//printf("%d\n", *(p + 1));	//�迭 �ι�°
	//printf("%d\n", *(p + 2));	//�迭 ������ 

	//----------------------------

//	int arr[3] = { 10,20,30 };
//	int* p = arr;
//	//for (int i = 0; i < 3; i++) {
//	//	printf("%d %d %d %d\n", *(p + i),*(arr+i),arr[i]),p[i]);	//4 ���������
//	//}
//	for (int i = 0; i < 3;i++) {
//		printf("%d %d\n",*p,*arr);
//		p++;	// �� 4���� ������� p++ ����� ���� (p������ �̵�)
////		arr++; //arr++ �� �ȵȴ� �迭�� ��� 
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

//�ǽ�) ������ �迭�� 'p' 'y' 't' 'h' 'o' 'n' �� �����ϰ� 
//�����ͺ����� �̿��Ͽ� �ѱ��ڽ� ȭ�鿡 ���
	//char arr[6] = { 'p','y','t','h','o','n' };
	//char* p = arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c\n",*p);
	//	//printf("%c\n", p[i]);
	//	p++;
	//}

//�Ǻ���ġ ���� �����ͷ� �̿��ؼ� ��� 
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