#include <stdio.h>

//enum是枚举关键，括号中的MALE,FEMALE,SECRET是枚举常量
enum Sex//这里没有符号
{
	MALE,//这里的符号是，
	FEMALE,
	SECRET//最后一个枚举常量后面没有符号
};
int main()
{
	//枚举常量本质是常量，他的值也是不可更改的。
	MALE = 20;//这行代码报错，MALE的值不可更改
	//现在来看看这些常量的值吧
	printf("MALE的值为%d\n", MALE);//输出结果为：MALE的值为0
	//枚举常量的值默认是从0开始，依次向下递增1的
	return 0;
}