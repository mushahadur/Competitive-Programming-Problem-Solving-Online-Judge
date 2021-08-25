/// 11614 Etruscan Warriors Never Play Chess
#include<stdio.h>
#include<math.h>
int main()
{
    long int x,n,m,k,i;
    scanf("%ld",&k);
    for(i=0; i<k; i++)
    {
        scanf("%ld",&n);

            m=(1+8*n)-1;
            x=sqrt(m)/2;
            printf("%ld\n",x);

    }
    return 0;
}
