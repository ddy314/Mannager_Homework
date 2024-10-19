/*验证哥德巴赫猜想。
验证2000以内的不小于4的正偶数都能够分解为两个素数之和。
输出：n（n为大于等于4，小于2000的正偶数）
输出：分解的2个素数用空格分割。
只输出运算结果，请不要输出其他字符，遇到异常情况（如n为负数），输出error
例如：输入：10
输出：3 7*/
#include <stdio.h>
int fun (int n)
{
    int i = 2;
    int a = 0;
    while (i<n)
    {
        if(n%2==0||n%i==0)
        {
            a = 1;
            break;
        }
        i++;

    }
    return a;

}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0||n<=4||n>=2000)
        printf("error");
    else
    {
        int result = 1;
        while (result<=n)
        {
            result++;
            if(fun(result)==0 && fun(n-result)==0)
                break;
        }
        printf("%d %d",result,n-result);

    }
}