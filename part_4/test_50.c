/*输入一个字符串(无空格)，将字符串颠倒输出。最长50个字符。
例如输入apple，输出elppa*/
#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[50];
    scanf("%s",&ch);
    char *p =  &ch[strlen(ch)-1];
    while (p>=ch)
    {
        printf("%c",*p);
        p--;
    }
}