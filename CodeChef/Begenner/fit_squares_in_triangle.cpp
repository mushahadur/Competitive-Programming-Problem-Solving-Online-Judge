#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,are;
        cin>>b;
        if(b==1 || b==2 || b==3)cout<<0<<endl;
        else{
            if(b%2==0){
                are = 0.5*b*b;
                cout<<((are-b)/4)<<endl;
            }

            else{
                b-=1;
                int are2 = 0.5*b*b;
                cout<<((are2-b)/4)<<endl;
            }

        }
    }

    return 0;
}

/**
    int t; cin>>t;
    while(t--){
        int b; cin>>b;
        b-=2;
        b/=2;
        cout<<((b*(b-1))/2)<<endl;
*/
