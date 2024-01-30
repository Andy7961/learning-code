#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
#define scanf(scanf_s)
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s",password);//输入密码，并存放在passsword数组中
	printf("请确认(Y/N):>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}

//这段代码运行到printf后会直接输出放弃确认，
//因为输完密码后敲了回车键进行下一步，输入的密码存放到了password，
//而getchar把回车键的值10读走了，于是ret的值直接变成了10，ret≠Y，
//执行else，输出放弃确认。