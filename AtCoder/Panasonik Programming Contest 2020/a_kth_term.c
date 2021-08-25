#include<stdio.h>
int main()
{
   int s,t,a[33] = {1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
    scanf("%d",&t);
    s=a[t-1];
    printf("%d\n",s);
    return 0;
}
