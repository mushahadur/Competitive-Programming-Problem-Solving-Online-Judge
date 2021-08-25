#include<stdio.h>
int main()
{
    int t,i=0;
    float length,width,depth,weight,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f%f",&length,&width,&depth,&weight);
        sum = length+width+depth;
        if(sum<=125.00 && weight<=7.00)
        {
            printf("%d\n",1);
            i++;
        }
        else if(length==56.00 && width==45.00 && depth==25.00 && weight<=7.00)
        {
            printf("%d\n",1);
            i++;
        }

        else
        {
          printf("%d\n",0);
        }

    }
    printf("%d\n",i);

    return 0;
}

