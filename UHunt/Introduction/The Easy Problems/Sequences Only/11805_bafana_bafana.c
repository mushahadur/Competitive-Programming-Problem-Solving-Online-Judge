#include<stdio.h>
int main()
{
    int T,N,K,P,i=1;
    scanf("%d",&T);
    while(T--)
    {
       scanf("%d%d%d",&N,&K,&P);
       if(N==(K+P))
       {
           printf("Case %d: %d\n",i,N);
       }
       else if(N==K)
       {
           printf("Case %d: %d\n",i,N);
       }
       else if(N>(K+P))
       {
           printf("Case %d: %d\n",i,(N-(K+P)));
       }
       else{
        printf("Case %d: %d\n",i,((K+P)-N));
       }
       i++;
    }

    return 0;
}
