#include<stdio.h>
int main()
{
   int a,b,c,t,sum=0;
   scanf("%d",&t);
   while(t--)
   {
     scanf("%d%d%d",&a,&b,&c);
     if(c<41)
     {
         sum = a*b*c;
         printf("%d\n",sum);
     sum =0;
     }

   }


    return 0;
}
