/*接收输入的一个字符串(无空格、制表符等)，
将字符串中的小写字母转换为大写字母，输出转换后的字符串，最后必须输出回车。
最长输入20个有效字符（不包括回车）。
例如输入：apple 输出：APPLE
如果字符串中包含了其他字符，均不进行转换，只转换小写字母为大写字母。
如输入：test2test* 输出：TEST2TEST**/
#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[21];
    scanf("%s",&ch);
    for(int i = 0;i<strlen(ch);i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
            ch[i] = ch[i]-32;
        printf("%c",ch[i]);
    }
    printf("\n");
}