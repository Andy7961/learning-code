#include <stdio.h>
int main()
{
	int n = 1;//先设置一个变量n，之后这个n每乘一次都会加1，直到变为10
	int sum = 1;//设置一个变量来放乘完后的数
	while (n < 11)//n能够进入循环的值为1-10
	{
		sum=n*sum;//n与sum即上一次相乘后的结果相乘，赋值给sum，
		n = n+1;//乘完一次后n加1进入下一次循环
		printf("sum = %d\n", sum);
	}
	printf("10的阶乘为%d\n", sum);//输出最后结果
	return 0;
}