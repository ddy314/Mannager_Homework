/*一只公鸡值5钱，
一只母鸡值3钱，
三只小鸡值1钱，
现在用百钱买百鸡，
请问公鸡、母鸡、小鸡各多少只？
输出结果a,b,c,d,e,f.....
(a,d...对应公鸡数量,b,e...对应母鸡数量,c,f...对应小鸡数量)*/
#include <stdio.h>
int main()
{
    for(int a = 0;a<=20;a++)
    {
        for(int b = 0;b<=33;b++)
        {
            for(int c = 0;c<=100;c++)
            {
                if(a*5+b*3+c*1==100 && a+b+3*c ==100)
                    printf("%d,%d,%d,",a,b,3*c);
            }
        }
    }
}