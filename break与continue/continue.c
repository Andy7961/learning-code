# include <stdio.h>
//continue�������ѭ����ʣ������ֱ������ѭ����ͷ��ʼ��һ��ѭ��
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)//i = 5,ִ��continue
            continue;//ʣ�µĶ���ִ��,����ѭ����ʼ�ĵط�
        printf("%d ", i);
        i++;
    }
    return 0;//�����1 2 3 4 Ȼ�����û���굫�ǽ�����ѭ��
}