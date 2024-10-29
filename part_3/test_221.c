/*下面程序的功能是将字符串s中的每个字符按升序的规则插到数组a中, 字符串a已排好序。*/
#include<stdio.h>

void main()

{
    char a[20] = "cehiknqtw"; char s[] = "fbla";
    int i, k, j;
    for (k = 0; s[k] != '\0'; k++)
    {
        j = 0;
        while (s[k] >= a[j] && a[j] != '\0') j++;
            for(i = 12;i>j;i--)
                a[i]=a[i-1];
        a[j] = s[k];
    }
    puts(a);
}