#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
    int n,m;
    cin>>n>>m;
    map<string, string>ipname;
    for(int i=0; i<n; i++){
        string name,ip;
        cin>>name>>ip;
        ipname[ip] = name;
    }
    while(m--){
        string s1,ip;
        cin>>s1>>ip;
        ip.pop_back();
        cout<<s1<<" "<<ip<<"; #"<<ipname[ip]<<endl;
    }


    return 0;
}
