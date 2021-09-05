#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if( (a+b<=d) && (c<=e) )
        {
            cout<<"Yes"<<endl;
        }
        else if( (b+c<=d) && (a<=e) )
        {
            cout<<"Yes"<<endl;

        }
        else if( (a+c<=d) && (b<=e) )
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
