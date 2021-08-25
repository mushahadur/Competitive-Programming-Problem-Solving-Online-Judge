#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
    char arr[10][6]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a; i<=b; i++)
    {
        if(i<10)
        {
            printf("%s\n",arr[i]);
        }
        else
        {
            if(i%2==0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

return 0;
}
