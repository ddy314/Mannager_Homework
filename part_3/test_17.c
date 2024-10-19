/*有一对兔子，从出生后第3个月起每个月都生一对兔子。小兔子长到第三个月后每个月又生一对兔子。
假设所有的兔子都不死，问第n个月时有几对兔子。即求第n个Fibonacci数。
例如输入1，输出1；
输入2，输出1；
输入3，输出2；
输入4，输出3；*/
#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}


//another way
/*#include <stdio.h>

int finbonacci (int n)
{
    while (n>=1)
    {
        if(n==1 || n==2)
            return 1;
        else
            return  finbonacci(n-1)+finbonacci(n-2);
    }
}

int main ()
{
    int n;
    scanf("%d",&n);
    printf("%d",finbonacci(n));
}*/
