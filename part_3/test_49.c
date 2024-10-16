/*输出由*组成的三角形。指定底边长度。第一排输出*，第二排输出***，每行中间需对齐，每行的最后一个*后输出回车。
输入边长(1-80中的奇数)，错误边长，输出error。
例如，
输入1，输出*回车
输入2，输出error
输入3，输出
 *
***回车*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 80 && n >= 1 && n % 2 != 0)
    {
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            if (i != (n + 1) / 2)
                for (int j = 1; j <= (n + 1) / 2 - i; j++)
                    printf(" ");
            for (int k = 1; k <= i * 2 - 1; k++)
                printf("*");
            printf("\n");
        }
    }
    else
        printf("error");
}
