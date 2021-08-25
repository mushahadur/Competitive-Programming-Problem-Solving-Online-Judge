#include<stdio.h>
int main()
{
    int t,num,i,j,arr[1000],sum1=0;
    char s,c='b';
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%*c");
    scanf("%c",&s);
    if(s == 'b')
    {
     for(j=0; j<t; j++)
    {
        if((j%2) == 0)
        {
          sum1 = sum1+arr[j];
        }

    }
    }
    else
    {
        for(j=0; j<t; j++)
    {
        if((j%2) == 1)
        {
          sum1 = sum1+arr[j];
        }

    }
    }
    printf("%d\n",sum1);

    return 0;
}

/// code pest kora jai na .... submit kora jai na.
