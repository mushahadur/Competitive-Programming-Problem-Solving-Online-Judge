#include<stdio.h>
int main()
{
    char str[102],str2[102];
    scanf("%s",str);
    scanf("%*c");
    scanf("%s",str2);
    strrev(str);
    if(str==str2)
    {
        printf("YES\n");
    }
    else
    {
       printf("NO\n");
    }

    return 0;
}
