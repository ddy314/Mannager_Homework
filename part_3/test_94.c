/*编写一个程序，求两个正整数x和y的最小公倍数。

输入输出格式要求：
    输入格式：x y回车
例如：
输入：3 10回车
输出：30
输入：5 5回车
输出：5*/
#include <stdio.h>
int main (void)
{
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int result = m < n ? m : n;
    for (result<=m*n;;)
    {
        if (result%m==0&&result%n==0)
            break;
        result++;
    }
    printf("%d\n",result);
}
