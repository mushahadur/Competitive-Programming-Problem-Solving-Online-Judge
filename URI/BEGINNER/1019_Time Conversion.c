#include<stdio.h>
int main()
{
    int a,h=0,m=0,s=0;

    scanf("%d",&a);
    h=a/3600;
    a=a%3600;
    m=a/60;
    s=a%60;
    printf("%d:%d:%d\n",h,m,s);
   return 0;
}

