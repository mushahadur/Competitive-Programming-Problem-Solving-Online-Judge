#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i=1;
    char str[14];
    char str1[]="HELLO",str2[]="HOLA",str3[]="HALLO",str4[]="BONJOUR",str5[]="CIAO",str6[]="ZDRAVSTVUJTE";
     while(scanf("%s",&str), !(str[0]=='#'))
    {
        a=strcmp(str,str1);
        b=strcmp(str,str2);
        c=strcmp(str,str3);
        d=strcmp(str,str4);
        e=strcmp(str,str5);
        f=strcmp(str,str6);

        if(a==0)
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(b==0)
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(c==0)
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(d==0)
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(e==0)
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(f==0)
        {
            printf("Case %d: RUSSIAN\n",i);
        }

        else
        {
          printf("Case %d: UNKNOWN\n",i);
        }
        i++;
    }

    return 0;
}
/*
HELLO
HOLA
HALLO
BONJOUR
CIAO
ZDRAVSTVUJTE

Case 1: ENGLISH
Case 2: SPANISH
Case 3: GERMAN
Case 4: FRENCH
Case 5: ITALIAN
Case 6: RUSSIAN
*/
