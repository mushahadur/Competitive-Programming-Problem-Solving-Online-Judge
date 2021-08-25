#include<stdio.h>
int main()
{
   double a,b,c;
   scanf("%lf %lf %lf",&a,&b,&c);


   if(0<a && 0<b && 0<c )
   {
       if(a >= (b+c))
       {
           printf("NAO FORMA TRIANGULO\n");

            if((a*a) == ((b*b)+(c*c)))
       {
           printf("TRIANGULO RETANGULO\n");
       }

       else if((a*a) > ((b*b)+(c*c)))
       {
           printf("TRIANGULO OBTUSANGULO\n");
       }

       else if((a*a) < ((b*b)+(c*c)))
       {
           printf("TRIANGULO ACUTANGULO\n");
       }

       else if(a==b && b==c)
       {
           printf("TRIANGULO EQUILATERO\n");
       }

       else if(a== b && a!=c && b!=c || a== c && a!=b && b!=c || a== c && a!=b && b!=c )
       {
         printf("TRIANGULO ISOSCELES\n");
       }



       }

       else if((a*a) == ((b*b)+(c*c)))
       {

                if(a >= (b+c))
       {
           printf("NAO FORMA TRIANGULO\n");
       }

           printf("TRIANGULO RETANGULO\n");


       else if((a*a) > ((b*b)+(c*c)))
       {
           printf("TRIANGULO OBTUSANGULO\n");
       }

       else if((a*a) < ((b*b)+(c*c)))
       {
           printf("TRIANGULO ACUTANGULO\n");
       }

       else if(a==b && b==c)
       {
           printf("TRIANGULO EQUILATERO\n");
       }

       else if(a== b && a!=c && b!=c || a== c && a!=b && b!=c || a== c && a!=b && b!=c )
       {
         printf("TRIANGULO ISOSCELES\n");
       }


       }

       else if((a*a) > ((b*b)+(c*c)))
       {
           printf("TRIANGULO OBTUSANGULO\n");
       }

       else if((a*a) < ((b*b)+(c*c)))
       {
           printf("TRIANGULO ACUTANGULO\n");
       }

       else if(a==b && b==c)
       {
           printf("TRIANGULO EQUILATERO\n");
       }

       else if(a== b && a!=c && b!=c || a== c && a!=b && b!=c || a== c && a!=b && b!=c )
       {
         printf("TRIANGULO ISOSCELES\n");
       }
   }



    return 0;
}
