/*题目3：输入n(n<100)个有序正数，请用折半查找算法，查找x在其中的位置。
例如,
输入:
5
1,2,3,4,5
2
输出:
2
测试集合中，x数一定在正数数组中。即不用处理错误逻辑*/
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i = 0;i<n;i++)
        scanf("%d,",&a[i]);
    int x;
    scanf("%d",&x);
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;
    while(low<=high)
    {
        if(a[mid]==x)
        {
            printf("%d",mid+1);
            break;
        }
        else if (a[mid]<x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high)/2;
    }
}