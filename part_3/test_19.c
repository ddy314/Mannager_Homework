/*输入正整数n（1-10）,求1-n的阶乘之和，最后必须输出回车。遇到异常情况（如不是1-10中数），输出"error"；否则不要随意输出。
例如，输入4，输出33；
输入7，输出5913回车。*/
#include<stdio.h>

int factorial(int n);
int main()
{
    int n;
    int result = 0;
    scanf("%d",&n);
    if (n>10||n<1)
        printf("error\n");
    else
    {
        for(int i=1;i<=n;i++)
            result = factorial(i)+result;
    }
    printf("%d\n",result);
}
int factorial(int n)
{
    int r=1;
    for(int i=1;i<=n;i++)
        r = r * i;
    return r;
}