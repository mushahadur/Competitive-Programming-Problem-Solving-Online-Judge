#include<stdio.h>
int main()
{

   int a,b;
   scanf("%d %d", &a,&b);
   if(a>b)
   {
       printf("O JOGO DUROU %d HORA(S)\n",(24+b)-a);
   }
   else if(a<b)
   {
     printf("O JOGO DUROU %d HORA(S)\n",b-a);
   }
   else if(a==0 && b==0)
    printf("O JOGO DUROU 24 HORA(S)\n");


    return 0;
}
