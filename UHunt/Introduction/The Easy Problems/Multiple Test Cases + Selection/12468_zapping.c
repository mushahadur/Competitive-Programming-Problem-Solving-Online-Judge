#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b), !((a==-1) && (b==-1)))
    {
        printf("%d\n",abs(a-b));
    }

    return 0;
}


