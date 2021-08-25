#include<stdio.h>
int main()
{
    int t,n,i,j,k=1,arr[31];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (j=0; j<n; j++)
        {
            if (arr[0] < arr[j])
            {
                arr[0] = arr[j];
            }
        }
        printf("Case %d: %d\n",k,arr[0]);
        k++;
    }

    return 0;
}
