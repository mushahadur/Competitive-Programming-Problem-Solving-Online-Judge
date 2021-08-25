#include<stdio.h>
int main()
{
    int t,s1,s2,s3,s4,max_1st_num,min_1st_num,max_2nd_num,min_2nd_num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
        if(s1<s2 )
        {
            max_1st_num = s2;
            min_1st_num = s1;
        }
        else
        {
            max_1st_num = s1;
            min_1st_num = s2;
        }
        if(s3<s4 )
        {
            max_2nd_num = s4;
            min_2nd_num = s3;
        }
        else
        {
            max_2nd_num = s3;
            min_2nd_num = s4;
        }
        if(max_1st_num>min_2nd_num && max_2nd_num>min_1st_num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
        return 0;

}
