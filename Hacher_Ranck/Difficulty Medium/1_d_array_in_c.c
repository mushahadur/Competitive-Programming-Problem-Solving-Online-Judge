#include<stdio.h>
int main()
{
   int arr[1000],n,i,j,sum=0;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }
    for(j=0; j<n; j++)
    {
        sum = sum+arr[j];
    }
    printf("%d\n",sum);

    return 0;
}
