/*定义一个时钟结构体类型：
struct clock
{
int hour;
int minute;
int second;
};

typedef struct clock CLOCK;
然后，编程实现将时钟模拟显示在屏幕上。

例如,10点20分3秒
输入
10,20,3
输出
10:20:03

例如,输入非法时间
输入
25,100,200
输出
error*/
#include <stdio.h>

struct clock {
    int hour;
    int minute;
    int second;
};

typedef struct clock Clock;

int is_valid_time(int hour, int minute, int second) {
    return (hour >= 0 && hour < 24) && (minute >= 0 && minute < 60) && (second >= 0 && second < 60);
}

int main() {
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    if (is_valid_time(a, b, c)) {
        Clock t = {a, b, c};
        printf("%02d:%02d:%02d", t.hour, t.minute, t.second);
    } else {
        printf("error");
    }
    return 0;
}