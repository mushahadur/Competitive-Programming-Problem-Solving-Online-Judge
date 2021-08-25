#include<stdio.h>
int main()
{
    int t,a,b,c,result;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d %d",&a,&b,&c);
    result=(b-a)/c;
    printf("%d\n",result);
    }
    return 0;
}
