#include<stdio.h>
int main()
{
   int a,b,sum,m,*p1,*p2;
   scanf("%d%d",&a,&b);
    p1 = &a;
    p2 = &b;
    sum = *p1+*p2;
    m = abs(*p1-*p2);
    printf("%d\n",sum);
    printf("%d\n",m);

    return 0;
}
