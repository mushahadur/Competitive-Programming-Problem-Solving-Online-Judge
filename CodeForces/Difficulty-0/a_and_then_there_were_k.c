#include<stdio.h>
int main()
{
    int t,n,i,k,a=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
            a=n;
        for(i=1; i<n; i++)
        {
            k = n&(n-i);
            if(k==0)
            {
               printf("%d\n",a);
               break ;
            }
            a--;
        }
    }

    return 0;
}
