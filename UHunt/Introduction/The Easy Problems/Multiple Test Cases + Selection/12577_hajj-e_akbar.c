#include<stdio.h>
int main()
{
    int i=1,d;
    char str1[11],str2[]="Hajj";
    while(scanf("%s",&str1), !(str1[0]=='*'))
    {
        d=strcmp(str1,str2);

        if(d==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
        {
          printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }

    return 0;
}



