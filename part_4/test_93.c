/*编写一个程序，找出1~N中的所有素数,其中1<N,N为整数。

输入输出格式要求：
1.要求每个数后面都要输出逗号，
请不要输出其他字符

2.遇到异常情况，输出error
例如：
输入：5
输出：2,3,5,

输入：a
输出：error

提醒：数据最多不超过200*/
#include <stdio.h>

int main()
{
    int a[200];
    int m;
    if(scanf("%d",&m)==0||m<=1)
        printf("error");
    else
    {
        for (int i = 0; i < m; i++) {
            a[i] = 1;
        }

        for (int i = 2; i < m; i++) {
            if (a[i]) {
                for (int j = i * 2; j < m; j += i) {
                    a[j] = 0;
                }
            }
        }

        for (int i = 2; i < m; i++) {
            if (a[i]) {
                printf("%d,", i);
            }
        }

        return 0;
    }
}