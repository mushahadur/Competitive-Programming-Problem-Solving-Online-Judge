#include<stdio.h>
int main()
{
    int t,a,b,sum;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&a,&b);
        while(a!=0)
        {
            sum = (b*(b+1))/2;
            a--;
            b = sum;
        }
            printf("%d\n",sum);
    }
    return 0;
}

