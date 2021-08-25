#include<stdio.h>
int main()
{
 int num1,num2,j,i;

 long long int sum,n1=1,n2=1;
  while(scanf("%d%d",&num1,&num2) !=EOF){
    for(i=1;i<=num1;i++){
      n1=n1*i;
  }
   for(j=1;j<=num2;j++){
      n2=n2*j;
  }
    printf("%lld\n",n1+n2);
    n1=1;
    n2=1;
  }
return 0;
}
