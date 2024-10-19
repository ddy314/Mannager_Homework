/*输入由0和1组成的字符串(二进制串)，把二进制串转换为十进制整数后输出。
 *测试用例中的串只包含0和1字符，所以学生不用检查字符串是否包含有非法字符。
 *合法的二进制串包括：1101100、0010等。
例如：
输入：0010
输出：2
输入：10011
输出：19*/
#include <math.h>
#include<stdio.h>

int main(void)
{
 char c[100];
 scanf("%s", &c);
 int digit = 0;
 int result = 0;
 for (int i = 1; c[i] != '\0'; i++)
 {
  digit++;
 }
 for (int i = 0; c[i] != '\0'; i++)
 {
  if (c[i] == '1')
   result = result + pow(2, digit - i);
 }
 printf("%d", result);
}

//another way
/*#include <stdio.h>

int main(void) {
char c[100]; // Define a char array to store the input string
scanf("%s", c); // Read the input string

int decimal = 0;
for (int i = 0; c[i] != '\0'; i++) {
decimal = decimal * 2 + (c[i] - '0'); // what fuck is this??
}

printf("%d\n", decimal); // Output the decimal value
return 0;
}*/
