#include<stdio.h>
int main()
{
    int  t,n,sum=0,r,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; n!=0; i++)
        {
            r = n % 10;
            sum= sum + r;
            n = n / 10;
        }

        printf("Sum of digits of %d\n",sum);
    }

    return 0;
}
