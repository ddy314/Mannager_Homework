/*回文测试：输入一30个字符以内的字符串，判断是否为回文；
如果是，则打印"true"；否则打印"false"。
像"aba"这样的从左往右读与从右往左读一致就是回文。*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[31];
    scanf("%s",&ch);
    char *p1 = ch;
    char *p2 = ch + (strlen(ch)-1);
    int sign = 1;
    while(p2>=&ch[0])
    {
        if(*p1!=*p2)
        {
            printf("false");
            sign = 0;
            break;
        }
        p1++;
        p2--;
    }
    if(sign)
        printf("true");

}