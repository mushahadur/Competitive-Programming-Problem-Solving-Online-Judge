#include<stdio.h>
int main()
{
    long int n,s,sum=0,sum2;
    int k,w,i;
    scanf("%d%ld%d",&k,&n,&w);
    for(i=1; i<=w; i++)
    {
        sum+=i*k;
    }
    if(sum>n){
    sum2 = sum-n;
    printf("%d\n",sum2);
    }
    else
    {
      printf("%d\n",0);
    }
    return 0;
}
