#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS//Ҫ��д���У������scanf�����Ų��ᱨ��

int main()
{
    int a = 10;//�Ƚ�һ������a
    printf("���ú�ѧϰ�𣿣�ѡ��1 or 0��:>");
    scanf_s("%d", &a);//�ɼ��̼����a��ֵ
    if (a == 1)//����û�У�
    {
        printf("��֣����ܿ��ϴ�ѧ\n");
    }
    else//��a��ֵ��Ϊ1����ִ�����ָ��
    {
        printf("������������\n");
    }
    return 0;
}