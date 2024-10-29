/*下面程序的功能是删除字符串s中的空格*/
#include<stdio.h>

void main()

{

    int i= 0, j= 0;

    char s[100] = {0};

    scanf("%[^\n]",s);

    for (i = 0, j = 0; s[i] != '\0'; i++)

    {
        if(s[i]!=' ')
        {
            s[j]=s[i];
            j++;
        }

    }

    s[j] = '\0';

    printf("%s", s);

}