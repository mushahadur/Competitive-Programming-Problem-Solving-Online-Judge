#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int t,ans;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
            string s;
            cin>>s;
            ans=0;
            for(auto i:s){
                char c = i;
                if(c=='0')ans+=a;
                else ans+=b;
            }
        cout<<ans<<endl;
    }
    return 0;
}
