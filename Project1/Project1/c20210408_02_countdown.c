#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <CoreWindow.h>


//�Ű�����: ī��Ʈ �ٿ� ��
//��ȯ�� ���� 
//ī��Ʈ �ٿ� ����ϴ� ����

void countDown(int c) {
	for (int i=c; i>-1; i--) {
		Sleep(1000);
		printf("%d��\n",i);
	}
	printf("---�߻�---");
}


int main() {
	//ī��Ʈ �ٿ�
	//5��-1�� 
	//printf("ī��Ʈ����\n");
	//for(int i = 5; i>-1; i--) {
	//	Sleep(1000);		//�и�������(1/1000����)    1�ʰ� 1000�̴�
	//	printf("%d��\n", i);
	//}
	//printf("�߻�");
	int c;
	printf("���Է�:");
	scanf("%d", &c);
	countDown(c);

	return 0;

}