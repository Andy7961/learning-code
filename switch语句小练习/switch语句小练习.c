#include <stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1://��������뿪ʼһ��һ��ִ������Ĵ���
		m++;//m=3
	case 2:
		n++;//n=2
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2://���switch���������
			m++;//m=4
			n++;//n=3
			break;//����case3��switch���
		}
	case 4://����ִ��case4
		m++;//m=5
		break;//����switch���
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);//�����m=5��n=3
	return 0;
}