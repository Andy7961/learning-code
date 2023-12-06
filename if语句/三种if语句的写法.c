#include <stdio.h>
int main()
{
	int age = 10;
	if (age < 18)
		printf("未成年\n");//第一种

	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");//第二种

	if (age < 18)
		printf("未成年\n");
	else if (18 <= age && age < 28)
		printf("青年\n");
	else if (28 <= age && age < 50)
		printf("壮年\n");
	else//上述任何一种情况都不成立也就是年龄>=50执行这一行
		printf("老年\n");//第三种
	return 0;
}