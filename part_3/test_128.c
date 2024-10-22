/*编写程序，按下列公式求圆周率，精确到最后一项绝对值小于 1e-8
                  π/4 =1 - 1/3 +1/5 -1/7 +...
输出格式：
首先输出满足要求时经过的计算步数（例如上例中计算到1/7经历了4步），
然后输出π的值, PI之前有一个空格和前面隔开
输出的PI值精确到小数点后5位
例如：
steps=100 PI=3.14
提示：为确保计算精度，请使用double类型进行运算。*/

#include <stdio.h>

int main() {
    double result = 0;
    int steps = 1;
    double sign = -1;
    while (1.0 / (steps * 2 - 1.0) > 0.00000001) {
        sign = -1.0 * sign;
        result = result + sign * 1.0 / (steps * 2 - 1.0);
        steps++;
    }
    printf("steps=%d PI=%.5f", steps, result * 4);
    return 0;
}