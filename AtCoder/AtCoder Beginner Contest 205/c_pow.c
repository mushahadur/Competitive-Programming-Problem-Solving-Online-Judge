#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,i,p,w,m;
    scanf("%ld%ld%ld",&a,&b,&c);
    m = abs(c);
    p=pow(a,c);
    w=pow(b,c);
    if(p>w)
    {
        printf(">\n");
    }
    else if(p<w)
    {
        printf("<\n");
    }
    else
    {
        printf("=\n");
    }
    return 0;
}
