#include<stdio.h>
int main()
{
    int t,q,p;
    long double s,s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&q,&p);
        if(q>1000)
        {
            s = q*(0.1);
            s2 = q-s;
            printf("%.6Lf\n",s2*p);
        }
        else
        {
           s1=q*p;
         printf("%.6Lf\n",s1);
        }
    }
    return 0;
}
