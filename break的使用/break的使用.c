#include <stdio.h>
int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("������");
        break;
    case 6:
    case 7:
        printf("��Ϣ��");
        break;
    default://��������ȫ��û�У����������������飬��д�ɲ�д�� 
        printf("�������\n");
        break;
    }
    return 0;
}