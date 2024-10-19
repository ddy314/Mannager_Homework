/*(第三章 控制流程)下面程序的功能是从键盘上输入若干学生的学习成绩，统计并输出最高成绩和最低成绩，当输入为负数时退出*/
#include<stdio.h>

void main()

{

    int x = 0;

    int amax = x, amin = 100;

    while (x>=0)

    {
        if(x>=amax)
            amax = x;
        else if(x<=amin)
            amin = x;
        scanf("%d", &x);

    }

    printf("%d,%d", amax, amin);

}