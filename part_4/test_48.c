/*将输入的10个整数，按从小到大的顺序输出（使用,作为间隔）。
注意：1、逗号为英文输入法中逗号；2、任意多余输出视为错误。例如
输入
10 9 8 7 6 5 4 3 2 1
输出
1,2,3,4,5,6,7,8,9,10*/
#include<stdio.h>
int main ()
{
    int array[10];
    for(int i = 0;i<10;i++)
        scanf("%d",&array[i]);
    for(int i = 0;i<9;i++)
    {
        for(int j = 0;j<9-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i = 0;i<10;i++)
        if(i!=9)
            printf("%d,",array[i]);
        else
            printf("%d",array[9]);


}