#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    string a="ABC",b="ARC",c="AGC",d="AHC",s[5];
    int x=1,y=1,z=1,w=1;
    for(int i=0; i<3; i++){
            cin>>s[i];
            if(s[i]==a) x=0;
            else if(s[i]==b) y=0;
            else if(s[i]==c) z=0;
            else if(s[i]==d) w=0;
    }
        if(x!=0) cout<<"ABC"<<endl;
        else if(y!=0) cout<<"ARC"<<endl;
        else if(z!=0) cout<<"AGC"<<endl;
        else cout<<"AHC"<<endl;

    return 0;
}
