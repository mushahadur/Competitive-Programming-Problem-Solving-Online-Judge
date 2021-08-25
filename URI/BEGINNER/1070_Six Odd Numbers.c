#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);

    if(a%2 == 0)
    {
        int a=a+1 ;
        for(i=a; i<6; i+2)
        {
            printf("%d\n",i);
        }

    }
    else
    {

        for(i=a; i<6; i+2)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}
