#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define Len 5	//Len�� 5�� ����
int main() {
	//�迭: array
	//arr(������)�� �� �ּҸ� ���� 
	//��) 100���� 
	
	//int arr[3];
	//arr[0] = 10, arr[1]=20; arr[2] = 30;
	//printf("%d %d %d\n",arr[0],arr[1],arr[2]);
	//printf("%p\n",arr);
	//printf("%p %d\n", arr, sizeof(arr));
	
	//�ݺ����� �̿��ؼ� �ʱ�ȭ

	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}

	////�ݺ����� �̿��ؼ� ���
	//for (int i = 0; i < 3; i++) {
	//	printf("%d\n",arr[i]);
	//	}

	//return 0;


//�ǽ�)-------------------------------
	//double arr[3]={1.1,2.1,3.1};
	//double arr[5];
	////�迭�� ũ�� ���ϱ� 
	//int size = sizeof(arr); //24�� ���� �ϳ����� 8����Ʈ(double���� 8����Ʈ)
	//printf("%d\n",size);

	////�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i<size; i++) {
	//	arr[i] = i+1.1;
	//}
	////arr[0] = 1.1;
	//	//�� ��ȣ �� �̿��� �迭
	//for (int i = 0; i<size; i++) {
	//	printf("%.1f\n",arr[i]);
	//}

	//--------------------------------
	//������ �迭
	//char arr[6] = { 'p','y','t','h','o','n'}; //[] ����Ʈ�� �������� [6]������ []��������
	//int size = sizeof(arr); //������ �°� /sizeof(char) �����ִ��� ���� why?������ �����Ʈ���� �°� �������
	//int size = sizeof(arr) / sizeof(char); //��õ 

	//for (int i = 0; i < size; i++) {
	//	printf("%c",arr[i]);
	//	}
//-------------------------------

	//�迭�� �� ��
	//int arr[] = {4,5,9,12,35,25,1,2};
	//int size = sizeof(arr)/sizeof(int);
	//int sum = 0;
	//for (int i = 0; i<size; i++) {
	//	sum += arr[i];
	//}
	//printf("������%d\n", sum);
	//-----------------------------------

	//�迭�� �� �Է¹ޱ�
	//int input;
	//int arr[] = {input};
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//do {
	//pirntf("���ڸ��Է����ּ���");
	//scanf("%d", &input);
	//for (int i = 0; i < size; i++) {

	//	}
	//} while (input != 0);
	//printf(" ���� ���հ��%d�Դϴ� ",sum);


//------������� �Ѱ�----------------
		//�迭���� ��
	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�(�޸��Ҵ��)

//======����=========================
	//int a = 5;  
	//define�� ���ǵ� ��ũ�� ��� : ������ �Ǳ����� ��ü
	//int arr[a];�Ұ���  ---> int arr[Len];�ϸ� ����
	//
	//const int a = 5; //��� :������ �Ұ��� (����� ��Ÿ�ӽ� �߻�)
   //===================================

	//int arr[5], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//int x = 1;
	////�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	//printf("\n");
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("�Է��Ѱ�[%.0f]=%d, �ּ�: %p\n",x+1,arr[i],&arr[i]);
	//}
	////�Է��� ���� ������� �Է¹޾� �հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ�:%d\n", sum);
	//---------------------------------------------

//�ǽ�=========================================  
	//���л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ����ϴ� ���α׷�
	// ��) 1�� ���� 90 2�� 88
	//1���� 90�� 2���� 88�� 
	//�߰� 1�հ�� ��� ���
	//���ϴ� �л���ȣ �Է��ϸ� �ش��л� �������

	//int arr[5];
	//int size = sizeof(arr) / sizeof(int);
	//int sum = 0;
	//int choise = 1;
	//for (int i = 0; i < size; i++) {
	//	printf("������ �Է�\n");
	//	scanf("%d",&arr[i]);
	//	printf("[%d]���л��� ������\n: ", choise++);
	//	printf("%d\n", arr[i]);
	//	sum += arr[i];
	//}
	//printf("�հ��%d\n",sum);
	//printf("��հ���%.1f\n",(double)sum/size);


//�ǽ�)---������� �Ѱ�------------------------------
//	int score[3], sum = 0;
//	int size = sizeof(score) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		printf("%d�� ������?", i + 1);
//		scanf("%d", &score[i]);
//	}
//	printf("----------------\n");
//	for (int i = 0; i < size; i++) {
//		printf("%d�� ������ %d\n", i + 1, score[i]);
//		sum += score[i];
//	}
//	printf("----------------\n");
//	printf("�հ�:%d\n", sum);
//	printf("���:%.2f\n", (double)sum / size);
////-do while�� ���---�˻�------------------------------------------
//	int no;
//	char quit;
//	do {
//		printf("�˻���ȣ?");
//		scanf("%d", &no);
//		getchar(); //����ó��
//		//�߸��� ��ȣ ó��
//		if (no < 1 || no>3) {	// 
//			printf("�߸��� ��ȣ�Դϴ�\n");
//			continue; //while �� �ٽ� ���ư� (�������)
//		}
//		printf("������ %d\n", score[no - 1]);
//		printf("*****************\n");
//		printf("����(q)");
//		scanf("%c", &quit);
//		if (quit == 'q')break;
//
//	} while (quit != 'q');
//-----------------------------------------------------------

//�˻�-----while�� ���---------------------
	//int score[3] = { 20,50,30 };
	//int no;
	//char quit;
	//while (1)
	//{
	//	printf("�˻���ȣ?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no<1 || no>3) {	// 
	//		printf("�߸��� ��ȣ�Դϴ�\n");
	//		continue; //while �� �ٽ� ���ư� (�������)
	//	}
	//	printf("������ %d\n", score[no - 1]);
	//	printf("*****************\n");
	//	printf("����(q)");
	//	scanf("%c",&quit);
	//	if (quit == 'q')break;
	//}	
//�ǽ�=========================================  
	//���л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ����ϴ� ���α׷�
	// ��) 1�� ���� 90 2�� 88
	//1���� 90�� 2���� 88�� 
	//�߰� 1�հ�� ��� ���
	//���ϴ� �л���ȣ �Է��ϸ� �ش��л� �������
	//int sum = 0;
	//int score[5];
	//int size = sizeof(score) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]�������Է�:",i+1);
	//	scanf("%d",&score[i]);
	//	printf("%d\n",score[i]);
	//	sum += score[i];
	//}
	//printf("�հ�:%d�̰� �����%.1f�̴�\n",sum,(double)sum/size);

	////�˻����

	//int choise;
	//char quit;
	//do {
	//	printf("�л���ȣ�Է�:\n");
	//	scanf("%d",&choise);
	//	printf("%d���Դϴ�\n", score[choise-1]);

	//	if (choise < 1 || choise>5) {
	//		printf("�߸��� ��ȣ�Դϴ�\n");
	//		continue; //while �� �ٽ� ���ư� (�������)
	//	}


	//	scanf("%c", &quit);
	//	getchar();

	//} while(quit!='q');


	//�Ǻ���ġ�� ���� ���ϱ� 
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

	////���
	//for (int i = 0; i < 20; i++) {
	//	printf("%d\n", fibo[i]);
	//}



}


	

	
