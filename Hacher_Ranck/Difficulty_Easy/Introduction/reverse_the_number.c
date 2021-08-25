/// Runtime Error
#include <stdio.h>
int main()
{
    int t,n,r,sum=0,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=n; n!=0; i++)
        {
            r=n % 10;
            sum=sum*10+r;
            n=n/10;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

