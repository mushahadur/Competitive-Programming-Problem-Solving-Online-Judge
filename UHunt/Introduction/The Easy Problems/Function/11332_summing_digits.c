#include<stdio.h>
void summing();
int main()
{
    int t,n,sum=0,rr;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        summing(n);
        //printf("%d\n",rr);
    }
    return 0;
}

void summing(int n)
{

    /*
    int sum=0,r;
    while(n !=0)
    {
         r = n%10;
         sum = sum+r;
         n = n/10;
    }
    printf("%d\n",sum);
    if(sum/10 != 0)
    {
       int sums =0,r;
       while(sum !=0)
    {
         r = sum%10;
         sums = sums+r;
         sum = sum/10;
    }
    printf("%d\n",sums);
    }
    */

    int i,sum=0,r,sums;
    for(i=0; i<n; i++)
    {
        if(n/10 != 0)
        {
        while(n !=0)
        {
            r = n%10;
            sum = sum+r;
            n = n/10;
        }
        sums = sum;
        }
        printf("%d\n",sums);
    }
}
