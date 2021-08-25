#include<stdio.h>
int main()
{

    int a,b[111];
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b[a]);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\n",b[i]);
    }


    return 0;
}
