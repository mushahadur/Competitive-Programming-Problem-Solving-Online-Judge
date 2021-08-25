#include<stdio.h>
int main()
{
    int t,a,b;
    long long int max,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        max = a+b;
        if(a>b)
        {
          min = a;
        }
        else

        {
          min = b;
        }
        printf("%lld %lld\n",min,max);

    }

    return 0;
}
