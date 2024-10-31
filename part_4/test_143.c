
/*编写程序，输入一个字符串，分别统计输出该字符串中的字母a和d的个数。

输入输出格式要求：
    输入格式：string回车
例如：
输入：thedaythemonththeyear123回车
输出：a:2,d:1
输入：a
输出：a:1,d:0

提醒：字符串最长50个字符。
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char ch[51];
    int n1 = 0;
    int n2 = 0;
    scanf("%s",&ch);
    for(int i = 0;i<=strlen(ch);i++)
    {
        if(ch[i]=='a')
            n1++;
        else if(ch[i]=='d')
            n2++;
    }
    printf("a:%d,d:%d",n1,n2);

}