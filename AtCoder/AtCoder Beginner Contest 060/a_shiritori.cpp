#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();


    for(int i=1; i<=3; i++){
        string s;
        char c;
        cin>>c;
        getline(cin, s);
        s = c+s;
        cout<<"Case : "<<i<<"   "<<s<<s.begin()<<"  "<<s.end()<<endl;
    }
    return 0;
}
