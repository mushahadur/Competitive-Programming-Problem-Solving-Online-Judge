#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        for(auto i:s){
            char c=i;
            if(c == 'U')c='D';
            else if(c == 'D') c='U';
            cout<<c;

        }
        cout<<endl;

    }



    return 0;
}
