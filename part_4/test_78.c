/*编写程序，实现求集合（浮点数）的中位数的功能。中位数指n个数排序后，（1+n）/2位置处的元素。n为偶数时，中位数取n/2位置处元素。

输入格式：依次为元素个数n和元素序列。
输出格式：输出中位数(输出精度保持0位小数）。
注意：1、输入n错误时，输出ERROR（大写）并结束程序2、任意多余输出视为错误。

例如输入
4回车
4空格3空格2空格1回车
正确输出：
2*/
#include <stdio.h>
void sort(float* a, int l)
{
    for (int i = 0; i < l - 1; i++)
        for (int j = i + 1; j < l; j++)
            if (a[i] < a[j])
            {
                float temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
}

int main()
{
    int n;
    if ((scanf("%d", &n)) != 1 || n <= 0)
        printf("ERROR");
    else
    {
        float array[15];
        for (int i = 0; i < 15; i++)
            array[i] = -30000;
        for (int i = 0; i < n; i++)
            scanf("%f", &array[i]);
        sort(array, 15);
        if (n % 2 == 0)
            printf("%d", (int)array[n / 2]);
        else
            printf("%d", (int)array[(n + 1) / 2 - 1]);
    }
}
