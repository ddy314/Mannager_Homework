/*输入2个整数（空格区分），输出最大公约数和最小公倍数（，逗号区分）
例如输入5 10，输出应为5,10*/
#include <stdio.h>
int main ()
{
    int a;
    int b;
    int n1;
    int n2;
    scanf("%d %d",&a,&b);
    for (int i = 1;i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
            n1 = i;
    }
    for(int i = a;i<=a*b;i++)
        if(i%a==0 && i%b==0)
        {
            n2 = i;
            break;
        }
    printf("%d,%d",n1,n2);

}