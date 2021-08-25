#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,len,c=0,sum,x=0,i,temp;
    char str[81];
    cin >>t;
    while(t--)
    {
        len=0;
        cin >>str;
        len = strlen(str);
        //cout <<t<< ". Show the string  :" <<str <<"    String Length : "<<len << endl;///00X0X00X000
        sum=0;
        for(i=0; i<len; i++)
        {
            temp=0;
            if(str[i]=='O')
            {
                c++;
                temp =c;
                //cout <<i+1<<". Temp : "<<temp<<endl;
            }
            else{
                c=0;
            }
            sum =sum+temp;
            //cout <<i+1<< ". sum for temp : "<<sum<<endl;
        }
        cout <<sum<<endl;
        c=0;
    }
    return 0;
}
