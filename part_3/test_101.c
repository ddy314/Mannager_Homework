/*编写一个程序，输入两个整数i、j，如果j的值大于0，则将i循环左移j位；
如果j的值小于0，则将i循环右移j位，最后输出i的值。

输入输出格式要求：
输入格式：i j回车
i j 均用int类型存储。
只输出运算结果，请不要输出其他字符
例如：
输入：3 10回车
输出：3072
输入：-65535 -2回车
输出：2147467264*/
#include <stdio.h>

int circular_shift(int i, int j)
{
    int bit_length = 32;
    unsigned int ui = (unsigned int)i;

    j = j % bit_length;

    if (j > 0)
    {
        return (int)((ui << j) | (ui >> (bit_length - j)));
    }
    if (j < 0)
    {
        j = -j;
        return (int)((ui >> j) | (ui << (bit_length - j)));
    }
    // 如果 j == 0，不进行移位
    return i;
}

int main() {
    int i, j;
    // 输入两个整数 i 和 j
    scanf("%d %d", &i, &j);
    printf("%d\n", circular_shift(i, j));

    return 0;
}