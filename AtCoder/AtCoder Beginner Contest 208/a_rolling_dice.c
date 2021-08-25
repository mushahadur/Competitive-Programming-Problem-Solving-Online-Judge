#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum = a*6;
    if(b<=sum && a<=b)
    {
        printf("Yes\n");
    }
    else

    {
       printf("No\n");
    }

    return 0;
}
