///  Runtime Error ..
#include<stdio.h>
int main()
{
    int n,k;
    long int a[111],i,j,c=0;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&a[i]);
    }
    for(j=0; j<n; j++)
    {
        if((a[j]%k) ==0)
        {
            c++;
        }
    }
    printf("%d\n",c);

    return 0;
}
