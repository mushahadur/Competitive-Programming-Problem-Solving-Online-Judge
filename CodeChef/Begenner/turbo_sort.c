#include<stdio.h>
int main()
{
  int t,n[100000],j,i,min,swap,c,k;
  scanf("%d",&t);
  for(i=0; i<t; i++)
  {
      scanf("%d",&n[i]);
  }
  for(j=0; j<t; j++)
  {
    for (k=0; k<t-j; k++)
    {
      if (n[k] > n[k+1])
      {
        swap       = n[k];
        n[k]   = n[k+1];
        n[k+1] = swap;
      }
    }
  }
  for (c = 1; c <= t; c++)
     printf("%d\n", n[c]);

    return 0;
}
