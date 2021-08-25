
#include <stdio.h>
int main()
{

    char s[1111];
    while(scanf("%[^\n]s",&s)!=EOF){


           printf("%s\n", s);
           scanf("%*c");
    }




    return 0;
}


