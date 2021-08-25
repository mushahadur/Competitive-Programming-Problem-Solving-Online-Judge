#include<stdio.h>
int main()
{
    int i,j,n,t,temp,res;
    scanf("%d",&t);
    for(i = 0; i<t; i++)
    {
        scanf("%d",&n);
    temp = (((((n*567)/9)+7492)*235)/47)-498;
       // printf("%d\n",temp);
        for(j =0; j<2; j++)
        {
            res = temp % 10;
            temp = temp/10;
        }
        printf("%d\n",abs(res));
    }

    return 0;
}
