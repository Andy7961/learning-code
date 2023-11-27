#include <stdio.h>
int main()
{
    char arr1[] = "Andy";//这是一个char类型的数组，里面的元素有'A','n','d','y','\0'.其中'\0'是结束标志，不算做内容，仅表示字符串到这就结束了
    char arr2[] = { 'A', 'n', 'd', 'y'};//这个数组里面的元素有'A','n','d','y'.
    char arr3[] = { 'A', 'n', 'd', 'y ', '\0'};//这个数组里面的元素有'A','n','d','y','\0'.
    printf("%d\n", strlen(arr1));//结果为4
    printf("%d\n", strlen(arr2));//结果为随机数，统计n个后遇到0停止计数
    printf("%d\n", strlen(arr3));//结果为4，说明\0为结束标志，遇到\0后停止计数
    return 0;
}
