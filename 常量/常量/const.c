#include <stdio.h>
int main()
{
	const int a = 10;//a原本是个变量，但是现在被const修饰了，它的值就不能变了。
	a = 5;//如果此时还想修改它的值，那么就会报错。
	return 0;
}