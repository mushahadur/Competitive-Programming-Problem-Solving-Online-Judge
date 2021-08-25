
#include<stdio.h>
int main()
{

char ch;
char s[22];
char sen[22];
scanf("%c %s %[a-zA-Z .?!]s",&ch,&s,&sen);
printf("%c\n%s\n%s\n",ch, s, sen);

    return 0;
}
