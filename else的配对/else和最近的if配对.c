#include <stdio.h>
int main()
{
    int a = 0;
    int b = 2;
    if (a == 1)
        if (b == 2)
            printf("111\n");
        else//虽然这里的缩进是和第一个if对齐的，但实际上是和第二个if成对。
            printf("222\n");
    return 0;//最终打印结果是空。

    //以下是正确的写法
    
    int a = 0;
    int b = 2;
    if (a == 1)
    {
        if (b == 2)
            printf("111\n");
    }//这里就变成了一个代码块，条件成立，执行这个代码块，条件不成立，执行else。
    else
        printf("222\n");
    return 0;//最终打印结果是222。
    
}