#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if( (a+b+c)<=d )cout<<1<<endl;
        else if( (a+b)<=d || (a+c)<=d || (c+b)<=d )cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
