/*一个数如果恰好等于它的因子之和，就被成为完数。
例如6的因子为1,2,3，而6=1+2+3，所以6是一个完数。
编程找出1-1000之间的所有完数，并按照从小到大的顺序输出，输出的每个数都必须以回车结尾。*/
#include <stdio.h>
int fac(int n);
int main ()
{
    for(int i=1;i<=1000;i++)
    {
        int sign = fac(i);
        if (sign == 1)
            printf("%d\n",i);
    }

}
int fac(const int n)
{
    int fa[500];
    int* p = fa;
    int size=0;
    int sum = 0;
    for (int i = 1;i <= n / 2;i++){

        if(n%i==0)
        {
            *p = i;
            p++;
            size++;
        }
    }
    for(int i = 0;i<size;i++)
        sum = sum + fa[i];
    if(sum == n)
        return 1;
    return 0;
}
