/*(第三章控制流程)下面程序的功能是不用第三个变量，实现两个数的对调操作。*/
#include <stdio.h>

void main()

{

    int a,b;

    scanf("%d%d",&a,&b);

    printf("%d,%d\n",a,b);

    a = a + b;
    b = a - b;
    a = a - b;  //what fuck?


    printf("%d,%d\n",a,b);

}