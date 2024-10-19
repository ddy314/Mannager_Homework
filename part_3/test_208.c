/*(第三章 控制流程)下面程序的功能是计算1-3+5-7+ …… -99+101的值。*/
#include<stdio.h>

void main()

{

    int i, t = 1, s = 0;

    for (i = 1; i <= 101; i += 2)

    {
        s = s + t * i;
        t = - t;
    }

    printf("%d", s);

}