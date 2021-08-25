#include<stdio.h>
int main()
{
    int k,i;
    long int n,num,test;
    scanf("%ld %d",&n,&k);
    for(i=0; i<k; i++)
    {
        test = n%10;
        if(test == 0)
        {
           num = n/10;
           n=num;
        }
        else
        {
            n--;
            num = n;
        }
    }
    printf("%ld\n",num);

    return 0;
}
