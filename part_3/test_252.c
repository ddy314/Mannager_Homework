/*输入偶数n输出所有两个质数对，使其和为n，比如输入16，输出3+13，5+11
多组质数对换行输出，一个质数对中小的一个在前，多组质数对按第一个加数由小到大的顺序输出
若输入的n不是偶数，输出：Error。
例如：
输入：
16
输出：
3+13
5+11*/
int fun (int n)
{
    if(n==2 || n==3)
        return 1;
    if(n%2==0||n%3==0)
        return 0;
    for(int i = 3;i*i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0)
        printf("Error");
    else
    {
        for(int i = 2;i<=n/2;i++)
            if(fun(i)==1&&fun(n-i)==1)
                printf("%d+%d\n",i,n-i);
    }
}
