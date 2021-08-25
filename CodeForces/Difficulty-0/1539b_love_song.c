#include<stdio.h>
int  main()
{
   int n,q,l,r,i,sum[100002],sum1;
   char s[100002];
   scanf("%d%d",&n,&q);
   scanf("%s",s);
   sum[0] = 0;
   for(i=0; i<n; i++)
   {
      sum[i+1] = sum[i]+s[i]-96;
   }
   while(q--)
   {
       scanf("%d%d",&l,&r);
       sum1 = sum[r]-sum[l-1];

       printf("%d\n",sum1);

   }
    return 0;
}
