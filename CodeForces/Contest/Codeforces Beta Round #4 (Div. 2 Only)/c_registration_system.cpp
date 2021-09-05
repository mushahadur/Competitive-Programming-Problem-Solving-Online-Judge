#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
   optimize();
   int t;
   cin>>t;
   map<string, int>cnt;
   while(t--){
    string s;
    cin >>s;
    if(cnt[s]==0)cout<<"OK"<<endl;
    else cout<<s<<cnt[s]<<endl;

    cnt[s]++;
   }
   return 0;
}
