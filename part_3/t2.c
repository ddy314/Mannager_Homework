/*Cassels方程是一个在数论界产生了巨大影响的不定方程：x ^2 +y^2 +z ^2 =3xyz。该方程有无穷多自然数解。
本题并不是要你求解这个方程，只是判断给定的一组 (x,y,z) 是不是这个方程的解。
输入格式：
输入在第一行给出一个不超过 10 的正整数 N，随后 N 行，每行给出 3 个正整数 0<x≤y≤z≤1000。
输出格式：
对于每一组输入，如果是一组解，就在一行中输出 Yes，否则输出 No。*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n * 3];
    for (int i = 0; i < n * 3; i++)
        scanf("%d", &array[i]);
    for (int j = 0; j < n * 3; j = j + 3)
    {
        if (array[j] * array[j] + array[j + 1] * array[j + 1] + array[j + 2] * array[j + 2] == 3 * array[j] * array[j +
            1] * array[j + 2])
            printf("Yes\n");
        else
            printf("No\n");
    }
}
