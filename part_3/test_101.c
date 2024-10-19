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

unsigned int circular_left_shift(unsigned int value, int shift)
{
    int bits = sizeof(value) * 8; // 获取位数
    shift = shift % bits; // 处理shift大于位数的情况
    return (value << shift) | (value >> (bits - shift));
}

unsigned int circular_right_shift(unsigned int value, int shift)
{
    int bits = sizeof(value) * 8; // 获取位数
    shift = shift % bits; // 处理shift大于位数的情况
    return (value >> shift) | (value << (bits - shift));
}

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);
    unsigned int result;
    if (j > 0)
    {
        result = circular_left_shift(i, j);
    }
    else
    {
        result = circular_right_shift(i, -j);
    }
    printf("%u", result);
    return 0;
}
