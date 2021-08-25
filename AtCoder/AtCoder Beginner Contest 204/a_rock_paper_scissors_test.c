#include<stdio.h>
int main()
{
   int x,y;
   scanf("%d %d",&x,&y);

    if((x=0) && (y=1))
   {
       printf("%d\n",2);
   }
   else if((x=0) && (y=2))
   {
       printf("%d\n",1);
   }
   else if((x=1) && (y=0))
   {
       printf("%d\n",2);
   }
    else if((x=1) && (y=2))
   {
       printf("%d\n",0);
   }
    else if((x=2) && (y=0))
   {
       printf("%d\n",1);
   }
    else if((x=2) && (y=1))
   {
       printf("%d\n",0);
   }
   else{
    printf("pok");
   }
     if(x == y)
   {
       printf("%d\n",x);
   }

    return 0;
}

