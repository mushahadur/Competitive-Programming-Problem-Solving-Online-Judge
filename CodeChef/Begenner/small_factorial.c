#include<stdio.h>
int main()
{
    int t,n,i;
    long long int a[21];
    scanf("%d",&t);
    a[0] = 1;
    for(i=1; i<21; i++)
    {
        a[i] = a[i-1]*i;
    }
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
    return 0;
}
