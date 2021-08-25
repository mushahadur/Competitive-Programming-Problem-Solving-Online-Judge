#include <math.h>
#include<stdio.h>

int main()
{
    int n,t,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum = sqrt(n);
        printf("%d\n",sum);
    }

    return 0;
}
