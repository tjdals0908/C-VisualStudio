#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
	//�������迭
	//int arr[2][3];
	//arr[0][0] = 1; 	arr[0][1] = 2;	arr[0][2] = 3;
	//arr[1][0] = 4;	arr[1][1] = 5;	arr[1][2] = 6;

	//int rsize = sizeof(arr)/sizeof(arr[0]);	//arr �� 24�� ������ [0]12 ������ 2���̳���
	//int csize = sizeof(arr[0]) / sizeof(int);  //arr[0] ����12�� int�� 4����Ʈ ������ 3�̳���
	//printf("������:%d\n", rsize);
	//for (int i = 0; i <rsize; i++) { //��
	//	for (int j = 0; j < 3; j++) { //��
	//		arr[i][j] = (3 * i) + j + 1;
	//		printf("%d\n", arr[i][j]);
	//	}
	//}

//�ǽ� �� �л��� ����, ����, ���� ������ �Է� �޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� 
// ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
//����)1�� ����, ����, ���� : 85 76 90
//		2�� ����, ����, ���� : 90 75 88

//1�� �հ� : 251�� ��� : 83.67
//2�� �հ� : 253�� ��� : 84.33

//���� / ���� / ������ ��յ� ���غ��ô�
	int x, y, j;
	int arr[2][3];
	int sum = 0;
	int size = sizeof(arr[0]) / sizeof(int);
	for (int i = 0; i < 2; i++) {
		printf("[%d]���� ���� ����?:\n", i + 1);
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			printf("%d\n", arr[i][j]);
			sum += arr[i][j];
			printf("-------------------\n");
			printf("�հ��:%d\n", sum);
			printf("��հ���: %.1f\n", (double)sum / size);
			printf("-------------------\n");

		//------------���� �հ�-------------------------------------------------
		for (int i = 0; i <2; i++) {
			for (int j = 0; j < 3; j++) {
				printf("%d",arr[j][i]);
			}
		}



		sum = 0;

		}




	}
}


	









