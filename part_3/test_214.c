/*下面程序的功能是输出100以内的个位数为6、且能被3整除的所有数*/
#include<stdio.h>

void main() {

    int i, j=0;

    for (i = 0; j<100; i++)

    {

        j = i * 10 + 6;
        if(j%3==0)
        printf("%d", j);

    }

}