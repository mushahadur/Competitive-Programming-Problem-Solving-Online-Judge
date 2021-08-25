#include<stdio.h>
int main()
{
    int a,b;
    double c,d;
    scanf("%d%d",&a,&b);
    c = (a-b)/3;
    d = c+b;
    //cout << c;
    printf("%lf\n",c);
    printf("%lf\n",d);

    return 0;
}
