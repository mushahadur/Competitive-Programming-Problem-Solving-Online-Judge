#include<stdio.h>
int main()
{
    int num, num2,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&num,&num2);
    printf("%d\n",num&num2);
    printf("%d\n",num|num2);
    printf("%d\n",num^num2);
    }
    return 0;
}
