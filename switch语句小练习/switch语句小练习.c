#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1://从这里进入开始一步一步执行下面的代码
		m++;//m=3
	case 2:
		n++;//n=2
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:
			n++;
		case 2://这个switch从这里进入
			m++;//m=4
			n++;//n=3
			break;//跳出case3的switch语句
		}
	case 4://继续执行case4
		m++;//m=5
		break;//跳出switch语句
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);//结果是m=5，n=3
	return 0;
}