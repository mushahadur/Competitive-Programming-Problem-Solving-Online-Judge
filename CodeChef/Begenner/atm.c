#include<stdio.h>
int main()
{
    int a;
    float b,check;
    scanf("%d%f",&a,&b);
    if(a%5 ==0)
    {
        check = (float)a+0.5;
        if(check<=b)
        {
          printf("%.2f\n",b-check);
        }
        else
        {
          printf("%.2f\n",b);
        }
    }
    else
    {
        printf("%.2f\n",b);
    }
    return 0;
}
