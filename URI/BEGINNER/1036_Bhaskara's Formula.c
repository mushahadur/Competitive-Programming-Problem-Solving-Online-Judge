#include<stdio.h>
int main()
{

    double a,b,c,x1,x2;
    scanf("%lf%lf%lf",&a,&b,&c);
    x1 = (-b+sqrt((b*b)+4*a*c))/2*a;
    x2 = (-b-sqrt((b*b)+4*a*c))/2*a;
    printf("%.4lf\n",x1);
     printf("%.4lf\n",x2);

    return 0;
}
