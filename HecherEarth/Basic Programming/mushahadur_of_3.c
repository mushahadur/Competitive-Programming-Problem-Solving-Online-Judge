#include<stdio.h>
int main()
{
   int t;
   long long int n,mul;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%lld",&n);
       mul = n*3;
       printf("%lld\n",mul);
   }


    return 0;
}
