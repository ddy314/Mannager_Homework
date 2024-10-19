/*韩信有一队兵，他想知道有多少人，便让士兵排队报数。按从1至m1报数，最末一个士兵报的数为x1；按从1至m2报数，最末一个士兵报的数为x2；按从1至m3报数，最末一个士兵报的数为x3；……,按从1至mn报数，最末一个士兵报的数为xn。
请输出最少的人数。
输入：第一行为n
      第二行到第n+1行依次为本次报数的数量和最后1个士兵报的数
输出：满足条件的最少人数。
输入非法数据时输出error
例如：输入：
4
5 1
6 5
7 4
11 10
输出：2111*/
#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("error");
        return 0;
    }

    int set[50];
    for (int i = 0; i < n * 2; i++)
    {
        if (scanf("%d", &set[i]) != 1 || set[i] <= 0)
        {
            printf("error");
            return 0;
        }
    }

    int result = 0;
    int sign = 0;
    while (sign == 0)
    {
        sign = 1;
        result++;
        for (int i = 0; i < n * 2; i += 2)
        {
            if (result % set[i] != set[i + 1])
            {
                sign = 0;
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}
