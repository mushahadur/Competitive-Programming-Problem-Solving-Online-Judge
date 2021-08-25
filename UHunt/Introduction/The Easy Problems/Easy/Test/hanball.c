#include<stdio.h>
int main()
{
    int n,m,i,j,arr[111],k=0,r,p=0,t=1;

    while(scanf("%d%d",&n,&m) !=EOF)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&arr[j]);
                if(arr[j]!=0)
                {
                    k++;
                }
                else
                {
                    r=0;
                }
            }
            if(m==k)
            {
                p++;
            }
            else
            {
                r=0;
            }
        k=0;
        }
        if(p!=0)
        {
            printf("%d\n",p);
        }
        else
        {
            printf("%d\n",r);

        }
        p=0;
    }

    return 0;
}

/*

#include<stdio.h>
int main()
{
    int n,m,i,j,arr[111],k=0,r,p=0,t=1;


    while(scanf("%d%d",&n,&m) !=EOF)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&arr[j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                 printf("%d  ",arr[j]);
                 printf("\n");
                if(arr[j]!=0)
                {
                    k++;
                }
                else
                {
                    r=0;
                }

            }
            printf("case : %d :- %d   %d\n",t++,k,m);
            if(m==k)
            {
                p++;
            }
            else
            {
                r=0;
            }
        k=0;
        }
        if(p!=0)
        {
            printf("%d\n",p);
        }
        else
        {
            printf("%d\n",r);

        }

    }

    return 0;
}


*/

