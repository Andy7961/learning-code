#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS//要先写这行，下面的scanf函数才不会报错

int main()
{
    int a = 10;//先建一个变量a
    printf("你会好好学习吗？（选择1 or 0）:>");
    scanf_s("%d", &a);//由键盘键入给a赋值
    if (a == 1)//这里没有；
    {
        printf("坚持，你能考上大学\n");
    }
    else//若a的值不为1，则执行这段指令
    {
        printf("放弃，进厂打工\n");
    }
    return 0;
}