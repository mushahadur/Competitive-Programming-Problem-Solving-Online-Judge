#include <stdio.h>

int main(void) {
  int a;
  float res,b;
  scanf("%d%f",&a,&b);
  if(a%5==0)
  {
      res=(float)a+0.5;
      if(res<=b)
      {
          printf("%.2f\n",b-res);
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
