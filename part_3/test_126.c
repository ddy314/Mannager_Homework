/*求n!(n由键盘输入)，当结果将要超出表示范围时退出（以32位机器为例），显示溢出前的n以及n!结果。
输入输出示例：
输入:
5
输出:
5!=120*/
#include <stdio.h>
int fac(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 12)
        printf("12!=479001600");
    else
    {
        int result = fac(n);
        printf("%d!=%d", n, result);
    }
}

int fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int pre = fac(n - 1);
    return n * pre;
}
