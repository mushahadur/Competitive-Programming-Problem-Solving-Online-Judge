#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        for(j=1; j<=a; j++)
        {
            printf("%d  ",a);

        }
        a--;
        printf("\n");
    }

    return 0;
}
