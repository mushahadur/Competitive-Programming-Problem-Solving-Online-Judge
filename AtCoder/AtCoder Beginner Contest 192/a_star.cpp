#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    if(n<100)
    {
        a=100-n;
    }
    else
    {
        b = n%100;
        if(b!=0)
        {

           a=((n/100)*100)-b;
        }
        else
        {
            a=100;
        }
    }
    cout<<a<<endl;

    return 0;
}
