/*约瑟夫游戏的主要问题：
输入：总人数 N
     剩余人数 K
     间隔人数 M
其中的间隔人数为实际间隔的人数，如果剩余人数为0，则输出0。
比如，输入8 4 3（空格分隔输入）
     输出1,3,6,7（逗号分隔输出）
输入数据错误时，输出ERROR
分析过程如下：
1、初始状态  1 2 3 4 5 6 7 8
2、间隔三个删除， 4,8
3、余下人数大于4，流程继续删除 5,2
4、现在剩下人数4人=K，剩余输出余下的人有：1,3,6,7*/
#include <stdio.h>
int main()
{
     int N,K,M;
     if (scanf("%d %d %d", &N, &K, &M) != 3
          || N <= 0 || K < 0 || M < 0)
          printf("ERROR");
     else if (K == 0)
          printf("0");
     else
     {
          int arr[10];
          for(int i=0;i<N;i++)
               arr[i] = i + 1;
          arr[N] = -2;
          int count = 0;
          int del = 0;
          while(1)
          {
               //统计剩余人数
               int sum = 0;
               for (int i = 0; i < N; i++)
               {
                    if(arr[i]!=-1)
                         sum++;
               }
               //退出循环条件
               if (sum <= K || sum == 0)
                    break;
               //删减计数判断
               for (int i = 0; i < N && del != N - K; i++)
               {
                    if(arr[i]!=-1)
                         count++;
                    //删去元素
                    if (arr[i + 1] == -2 && count != M + 1)
                    {
                         i = -1;
                    }
                    if(count==M+1)
                    {
                         arr[i] = -1;
                         count = 0;
                         del++;
                    }
               }
          }
          int first = 1;
          for (int i = 0; i < N; i++)
          {
               if (arr[i] != -1)
               {
                    if (!first)
                    {
                         printf(",");
                    }
                    printf("%d", arr[i]);
                    first = 0;
               }
          }
     }
}


