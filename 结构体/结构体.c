#include <stdio.h>
struct Book
{
    char name[20];      //����
    char author[20];     //����
    char publishing[20];//������
    int price; 			//�۸�
};
main()
{
    struct Book a = { "Harry potter", "J.K.Rowling", "Ӣ��������",15};
    printf("name = %s author = %s publishing = %s  price = %d\n", a.name, a.author, a.publishing, a.price);
    a.price = 20;
    strcpy(a.name, "Harry potter 1");
    printf("name = %s author = %s publishing = %s  price = %d\n", a.name, a.author, a.publishing, a.price);
    return 0;
}