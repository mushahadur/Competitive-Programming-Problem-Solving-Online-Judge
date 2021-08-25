#include<stdio.h>
int main()
{
    int num,sum=0,t,r;
    scanf("%d",&t);
    while(t--)
   {
    scanf("%d",&num);
    while(num !=0)
    {
        r = num%10;
        sum = sum+r;
        num = num/10;
    }
    printf("%d\n",sum);
    sum = 0;
   }
    return 0;
}
