#include<stdio.h>
int main()
{
   int j,i;
   char s[4],temp;
   for(i=0; i<3; i++)
   {
       scanf("%c",&s[i]);
   }
   temp = s[0];
   s[0] = s[1];
   s[1] = s[2];
   s[2] = temp;
   for(j=0; j<3; j++)
   {
       printf("%c",s[j]);
   }


    return 0;
}
