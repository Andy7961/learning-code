#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#define scanf(scanf_s)
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s",password);//�������룬�������passsword������
	printf("��ȷ��(Y/N):>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}

//��δ������е�printf���ֱ���������ȷ�ϣ�
//��Ϊ������������˻س���������һ��������������ŵ���password��
//��getchar�ѻس�����ֵ10�����ˣ�����ret��ֱֵ�ӱ����10��ret��Y��
//ִ��else���������ȷ�ϡ�