#include<stdio.h>

int main() {
	////������ �������� ����
	//int a;
	////�ʱ�ȭ 
	//a = 10;
	//printf("%d\n",a);
	
	//�Ǽ��� ������ ����
	//float f;	// 4byte
	//double d;	// 8byte

	//f = 3.144141411414; // �ʱ�ȭ 
	//d = 3.141141441414; // �ʱ�ȭ
	//printf("%.15f\n",f);
	//printf("%.15f\n", d);


	//������ 

	//char c ='A'; //����� ���ÿ� �ʱ�ȭ 
	//
	//printf("���ڴ� %c\n",c,c);


	//���������� ����Ʈ�� 
	
	//int a = 100;
	//printf("������:%d\n", sizeof(a));


	//float f = 3.14;
	//double d = 3.14;

	//printf("float������� %d\n", sizeof(f));
	//printf("double������� %d\n", sizeof(d));

	//char c = 'a';
	//printf("char������� %d\n", sizeof(c));

	
	
	//���ڿ�
	//�迭�� �̸��� �ּҸ� ������ �ִ�
	//�迭�� ũ��� ���ڿ��� ũ�� +1 
	//����� ���ÿ� �ʱ�ȭ �ÿ��� �迭�� ũ�� ���� ����
	


	char c[6]="hello";	//hello �� 5���������� c[6]�� +1�� ����� �Ѵ� �������� ���� 0�̶�� ���ڿ��� ���� �Է�����ߵǱ⶧��
						// null���ڸ� �������� �߰����ȴ� 
	//c = "hello"; //����⶧���� �Ұ�

	//printf("���ڿ�:%s ũ�� %d\n", c,sizeof(c));	

	//printf("%c\n",c[0]);

	//printf("%c\n",c[5]); //5���� null�� ���� 


	for (int x=1;x<sizeof(c);x++) {
		printf(x);
	}
	

	return 0;
}