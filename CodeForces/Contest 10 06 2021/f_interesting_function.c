#include<stdio.h>
int main()
{
    int l,r,k,sub=0;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d  %d",&l,&r);
        sub = r-l;
        if(sub==l)
        {
            sub=sub+1;
            printf("%d\n",sub);
        }
        else
        {
          printf("%d\n",sub);
        }

    }

    return 0;
}
