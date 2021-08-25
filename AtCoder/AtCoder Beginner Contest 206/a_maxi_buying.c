#include<stdio.h>
int main()
{
    int n,d;
    float s;
    scanf("%d",&n);
    s = n*1.08;
    d=s;
    if(206>d)
    {
        printf("Yay!\n");
    }
    else if(206 == d)
    {
       printf("so-so\n");
    }
    else if(206 < d)
    {
       printf(":(\n");
    }

    return 0;
}
