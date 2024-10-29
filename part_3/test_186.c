/*每个苹果0.8元
第一天买2个苹果
从第二天开始，每天买前一天的2倍
直至购买的苹果总个数达到不超过100的最大值

求每天平均要花多少钱(保留两位小数)
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int days = 0;
    int apples_days = 2;
    int apples_total = 0;
    while (apples_days + apples_total <= 100)
    {
        apples_total = apples_total + apples_days;
        apples_days = apples_days * 2;
        days++;
    }
    double total_cost = apples_total * 0.8;
    double cost_av = total_cost / days;
    printf("%.2lf", cost_av);
}
