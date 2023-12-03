#include <stdio.h>
struct Book
{
    char name[20];      //书名
    char author[20];     //作者
    char publishing[20];//出版社
    int price; 			//价格
};
main()
{
    struct Book a = { "Harry potter", "J.K.Rowling", "英国出版社",15};
    printf("name = %s author = %s publishing = %s  price = %d\n", a.name, a.author, a.publishing, a.price);
    a.price = 20;
    strcpy(a.name, "Harry potter 1");
    printf("name = %s author = %s publishing = %s  price = %d\n", a.name, a.author, a.publishing, a.price);
    return 0;
}