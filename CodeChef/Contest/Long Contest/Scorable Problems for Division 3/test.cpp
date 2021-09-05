#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,ans;
    cin>>t;
    cout<<t<<endl;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        cout<<n<<" "<<a<<" "<<b<<" "<<endl;

            ans=0;
            string s;
            cin>>s;

            cout<<"String : "<<s<<endl;
            for(auto i:s)
            {
                char c = i;
                cout<<"char : "<<c<<endl;
                if(c=='0')
                {
                    ans+=a;

                }
                else ans+=b;
            }

        cout<<"ans  : "<<ans<<endl;
    }
    return 0;
}
