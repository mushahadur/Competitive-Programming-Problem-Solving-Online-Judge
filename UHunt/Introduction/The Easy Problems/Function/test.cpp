
#include<bits/stdc++.h>
using namespace std;
int sum_of_digit(int num);
int summing(int num);
int main()
{

    char first_name[111], second_name[100];
    int temp=0,temp1=0,i,j,first,second,first_len,second_len;
    float rate,big,small;
    while(scanf("%[^\n]s",first_name)!=EOF)
    {

        first_len = strlen(first_name);
        for(i=0; i<first_len; i++)
        {
            if(  ((first_name[i]>64) && (first_name[i]<91)) || ((first_name[i]>96) && (first_name[i]<123))  )
            {
                if((first_name[i]>64) && (first_name[i]<91))
                {
                    temp = (first_name[i]-64)+temp;
                }
                else
                {
                    temp = (first_name[i]-96)+temp;
                }
            }
        }

        scanf("%*c");
        scanf("%[^\n]s", second_name);
        second_len = strlen(second_name);
        for(j=0; j<second_len; j++)
        {
            if(  ((second_name[j]>64) && (second_name[j]<91)) || ((second_name[j]>96) && (second_name[j]<123))  )
            {
                if((second_name[j]>64) && (second_name[j]<91))
                {
                    temp1 = (second_name[j]-64)+temp1;
                }
                else
                {
                    temp1 = (second_name[j]-96)+temp1;
                }
            }
        }

        //cout<<"temp "<<temp<<endl;
        //cout<<"temp1 "<<temp1<<endl;

        first = sum_of_digit(temp);
        //cout<<"First "<<first<<endl;
        second = sum_of_digit(temp1);
        //cout<<"second "<<second<<endl;

        big=max(first,second);
        //cout<<"big "<<big<<endl;
        small=min(first,second);
        //cout<<"small "<<small<<endl;

        rate = (small/big)*100;
        printf("\nResult of Love Percentage   : %.2f %\n",rate);
        cout<<endl;
        return 0;
        //scanf("%*c");
    }

    return 0;
}

int sum_of_digit(int num)
{
    if (10<=num)
    {
        int result = summing(num);
        return result;
    }
    else
    {
        return num;
    }
}
int summing(int num)
{
    int r,i=10,sum;
    while(i>9)
    {
        sum =0;
        while(num !=0)
        {
            r = num%10;
            sum = sum+r;
            num = num/10;
        }
        num = sum;
        i=num;
    }
    return num;
}



/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "Pulock";
   for(auto c:s)
   {
       cout<<c;

   }

    return 0;
}
*/
