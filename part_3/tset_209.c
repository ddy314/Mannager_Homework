/*(第三章 控制流程)有以下程序段：
s=1.0；
for(k=1；k<=n；k++)
s=s+1.0/(k*(k+1))；
printf("%f\n",s)；
填空完成下述程序，使之与上述程序的功能完全相同*/
#include<stdio.h>
void main()
{
    double s = 0.0;
    float k = 1;
    int n = 7;
    float d = 1;
    do
    {
        s = s + d;
        d = 1.0 / (k*(k + 1));
    }

    printf("%.3f", s);

}


