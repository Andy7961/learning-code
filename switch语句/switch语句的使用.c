#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define scanf(scanf_s)

int main()
{
    int day = 0;
        scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("����1\n");
        break;
    case 2:
        printf("����2\n");
        break;
    case 3:
        printf("����3\n");
        break;
    }
    return 0;
}