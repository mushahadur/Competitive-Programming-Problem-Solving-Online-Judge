#include<stdio.h>
int main()
{
   int t,n;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       if(n<10)
       {
           printf("Thanks for helping Chef!\n");
       }
       else
       {
           printf("%d\n",-1);
       }
   }
    return 0;
}
