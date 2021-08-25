#include <stdio.h>
int main()
{
    double a,b,c;
    char name[20];
    scanf("%s", &name);
    scanf("%lf%lf",&a,&b);
    c = a+(b*(float)0.15);
    printf("TOTAL = R$ %.2lf\n",c);
    return 0;
}
