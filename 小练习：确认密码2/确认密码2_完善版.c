#include <stdio.h>
#define scanf(scanf_s)
int main()
{
    int ret = 0;
    char password[20] = { 0 };
    char ch;
    printf("请输入密码:>");
        scanf("%s",password);//输入密码，并存放在passsword数组中
            while ((ch = getchar()) != '\n')//一直读取直到读取到\n为止
            {
                ;//空语句，getchar读取的时候不需要做任何事
            }
    printf("请确认(Y/N):>");
        ret = getchar();//Y/N
    if (ret == 'Y')
    {
        printf("确认成功\n");
        printf("密码是：%s",password);
    }
    else
    {
        printf("放弃确认\n");
    }
    return 0;
}