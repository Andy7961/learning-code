#include <stdio.h>
#define scanf(scanf_s)
int main()
{
    int ret = 0;
    char password[20] = { 0 };
    char ch;
    printf("����������:>");
        scanf("%s",password);//�������룬�������passsword������
            while ((ch = getchar()) != '\n')//һֱ��ȡֱ����ȡ��\nΪֹ
            {
                ;//����䣬getchar��ȡ��ʱ����Ҫ���κ���
            }
    printf("��ȷ��(Y/N):>");
        ret = getchar();//Y/N
    if (ret == 'Y')
    {
        printf("ȷ�ϳɹ�\n");
        printf("�����ǣ�%s",password);
    }
    else
    {
        printf("����ȷ��\n");
    }
    return 0;
}