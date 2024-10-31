/*实现删除字符串中连续的重复字符（除字母和数字）。

输入为字符串，将字符串中连续重复的，不是字母且不是数字的字符删去，然后输出处理后的字符串。
输入字符串最长50个字符，之后截断，只输出处理后的字符串。


例如
输入11+++2==13回车
输出11+2=13*/
#include <stdio.h>
#include <string.h>

int fun(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

int main()
{
    char ch[50];
    scanf("%s", &ch);
    char* p = ch;
    for (int i = 0; i < (strlen(ch)); i++)
    {
        if (*p != *(p + 1) || fun(*p))
            printf("%c", *p);
        p++;
    }
}
