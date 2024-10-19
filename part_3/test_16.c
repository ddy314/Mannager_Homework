/*求出π的值，根据给出公式π/2=1+1/3+1/3*2/5+1/3*2/5*3/7+...，从键盘输入要求满足的精度。（即前后两次求得的π相差小于输入精度）
采用float型，输出采用七位有效数字型如3.xxxxxx。
例如输入0.001，输出3.141106.*/
#include<stdio.h>
float abs(float n)
{
    if(n<=0)
        return -n;
    return n;
}
int main()
{
    float n;
    scanf("%f",&n);
    float pi_2 = 1;
    float i = 1.0;
    float temp = 1.0;
    float prev = 0;
    while(abs(prev - pi_2 * 2)>=n)
    {
        prev = pi_2 * 2;
        pi_2 = pi_2 + temp * i/(2*i+1);
        temp = temp * i/(2*i+1);
        i++;
    }
    printf("%f",pi_2*2);
}