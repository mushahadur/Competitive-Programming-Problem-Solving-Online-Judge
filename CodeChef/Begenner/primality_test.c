#include<stdio.h>
int main()
{
    int t,n,i,flag = 0,m=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=n/2;
        for(i=2; i<=m; i++)
        {
            if(n%i==0)
            {
                printf("no\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("yes\n");
    }
    return 0;
}
