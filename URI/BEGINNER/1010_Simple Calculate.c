#include <stdio.h>

int main() {
int a,a1,b,b1;

float c,c1,d,e;
scanf("%d%d%f",&a,&b,&c);
scanf("%d%d%f",&a1,&b1,&c1);
d=b*c;
e=b1*c1;
printf("VALOR A PAGAR: R$ %.2f\n",d+e);
    return 0;
}

