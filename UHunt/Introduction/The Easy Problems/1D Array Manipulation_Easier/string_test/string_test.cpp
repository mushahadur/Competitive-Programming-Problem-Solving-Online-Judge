#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,len,c=0,sum,i,temp;
    char str[81];
    cin >>t;
    while(t--)
    {
        len=0;
        cin >>str;
        len = strlen(str);
        sum=0;
        for(i=0; i<len; i++)
        {
            temp=0;
            if(str[i]=='O')
            {
                c++;
                temp =c;
            }
            else{
                c=0;
            }
            sum =sum+temp;
        }
        cout <<sum<<endl;
        c=0;
    }
    return 0;
}

