#include<stdio.h>
int main()
{
    short a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) !=EOF)
    {
        if(a<c && b<c)
        {
            printf("Props win!\n");
        }
        else
        {
           printf("Hunters win!\n");
        }
    }

    return 0;
}
