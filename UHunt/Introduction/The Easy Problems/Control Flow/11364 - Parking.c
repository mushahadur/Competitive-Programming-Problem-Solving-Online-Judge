#include<stdio.h>
int main()
{
   int t,n,i,a[100];
   scanf("%d",&t);
   while(t--){

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d \n",t);
   }

    return 0;
}
