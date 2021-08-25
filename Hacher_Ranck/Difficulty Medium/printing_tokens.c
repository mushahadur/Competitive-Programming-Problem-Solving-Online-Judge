#include<stdio.h>
int main()
{
   char s[1000];
   scanf("%[\n]s",&s);
   printf("%s\n",s);
   scanf("%*s");
   printf("%s\n",s);

    return 0;
}
