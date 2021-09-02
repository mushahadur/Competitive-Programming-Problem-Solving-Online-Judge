#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        string s,temp;
        cin>>s;
        temp = s;
        reverse(temp.begin(), temp.end());
        if(s==temp) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}
