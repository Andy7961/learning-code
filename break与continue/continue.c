# include <stdio.h>
//continue跳过这次循环的剩下内容直接跳到循环开头开始下一次循环
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)//i = 5,执行continue
            continue;//剩下的都不执行,跳到循环开始的地方
        printf("%d ", i);
        i++;
    }
    return 0;//结果是1 2 3 4 然后程序没走完但是进入死循环
}