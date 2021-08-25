#include<stdio.h>
int main()
{
   int a,b,p,q;
   float c,d,x,y;
   scanf("%d%d",&a,&b);
    p=a+b;
    q=a-b;
    printf("%d %d\n",p,q);

    scanf("%f%f",&c,&d);
    x=c+d;
    y=c-d;
    printf("%.1f %.1f\n",x,y);


    return 0;
}
