/*输出100~200之间不能被3整除也不能被7整除的数。
输出要求：
连续输出满足要求的数字，数字之间不能有任何符号。*/
#include <stdio.h>
int main ()
{
    for(int i = 100;i<=200;i++)
        if (i%3!=0&&i%7!=0)
            printf("%d",i);
}