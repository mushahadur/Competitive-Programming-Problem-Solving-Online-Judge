#include <stdio.h>
int main() {

  float a,b,c;
  scanf("%f%f%f",&a,&b,&c);

  //1
  printf("TRIANGULO: %.3f\n",(a*c)*.5);
   printf("CIRCULO: %.3f\n",(c*c)*3.14159);
   printf("TRAPEZIO: %.3f\n",.5*(a+b)*c);
   printf("QUADRADO: %.3f\n",b*b);
   printf("RETANGULO: %.3f\n",(a*b));

    return 0;
}
