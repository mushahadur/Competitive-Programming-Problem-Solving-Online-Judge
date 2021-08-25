#include <stdio.h>

int main() {
  int a[5],i,max=-999,min=99999,t;
  scanf("%d",&t);

  while(t--)
  {
      max = -99999;
      min = 999999;
      scanf("%d%d%d",&a[0],&a[1],&a[2]);

      for(i=0;i<3;i++)
      {
          if(max<a[i])
          {
              max=a[i];
          }
          if(min>a[i])
          {
              min=a[i];
          }
      }
      for(i=0;i<3;i++)
      {
          if(a[i]!=max && a[i]!=min)
          {
              printf("%d\n",a[i]);
          }
      }

  }

  return 0;
}
