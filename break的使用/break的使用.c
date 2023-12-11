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
        printf("工作日");
        break;
    case 6:
    case 7:
        printf("休息日");
        break;
    default://上面的情况全都没有，进入下面这个代码块，可写可不写。 
        printf("输入错误\n");
        break;
    }
    return 0;
}