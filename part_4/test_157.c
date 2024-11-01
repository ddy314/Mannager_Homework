/*输入5个字符，排序后按从小到大顺序输出。
要求：输入5个连续字符；输出除两两间用“,”外无任何其它字符，并同一行输出。

例如：输入：A5av3输出：3,5,A,a,v*/
#include <stdio.h>

int main()
{
    char ch[6];
    scanf("%s", &ch);
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (ch[i] > ch[j])
            {
                char temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
    for (int i = 0; i < 4; i++)
        printf("%c,", ch[i]);
    printf("%c", ch[4]);
}

