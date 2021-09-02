///  A. Haiku  ^^ https://codeforces.com/contest/78/problem/A
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
bool isVowel(char c)
    {
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

int main()
{
   optimize();
   vector<string>v;
   int i,j,k;
   int cnt[]={5,7,5};
    for(i=0; i<3; i++)
    {
        string s;
        char c;
        cin>>c;
        getline(cin,s);
        s+=c;
        v.push_back(s);
    }
    for(k=0; k<3; k++){
        int c=0;
        for(auto j:v[k]){
            if(isVowel(j))c++;
        }
        if(c !=cnt[k])return cout<<"NO\n",0;
    }
    cout<<"YES\n";


    return 0;
}

