#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
        if (b == 2)
            printf("111\n");
        else//��Ȼ����������Ǻ͵�һ��if����ģ���ʵ�����Ǻ͵ڶ���if�ɶԡ�
            printf("222\n");
    return 0;//���մ�ӡ����ǿա�

    //��������ȷ��д��
    
    int a = 0;
    int b = 2;
    if (a == 1)
    {
        if (b == 2)
            printf("111\n");
    }//����ͱ����һ������飬����������ִ���������飬������������ִ��else��
    else
        printf("222\n");
    return 0;//���մ�ӡ�����222��
    
}