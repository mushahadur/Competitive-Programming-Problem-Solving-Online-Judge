#include<stdio.h>
int main()
{
    int t,n,i,k=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            k++;
            k = n-1;
            if(n==1)
            {
                k++;
            }
        }
        printf("%d\n",k);
        k=0;
    }

    return 0;
}
