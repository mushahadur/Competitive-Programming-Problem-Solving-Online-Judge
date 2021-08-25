
#include<stdio.h>
int main()
{

    float a,t,p;
    scanf("%f",&a);

    if(a>=0 && a<=400.00)
    {
        p = a*(float)0.15;
        t = a+p;

        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 15 %%\n");
          getchar();
    }
    else if(a>=400.01 && a<=800.00)
    {
        p = a*(float)0.12;
        t = a+p;

        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 12 %%\n");
        getchar();

    }
    else if(a>=800.01 && a<=1200.00)
    {
        p = a*(float)0.10;
        t = a+p;

        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 10 %%\n");
          getchar();

    }
    else if(a>=1200.01 && a<=2000.00)
    {
        p = a*(float)0.07;
        t = a+p;

        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 7 %%\n");
          getchar();

    }

    else
    {


        p =a*(float)0.04;
        t = a+p;

       printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",p);
        printf("Em percentual: 4 %%\n");
          getchar();
    }


    return 0;
}


