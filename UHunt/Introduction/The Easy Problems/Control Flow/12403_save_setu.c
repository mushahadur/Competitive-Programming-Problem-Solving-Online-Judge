#include<stdio.h>
int mian()
{
    char str[11],str2[]="report";
    int num,t,n,sum=0;
//    while(scanf("%d",&t), !EOF)
//    {
        scanf("%s",&str);
        //scanf("%*c");
        scanf("%d",&num);
        sum = sum+num;
        n = strcmp(str,str2);
        if(n==0)
        {
            printf("%d\n",sum);
        }
        else{

        }

   // }


    return 0;
}
