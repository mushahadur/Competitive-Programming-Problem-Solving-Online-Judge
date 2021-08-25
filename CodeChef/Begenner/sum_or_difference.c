#include<stdio.h>
int main()
{
   int a,b,sub,sum;
   scanf("%d%d",&a,&b);
   if(a>b)
   {
       sub = a-b;
       printf("%d\n",sub);
   }
   else
   {
       sum = a+b;
       printf("%d\n",sum);
   }

    return 0;
}
