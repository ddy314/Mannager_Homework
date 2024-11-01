/*编写程序，输入一个字符数组s1，然后将字符数组s1中的全部字符复制到字符字符数组s2，不能用strcpy。
赋值时，'\0'也要复制过去，并表示成转义字符输出。
例如输入：hello
输出：hello\0*/
#include <stdio.h>
#include <string.h>

int main ()
{
    char ch[20];
    char ch2[20];
    int i;
    scanf("%s",&ch);
    for(i = 0;ch[i]!='\0';i++)
    {
        ch2[i]=ch[i];
    }
    ch2[i]='\\';
    ch2[i+1]='0';
    ch2[i+2]='\0';
    printf("%s",ch2);
}
