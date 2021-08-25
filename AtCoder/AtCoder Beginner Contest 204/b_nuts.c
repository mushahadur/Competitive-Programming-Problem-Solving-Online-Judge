#include<stdio.h>
int main()
{
  int t,i,j,arr[1000],take[1000],temp=0;
  scanf("%d",&t);
  for(i=0; i<t; i++)
  {
     scanf("%d",&arr[i]);
  }
  for(j=0; j<t; j++)
  {
       if(arr[j]>10)
       {
           take[j] = arr[j]-10;
           temp = temp+take[j];
       }
  }
  printf("%d\n",temp);
    return 0;
}
