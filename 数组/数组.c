#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//				0,1,2,3,4,5,6,7,8,9每个数组的元素都有下标
	//且从零开始
	printf("%d\n",arr[5]);//用下标的形式访问元素
	int a = 3;
	a += 2;
	printf("%d\n",a);
	return 0;
}