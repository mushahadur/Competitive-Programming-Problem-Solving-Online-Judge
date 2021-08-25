/// Print of single integer ...

#include<stdio.h>
int main()
{
    int num,temp,res,i,sum=0;
    scanf("%d",&num);
    temp = num;
    for(i =0; i<2; i++)
    {
        res = temp % 10;
        temp = temp/10;
    }
    printf("Print of single integer : %d\n",res);

    return 0;
}
