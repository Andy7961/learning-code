#include <stdio.h>
int main()
{
	int age = 10;
	if (age < 18)
		printf("δ����\n");//��һ��

	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");//�ڶ���

	if (age < 18)
		printf("δ����\n");
	else if (18 <= age && age < 28)
		printf("����\n");
	else if (28 <= age && age < 50)
		printf("׳��\n");
	else//�����κ�һ�������������Ҳ��������>=50ִ����һ��
		printf("����\n");//������
	return 0;
}