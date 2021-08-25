#include<stdio.h>
int main()
{
    int n,k,i,c=0;
    long int arr[1000];
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
        if((arr[i]%k)==0)
        {
            c++;
        }
    }

     printf("%d\n",c);

    return 0;
}
