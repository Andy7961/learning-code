#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
}
//- getchar用来接受用户输入的字符,存放在`ch`里,

//- 每次循环都会要求用户输入一个字符, 然后判断字符是否为`EOF`,如果不是, 那就输出刚刚输入的字符

//- `EOF`是`end of file`文件结束标志, 它的值是 - 1, 输入这个东西不是直接在键盘上打`EOF`三个字母, 要按住`ctrl+z`才行

//- 文件结束标志和字符串结束标志`\0`是类似的

