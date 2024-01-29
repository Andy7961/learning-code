# include <stdio.h>
//break跳出循环,永久终止循环
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)//当i=5时会执行这一句
            break;//也就是跳出循环
        printf("%d ", i);
        i++;
    }
    return 0;//最后的结果是1 2 3 4 
}