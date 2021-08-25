#include<stdio.h>
int main()
{
   int a,b,c,sum;
   scanf("%d %d %d",&a,&b,&c);
   if(a>=b)
   {
       if(b>=c)
       {
           sum = a+b;
       }
       else
       {
           sum = a+c;
       }
   }
   else
   {
       if(a>=c)
       {
           sum = a+b;
       }
       else{sum = b+c;}
   }


   else if(c>=b)






    printf("%d\n",sum);

    return 0;
}
