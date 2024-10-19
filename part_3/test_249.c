/*一个五位数，判断它是不是回文数，如：12321是回文数，个位和万位相同，十位和千位相同。
输入：一个整数
输出：是回文数输出："Yes"，否则输出："No"，如果输入的不是五位数，输出："error"
例如输入：12321 输出：Yes*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<=99999&&n>=10000)
    { int set[5];
        for(int i=0;i<5;i++)
        {
            int digit = n % 10;
            set[i]=digit;
            n = n/10;
        }
        if (set[0]==set[4]&&set[1]==set[3])
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("error");
}
