/*下面程序的功能是输出1到100之间每位数的乘积大于每位数的和的数。例如数字26，数位上数字的乘积12大于数字之和8*/
#include<stdio.h>

void main()

{

    int n, k = 1, s = 0, m;

    for (n = 1; n <= 100; n++) {

        k = 1; s = 0;

        m = n;

        while (m>0)

        {
            k = (m/10)*(m%10);
            s = (m/10)+(m%10);
            m = 0;

        }

        if (k > s)

            printf("%d", n);

    }

}