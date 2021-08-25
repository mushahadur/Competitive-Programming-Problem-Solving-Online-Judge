#include<stdio.h>
int main()
{
    int n,take,check,check2,check3,check4;
    scanf("%d",&n);

    if(n>=5)
    {
        take = n/5;
        check = n%5;
        if(check<=4)
        {
            take = take+(check/4);
            check2 = check%4;
            if(check2<=3)
            {
                take = take+(check2/3);
                check3 = check2%3;
                if(check3<=2)
                {
                    take = take+(check3/2);
                    check4 = check3%2;
                    if(check4>=1)
                    {
                        take = take+check4;
                    }
                }
            }
        }
    }
    else if(n>=4)
    {
        take = n/4;
        check2 = check%4;
        if(check2<=3)
        {
            take = take+(check2/3);
            check3 = check2%3;
            if(check3<=2)
            {
                take = take+(check3/2);
                check4 = check3%2;
                if(check4>=1)
                {
                    take = take+check4;
                }
            }
        }

    }
    else if(n>=3)
    {
        take = n/3;
        check3 = check2%3;
        if(check3<=2)
        {
            take = take+(check3/2);
            check4 = check3%2;
            if(check4>=1)
            {
                take = take+check4;
            }
        }
    }
    else if(n>=2)
    {
        take = n/2;
            check3 = check2%3;
            if(check3<=2)
            {
                take = take+(check3/2);
                check4 = check3%2;
                if(check4>=1)
                {
                    take = take+check4;
                }
            }
    }
    else if(n>=1)
    {
        take = n;
    }
    printf("%d\n",take);

    return 0;
}
