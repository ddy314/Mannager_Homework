/*(第三章 控制流程)下面程序的功能是统计用0至9之间的不同的数字组成的三位数的个数*/
#include<stdio.h>

void main()

{
    int i, j, k, count = 0;
    for (i = 1; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (i == j)
                continue;
            else
            {
                for (k = 0; k <= 9; k++)
                {
                    if (k==j||k==i)
                        continue;
                    {
                        count++;
                    }
                }
            }
        }
    }

    printf("%d", count);

}