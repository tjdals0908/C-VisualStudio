#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h> //���ڿ� ���� �Լ�
int main() {
	//����
	//char c;
	//scanf("%c", &c);
	//printf("����:%c\n", c);

	//���ڱ���� �ִ� 
	//char c = getchar(); //�����Է� �����Լ� 
	//printf("�Է¹���:");
	//putchar(c); //���� ��� �����Լ�

	//getch()�Լ� : ���ڱ���� ���� ���͸� ġ�� �ٷ� �״�� �Էµ� �ԷµȰ��� ����̾ȵ�
	//char c = getch();		
	//printf("�Է¹���:");
	//putchar(c);

	//char pw[5];
	//printf("password?(4�ڸ�)");
	////�Է��ϰ� �����ó��
	//for (int i=0; i < 4; i++) {
	//	pw[i] = getch();
	//	putchar('*');
	//}
	////����Ҷ�
	//for (int i = 0; i < 4; i++) {
	//	printf("%c",pw[i]);
	//}
	//pw[4] = '\0';  // ������ �ε����� \0�� �Է��ϰڴٴ� ��
	//printf("\n��й�ȣ%s\n", pw);  //pw�� ����ϸ� ������ ���ڿ��� ������ ����ϰ� �Ǿ��ִ�

//////////���ڿ�////////

	//char s[6] ="hello";
	//char s[6]; //�迭�� �̸��� �ּ��̴�
	//scanf("%s",s); // �⺻�� ������ & �ּҰ��� ����� ������ �迭�� ��ü�� �ּ��̱⶧�� �ʿ����
	//printf("%s\n", s);

	//���ڿ� �����Լ�:����ó������
	//char name[20];
	//printf("�̸���?");
	//gets(name);
	//printf("����� �̸��� "); puts(name);

	//���ڿ� �����Լ�
	char name[10] = "hong";
	//name = "kim";
	strcpy(name, "kim");
	puts(name);
	//==============================

	//�ǽ�
	//���ڿ��� �Է� �ް� �� ���ڿ��� ���� ���̿�
	//	�ּҰ��� ����� ���ÿ�
	//	��) ���ڿ��� �Է��ϼ��� : call by reference
	//	�� : call by reference
	//	���� : 17
	//	�ּ� : 13630056

	char name1[];




	return 0;

}
