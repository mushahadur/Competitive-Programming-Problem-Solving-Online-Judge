#include<stdio.h>
int main()
{


    int n,h,f,t,ten,five,two,o,a;
    scanf("%d",&n);
    a=n;
    h=n/100;
    n=n%100;

    f=n/50;
    n=n%50;

    t=n/20;
    n=n%20;

    ten=n/10;
    n=n%10;
    five=n/5;
    n=n%5;

    two=n/2;
    n=n%2;
    o=n/1;
    printf("%d\n",a);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",h,f,t,ten,five,two,o);



    return 0;
}
