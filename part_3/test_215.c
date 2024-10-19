/*下面程序的功能是用辗转相除法求两个正整数m和n的最大公约数。*/
#include<stdio.h>
int hcf(int m, int n) {
    int r = 1;
    if (m < n)
    {
        r = m;
        m = n;
        n = r;
    }
    r = m%n;
    while (r!=0)
        {
            m=n;
            n=r;
            r=m%n;
        }
        return n;
}
void main()
{
    int m = 25;
    int n = 45;
    scanf("%d%d",&m,&n);
    int gcd = hcf(m,n);
    printf("%d",gcd);
}