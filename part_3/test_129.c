/*根据历法，凡是1、3、5、7、8、10、12月，每月31天；凡4、6、9、11月，每月30天；2月闰年29天，平年28天。
闰年判断方法是：
  如果年号能被400整除，此年为闰年
  如果年号能被4整除，而不能被100整除，此年为闰年；
  否则不是闰年。
 程序输入年、月，输出该月的天数。如果月份不为1~12之间的数字则转换为正确的月份，如13对应1月，不考虑月份为负数的情况。
 例如：
 输入：1992 3
 输出：days:31

 输入：2001 14
 输出：days:28*/
#include <stdio.h>
int main ()
{
    int years;
    int month;
    int days;
    int sign;
    scanf("%d %d",&years,&month);
    if (years%400==0||(years%4==0&&years%100!=0))
        sign = 1;
    else sign = 0;
    month = month % 12;
    if (month == 2)
    {
        if (sign == 1)
            days = 29;
        else days = 28;

    }
    else
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        default:
            days = 30;
            break;


        }
    }
    printf("days:%d",days);
}