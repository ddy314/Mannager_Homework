/*下面程序的功能是根据近似公式：π/4=1-1/3+1/5-1/7+1/9……,求π值。
程序输入：一个整数n（回车），其中n代表公式中正向（+）和负向（-）的总数目。
输出：根据公式计算出的π值 保留两位小数*/
#include <stdio.h>
double pow(int m,int n)
{
    if (n%2==0)
        return 1.00;
    return -1.00;
}
int main (void)
{
    int n;
    scanf("%d",&n);
    float pi_4 = 0;
    for(int i=1;i<=n;i++)
    {
        pi_4 = pi_4 + pow(-1,i-1)*(1/(2*(float)i-1));
    }
    float pi = pi_4 * 4;
    printf("%.2f",pi);
}

