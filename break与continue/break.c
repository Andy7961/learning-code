# include <stdio.h>
//break����ѭ��,������ֹѭ��
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)//��i=5ʱ��ִ����һ��
            break;//Ҳ��������ѭ��
        printf("%d ", i);
        i++;
    }
    return 0;//���Ľ����1 2 3 4 
}