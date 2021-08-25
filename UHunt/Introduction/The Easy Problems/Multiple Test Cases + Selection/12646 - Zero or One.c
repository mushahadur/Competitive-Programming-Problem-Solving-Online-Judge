#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c) !=EOF)
    {

        if(!(a==b) && !(a==c) && (b==c))
        {
            printf("A\n");
        }
        else if(!(a==c) && !(b==c) && (a==b) )
        {
            printf("C\n");
        }

        else if(!(a==b) && !(b==c) && (a==c) )
        {
            printf("B\n");
        }
        else
        {

            printf("*\n");
        }
    }


        return 0;
    }
