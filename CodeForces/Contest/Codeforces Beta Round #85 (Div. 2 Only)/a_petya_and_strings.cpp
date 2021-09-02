/// A. Petya and Strings  ^^ https://codeforces.com/contest/112/problem/A
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
   optimize();
   string s,a;
    cin>>s>>a;
    for(int i=0; i<s.size(); i++)s[i]=tolower(s[i]);
    for(int i=0; i<a.size(); i++)a[i]=tolower(a[i]);
    if(s<a)cout<<"-1";
    else if(s>a)cout<<"1";
    else cout<<"0";


    return 0;
}

