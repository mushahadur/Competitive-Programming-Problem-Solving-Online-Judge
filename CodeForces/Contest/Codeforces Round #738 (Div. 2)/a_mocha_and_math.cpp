#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x=0,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n--)
        {
            x=0;
            cin>>a;
            cout<<"a :"<<a<<"  x :"<<x<<endl;
            x = x^a;
            cout<<"XOE  " <<x<<endl;
            x = x&a;
            cout<<"AND  " <<x<<endl;
        }
        cout<<"ANS :"<<x<<endl;
        x=1;
    }

    return 0;
}
