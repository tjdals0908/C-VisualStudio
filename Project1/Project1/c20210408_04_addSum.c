#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ� 

//	int sum = 0;	//0�� �Է¾��ص��� ���������� 0���� �ڵ��ʱ�ȭ
//int userSum(int a) {
//	static int sum = 0;
//	sum = sum + a;
//	return sum;
//}

//�Ű����� : ���� 
//���ϰ� : ���� ���Լ��� ������ Ƚ�� 
//�Լ��̸�: countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}

int main() {
	//printf("����:%d\n", userSum(10));
	//printf("����:%d\n", userSum(20));

	//�ݺ����� �̿��ؼ� 10������
	for (int i = 1; i < 10 + 1; i++) {
		printf("%d\n",countTest());
	}
}