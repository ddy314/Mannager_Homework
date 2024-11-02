/*接受若干非负整数，当个数超过10个或者遇到负数时停止接受，将这几个整数按升序排列输出，并且奇数在前，偶数在后。
输出要求，每个数字后输出空格与其他数字隔开，最后一个数字后也有空格
例如，输入的10个数是：10 9 8 7 6 5 4 3 2 1
则输出：1 3 5 7 9 2 4 6 8 10

如输入：2 3 4 5 -1
输出：3 5 2 4 */
#include <stdio.h>
void sort (int *ar,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
}
int main()
{
    int arr1[10];
    int arr2[10];
    int temp;
    int i = 0;
    int j = 0;
    while(scanf("%d",&temp)==1)
    {
        if(temp<0)
            break;
        if(temp%2!=0)
            arr1[i++]=temp;
        else
            arr2[j++]=temp;
        if (getchar()=='\n')
            break;
    }
    sort(arr1,i);
    sort(arr2,j);
    for(int m = 0;m<i;m++)
        printf("%d ",arr1[m]);
    for(int m = 0;m<j;m++)
        printf("%d ",arr2[m]);
}