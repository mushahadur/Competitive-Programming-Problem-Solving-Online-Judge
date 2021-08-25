#include<stdio.h>
#include<limits.h>
int main()
{
    int t,a,b,c,arr[3],ar[3],i,j,min;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;

        for(i=0; i<3; i++)
        {
            min = 1000000;
            for(j=i; j<3; j++)
            {
                if(arr[j]<min)
                {
                   min = arr[j];
                }
            }
            ar[i]= min;
        }
        printf("%d\n",ar[1]);
        printf("%d\n",ar[0]);
    printf("%d\n",ar[1]);
    printf("%d\n",ar[2]);
    }
    return 0;
}

