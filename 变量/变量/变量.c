#include <stdio.h>
extern int a;
int main()
//当局部变量和全局变量同时存在的时候，局部变量优先。
{
	int a = 5;//给a赋值5，此时a在{}内部，为局部变量
	printf("a=%d\n", a); //最后打印出来的结果为10，说明局部变量优先
		return 0;
}