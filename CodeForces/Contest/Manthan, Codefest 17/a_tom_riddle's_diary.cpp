#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
   optimize();
   map<string, bool>check;

   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    if(check[s]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

       check[s]=1;
   }
   return 0;
}
